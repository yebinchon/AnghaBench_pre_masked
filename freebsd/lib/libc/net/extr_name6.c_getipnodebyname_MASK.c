
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


union inx_addr {int in_addr; } ;
typedef int u_long ;
struct in_addr {int dummy; } ;
struct hostent {int h_name; } ;
typedef TYPE_1__* res_state ;
struct TYPE_5__ {int options; int res_h_errno; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union inx_addr*,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int) ;
 struct hostent* FUNC_4 (int,char const*,union inx_addr*,int*) ;
 struct hostent* FUNC_5 (struct hostent*,int*) ;
 struct hostent* FUNC_6 (struct hostent*,int*) ;
 struct hostent* FUNC_7 (struct hostent*,struct hostent*,int*) ;
 struct hostent* FUNC_8 (struct hostent*) ;
 struct hostent* FUNC_9 (struct hostent*,TYPE_1__*) ;
 int FUNC_10 (int,int,int ) ;
 int FUNC_11 (struct hostent*) ;
 struct hostent* FUNC_12 (char const*,int const) ;
 int FUNC_13 (char const*,struct in_addr*) ;
 int FUNC_14 (int const,char const*,union inx_addr*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (int ,int ) ;

struct hostent *
FUNC_17(const char *VAR_9, int VAR_10, int VAR_11, int *VAR_12)
{
 struct hostent *VAR_13;
 union inx_addr VAR_14;
 res_state VAR_15;
 u_long VAR_16;

 switch (VAR_10) {
 case 129:



  break;
 default:
  *VAR_12 = VAR_4;
  return ((void*)0);
 }

 if (VAR_11 & VAR_0) {
  int VAR_17;

  if ((VAR_17 = FUNC_10(VAR_10, VAR_8 | VAR_7, 0)) < 0)
   return ((void*)0);







  FUNC_3(VAR_17);
 }
 if (FUNC_13(VAR_9, (struct in_addr *)&VAR_14) == 1) {
  if (VAR_10 != 129) {
   if (FUNC_1(VAR_11)) {
    FUNC_0(&VAR_14, &VAR_14.in_addr);
   } else {
    *VAR_12 = VAR_2;
    return ((void*)0);
   }
  }
  return FUNC_4(VAR_10, VAR_9, &VAR_14, VAR_12);
 }


 VAR_15 = FUNC_2();
 if ((VAR_15->options & VAR_5) == 0) {
  if (FUNC_15(VAR_15) < 0) {
   *VAR_12 = VAR_3;
   return ((void*)0);
  }
 }

 VAR_16 = VAR_15->options;
 VAR_15->options &= ~VAR_6;

 VAR_13 = FUNC_12(VAR_9, VAR_10);
 VAR_13 = FUNC_5(VAR_13, VAR_12);
 if (VAR_13 == ((void*)0))
  *VAR_12 = VAR_15->res_h_errno;

 VAR_15->options = VAR_16;
 return FUNC_9(VAR_13, VAR_15);
}
