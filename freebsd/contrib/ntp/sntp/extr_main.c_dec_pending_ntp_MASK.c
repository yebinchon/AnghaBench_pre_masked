
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sockaddr_u ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,int *) ;
 scalar_t__ VAR_0 ;

void FUNC_4(
 const char * VAR_1,
 sockaddr_u * VAR_2
 )
{
 if (VAR_0 > 0) {
  --VAR_0;
  FUNC_2();
 } else {
  FUNC_0(0 == VAR_0);
  FUNC_1(1, ("n_pending_ntp was zero before decrement for %s\n",
     FUNC_3(VAR_1, VAR_2)));
 }
}
