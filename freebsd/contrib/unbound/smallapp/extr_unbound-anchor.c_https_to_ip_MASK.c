
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_list {int dummy; } ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int,int *,int *) ;
 int FUNC_4 (struct ip_list*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 () ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (int *,char const*,char const*) ;

__attribute__((used)) static BIO*
FUNC_10(struct ip_list* VAR_1, const char* VAR_2, const char* VAR_3)
{
 int VAR_4;
 SSL* VAR_5;
 BIO* VAR_6;
 SSL_CTX* VAR_7 = FUNC_8();
 if(!VAR_7) {
  return ((void*)0);
 }
 VAR_4 = FUNC_4(VAR_1);
 if(VAR_4 == -1) {
  FUNC_0(VAR_7);
  return ((void*)0);
 }
 VAR_5 = FUNC_2(VAR_7, VAR_4);
 if(!VAR_5) {
  FUNC_0(VAR_7);
  FUNC_5(VAR_4);
  return ((void*)0);
 }
 if(!FUNC_9(VAR_5, VAR_2, VAR_3)) {
  if(VAR_0) FUNC_6("could not write to server\n");
  FUNC_1(VAR_5);
  FUNC_0(VAR_7);
  FUNC_5(VAR_4);
  return ((void*)0);
 }
 VAR_6 = FUNC_7(VAR_5);
 FUNC_3(VAR_4, VAR_5, VAR_7);
 return VAR_6;
}
