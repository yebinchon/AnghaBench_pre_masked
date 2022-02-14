
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct addrinfo {struct addrinfo* ai_next; scalar_t__ ai_addr; } ;
struct addr_ptr {int aval; struct addrinfo* ai; } ;
typedef TYPE_4__* res_state ;
struct TYPE_9__ {unsigned int nsort; TYPE_3__* sort_list; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_8__ {int mask; TYPE_1__ addr; } ;


 int FUNC_0 (struct addr_ptr*) ;
 struct addr_ptr* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct addrinfo *VAR_0, res_state VAR_1)
{
 struct addrinfo *VAR_2;
 struct addr_ptr *VAR_3, VAR_4;
 struct sockaddr_in *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 if (!VAR_0)
  return -1;
 VAR_6 = 0;
 for (VAR_2 = VAR_0->ai_next; VAR_2; VAR_2 = VAR_2->ai_next)
  VAR_6++;
 if (VAR_6 < 2)
  return 0;
 if ((VAR_3 = FUNC_1(sizeof(struct addr_ptr) * VAR_6)) == ((void*)0))
  return -1;
 VAR_7 = 0;
 for (VAR_2 = VAR_0->ai_next; VAR_2; VAR_2 = VAR_2->ai_next) {
  VAR_5 = (struct sockaddr_in *)VAR_2->ai_addr;
  for (VAR_8 = 0; (unsigned)VAR_8 < VAR_1->nsort; VAR_8++) {
   if (VAR_1->sort_list[VAR_8].addr.s_addr ==
       (VAR_5->sin_addr.s_addr & VAR_1->sort_list[VAR_8].mask))
    break;
  }
  VAR_3[VAR_7].ai = VAR_2;
  VAR_3[VAR_7].aval = VAR_8;
  if (VAR_9 == 0 && VAR_7 > 0 && VAR_8 < VAR_3[VAR_7 - 1].aval)
   VAR_9 = VAR_7;
  VAR_7++;
 }
 if (!VAR_9) {
  FUNC_0(VAR_3);
  return 0;
 }

 while (VAR_9 < VAR_6) {
  for (VAR_8 = VAR_9 - 1; VAR_8 >= 0; VAR_8--) {
   if (VAR_3[VAR_8].aval > VAR_3[VAR_8+1].aval) {
    VAR_4 = VAR_3[VAR_8];
    VAR_3[VAR_8] = VAR_3[VAR_8 + 1];
    VAR_3[VAR_8 + 1] = VAR_4;
   } else
    break;
  }
  VAR_9++;
 }

 VAR_2 = VAR_0;
 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  VAR_2->ai_next = VAR_3[VAR_7].ai;
  VAR_2 = VAR_2->ai_next;
 }
 VAR_2->ai_next = ((void*)0);
 FUNC_0(VAR_3);
 return 0;
}
