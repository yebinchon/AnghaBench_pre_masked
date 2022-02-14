
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpio {int chunked; int * conn; } ;
typedef int conn_t ;
typedef int FILE ;


 struct httpio* FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct httpio*) ;
 int * FUNC_3 (struct httpio*,int ,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static FILE *
FUNC_4(conn_t *VAR_3, int VAR_4)
{
 struct httpio *VAR_5;
 FILE *VAR_6;

 if ((VAR_5 = FUNC_0(1, sizeof(*VAR_5))) == ((void*)0)) {
  FUNC_1();
  return (((void*)0));
 }
 VAR_5->conn = VAR_3;
 VAR_5->chunked = VAR_4;
 VAR_6 = FUNC_3(VAR_5, VAR_1, VAR_2, ((void*)0), VAR_0);
 if (VAR_6 == ((void*)0)) {
  FUNC_1();
  FUNC_2(VAR_5);
  return (((void*)0));
 }
 return (VAR_6);
}
