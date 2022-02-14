
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct in_addr {int s_addr; } ;
struct in6_addr {int dummy; } ;
struct hostent {int dummy; } ;
typedef TYPE_1__* res_state ;
struct TYPE_5__ {int options; int res_h_errno; } ;




 int FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (struct in6_addr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_4 () ;
 struct hostent* FUNC_5 (struct hostent*,int*) ;
 struct hostent* FUNC_6 (void const*,size_t,int) ;
 int FUNC_7 (struct in_addr*,void const*,size_t) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (long,int) ;

struct hostent *
FUNC_10(const void *VAR_4, size_t VAR_5, int VAR_6, int *VAR_7)
{
 struct hostent *VAR_8;
 res_state VAR_9;
 u_long VAR_10;




 struct in_addr VAR_11;


 switch (VAR_6) {
 case 129:
  if (VAR_5 != sizeof(struct in_addr)) {
   *VAR_7 = VAR_1;
   return ((void*)0);
  }
  if (FUNC_9((long)VAR_4, sizeof(struct in_addr))) {
   FUNC_7(&VAR_11, VAR_4, VAR_5);
   VAR_4 = &VAR_11;
  }
  if (((struct in_addr *)VAR_4)->s_addr == 0)
   return ((void*)0);
  break;
 default:
  *VAR_7 = VAR_1;
  return ((void*)0);
 }

 VAR_9 = FUNC_4();
 if ((VAR_9->options & VAR_2) == 0) {
  if (FUNC_8(VAR_9) < 0) {
   FUNC_3(VAR_9, VAR_0);
   return ((void*)0);
  }
 }

 VAR_10 = VAR_9->options;
 VAR_9->options &= ~VAR_3;

 VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_6);
 if (VAR_8 == ((void*)0))
  *VAR_7 = VAR_9->res_h_errno;

 VAR_9->options = VAR_10;
 return (FUNC_5(VAR_8, VAR_7));
}
