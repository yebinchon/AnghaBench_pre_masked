
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evkeyvalq {int dummy; } ;
typedef int len ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct evkeyvalq*,char*,char*) ;
 int * FUNC_2 (struct evkeyvalq*,char*) ;
 int FUNC_3 (char*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct evkeyvalq *VAR_1,
    size_t VAR_2)
{
 if (FUNC_2(VAR_1, "Transfer-Encoding") == ((void*)0) &&
     FUNC_2(VAR_1, "Content-Length") == ((void*)0)) {
  char VAR_3[22];
  FUNC_3(VAR_3, sizeof(VAR_3), VAR_0,
      FUNC_0(VAR_2));
  FUNC_1(VAR_1, "Content-Length", VAR_3);
 }
}
