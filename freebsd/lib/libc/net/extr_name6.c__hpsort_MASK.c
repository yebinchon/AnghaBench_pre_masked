
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct hostent {scalar_t__ h_addrtype; int h_length; int ** h_addr_list; } ;
typedef TYPE_6__* res_state ;
struct TYPE_10__ {TYPE_2__* ext; } ;
struct TYPE_11__ {TYPE_3__ _ext; } ;
struct TYPE_13__ {int nsort; TYPE_5__* sort_list; TYPE_4__ _u; } ;
struct TYPE_12__ {int mask; int addr; } ;
struct TYPE_9__ {TYPE_1__* sort_list; } ;
struct TYPE_8__ {scalar_t__ af; int mask; int addr; } ;


 int VAR_0 ;

__attribute__((used)) static struct hostent *
FUNC_0(struct hostent *VAR_1, res_state VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 u_char *VAR_6, *VAR_7, *VAR_8, **VAR_9;
 char VAR_10;
 char VAR_11[VAR_0];
 int VAR_12 = VAR_2->nsort;

 if (VAR_1 == ((void*)0) || VAR_1->h_addr_list[1] == ((void*)0) || VAR_12 == 0)
  return VAR_1;
 for (VAR_3 = 0; (VAR_6 = (u_char *)VAR_1->h_addr_list[VAR_3]); VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_12; VAR_4++) {







   VAR_7 = (u_char *)&VAR_2->sort_list[VAR_4].addr;
   VAR_8 = (u_char *)&VAR_2->sort_list[VAR_4].mask;

   for (VAR_5 = 0; VAR_5 < VAR_1->h_length; VAR_5++) {
    if ((VAR_6[VAR_5] & VAR_8[VAR_5]) != VAR_7[VAR_5])
     break;
   }
   if (VAR_5 == VAR_1->h_length)
    break;
  }
  VAR_11[VAR_3] = VAR_4;
 }
 VAR_5 = VAR_3;
 VAR_9 = (u_char **)VAR_1->h_addr_list;
 for (VAR_3 = 0; VAR_3 < VAR_5 - 1; VAR_3++) {
  for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_5; VAR_4++) {
   if (VAR_11[VAR_3] > VAR_11[VAR_4]) {
    VAR_6 = VAR_9[VAR_3];
    VAR_9[VAR_3] = VAR_9[VAR_4];
    VAR_9[VAR_4] = VAR_6;
    VAR_10 = VAR_11[VAR_3];
    VAR_11[VAR_3] = VAR_11[VAR_4];
    VAR_11[VAR_4] = VAR_10;
   }
  }
 }
 return VAR_1;
}
