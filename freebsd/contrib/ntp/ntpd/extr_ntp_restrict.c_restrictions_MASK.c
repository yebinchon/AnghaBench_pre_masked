
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
typedef int sockaddr_u ;
struct TYPE_8__ {int ippeerlimit; int rflags; int count; } ;
typedef TYPE_1__ restrict_u ;
struct TYPE_9__ {int ippeerlimit; int rflags; } ;
typedef TYPE_2__ r4addr ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 struct in6_addr* FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (int ,int ) ;
 TYPE_1__* FUNC_11 (struct in6_addr*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_12 (int *) ;

void
FUNC_13(
 sockaddr_u *VAR_6,
 r4addr *VAR_7
 )
{
 restrict_u *VAR_8;
 struct in6_addr *VAR_9;

 FUNC_7(((void*)0) != VAR_7);

 VAR_1++;
 VAR_7->rflags = VAR_0;
 VAR_7->ippeerlimit = 0;

 FUNC_0(1, ("restrictions: looking up %s\n", FUNC_12(VAR_6)));


 if (FUNC_4(VAR_6)) {





  if (FUNC_3(FUNC_8(VAR_6))) {
   FUNC_0(1, ("restrictions: srcadr %s is multicast\n", FUNC_12(VAR_6)));
   VAR_7->ippeerlimit = 2;
   return;
  }

  VAR_8 = FUNC_10(FUNC_8(VAR_6),
          FUNC_9(VAR_6));

  FUNC_2(VAR_8 != ((void*)0));

  VAR_8->count++;





  if (&VAR_4 == VAR_8)
   VAR_3++;
  else
   VAR_2++;
  VAR_7->rflags = VAR_8->rflags;
  VAR_7->ippeerlimit = VAR_8->ippeerlimit;
 }


 if (FUNC_5(VAR_6)) {
  VAR_9 = FUNC_6(VAR_6);






  if (FUNC_1(VAR_9))
   return;

  VAR_8 = FUNC_11(VAR_9, FUNC_9(VAR_6));
  FUNC_2(VAR_8 != ((void*)0));
  VAR_8->count++;
  if (&VAR_5 == VAR_8)
   VAR_3++;
  else
   VAR_2++;
  VAR_7->rflags = VAR_8->rflags;
  VAR_7->ippeerlimit = VAR_8->ippeerlimit;
 }
 return;
}
