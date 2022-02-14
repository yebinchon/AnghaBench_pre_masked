
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcfile {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rcfile*,char const*,char const*,char**) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,char const*,size_t) ;

int
FUNC_4(struct rcfile *VAR_1, const char *VAR_2, const char *VAR_3,
 size_t VAR_4, char *VAR_5)
{
 char *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;
 if (FUNC_2(VAR_6) >= VAR_4) {
  FUNC_3("line too long for key '%s' in section '%s', max = %zd\n", VAR_3, VAR_2, VAR_4);
  return VAR_0;
 }
 FUNC_1(VAR_5, VAR_6);
 return 0;
}
