
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int SSL ;


 scalar_t__ FUNC_0 (int *,char const*,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int,char const*,size_t,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(SSL* VAR_1, int VAR_2, const char* VAR_3, size_t VAR_4)
{
 if(VAR_1) {
  if(FUNC_0(VAR_1, VAR_3, (int)VAR_4) <= 0)
   FUNC_4("could not SSL_write");
 } else {
  if(FUNC_3(VAR_2, VAR_3, VAR_4, 0) < (ssize_t)VAR_4) {

   FUNC_2("could not send: %s", FUNC_5(VAR_0));



  }
 }
}
