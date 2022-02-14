
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcfile {int * rf_f; int rf_name; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,struct rcfile*,int ) ;
 int FUNC_1 (struct rcfile*,int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char const*) ;
 struct rcfile* FUNC_4 (int) ;
 int VAR_2 ;
 struct rcfile* FUNC_5 (char const*) ;
 int FUNC_6 (struct rcfile*) ;
 int VAR_3 ;
 int FUNC_7 (char const*) ;

int
FUNC_8(const char *VAR_4, const char *VAR_5, struct rcfile **VAR_6)
{
 struct rcfile *VAR_7;
 FILE *VAR_8;

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7) {
  *VAR_6 = VAR_7;
  return 0;
 }
 VAR_8 = FUNC_3(VAR_4, VAR_5);
 if (VAR_8 == ((void*)0))
  return VAR_1;
 VAR_7 = FUNC_4(sizeof(struct rcfile));
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_8);
  return VAR_0;
 }
 FUNC_1(VAR_7, sizeof(struct rcfile));
 VAR_7->rf_name = FUNC_7(VAR_4);
 VAR_7->rf_f = VAR_8;
 FUNC_0(&VAR_2, VAR_7, VAR_3);
 FUNC_6(VAR_7);
 *VAR_6 = VAR_7;
 return 0;
}
