
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldexp_test {double x; int * result; int exp2; int exp1; } ;
typedef int outbuf ;


 int FUNC_0 (int *,char*,char*,size_t,int *,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 double FUNC_1 (double,int ) ;
 int FUNC_2 (char*,int,char*,double) ;

__attribute__((used)) static void
FUNC_3(struct ldexp_test *VAR_2)
{
 char VAR_3[64];
 size_t VAR_4;
 double VAR_5;

 for (VAR_4 = 0; VAR_2->result != ((void*)0); VAR_2++, VAR_4++) {

  VAR_5 = FUNC_1(VAR_2->x, VAR_2->exp1);

  if (VAR_2->exp2 != VAR_1)
   VAR_5 = FUNC_1(VAR_5, VAR_2->exp2);

  (void)FUNC_2(VAR_3, sizeof(VAR_3), VAR_0, VAR_5);

  FUNC_0(VAR_2->result, VAR_3,
       "Entry %zu:\n\tExp: \"%s\"\n\tAct: \"%s\"",
       VAR_4, VAR_2->result, VAR_3);
 }
}
