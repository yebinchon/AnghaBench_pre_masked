
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double,double,double,double,double,double*) ;
 int FUNC_1 (char*,char*,double,int,double) ;

__attribute__((used)) static void
FUNC_2(
 double VAR_0,
 double VAR_1,
 double VAR_2,
 double VAR_3,
 double VAR_4,
 char *VAR_5
 )
{
 int VAR_6;
 double VAR_7;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7);
 FUNC_1("%sheight %g km, hops %d, delay %g seconds\n",
        VAR_5, VAR_4, VAR_6, VAR_7);
}
