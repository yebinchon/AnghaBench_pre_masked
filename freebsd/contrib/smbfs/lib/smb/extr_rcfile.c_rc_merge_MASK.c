
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcfile {int * rf_f; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,char*,struct rcfile**) ;
 int FUNC_3 (struct rcfile*) ;

int
FUNC_4(const char *VAR_1, struct rcfile **VAR_2)
{
 struct rcfile *VAR_3 = *VAR_2;
 FILE *VAR_4, *VAR_5;

 if (VAR_3 == ((void*)0)) {
  return FUNC_2(VAR_1, "r", VAR_2);
 }
 VAR_4 = FUNC_1 (VAR_1, "r");
 if (VAR_4 == ((void*)0))
  return VAR_0;
 VAR_5 = VAR_3->rf_f;
 VAR_3->rf_f = VAR_4;
 FUNC_3(VAR_3);
 VAR_3->rf_f = VAR_5;
 FUNC_0(VAR_4);
 return 0;
}
