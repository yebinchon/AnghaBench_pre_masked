
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,char*,char const*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_3, const char *VAR_4)
{
 int VAR_5;

 if (VAR_1 >= VAR_0)
  return (-1);


 VAR_5 = FUNC_1(VAR_3) + FUNC_1(VAR_4);
 if (VAR_5 + 3 < VAR_0 - VAR_1) {
  VAR_5 = FUNC_0(&VAR_2[VAR_1], "%s=%s", VAR_3, VAR_4);
  VAR_1 += VAR_5+1;
  VAR_2[VAR_1] = '\0';
  return (0);
 } else
  return (-1);

}
