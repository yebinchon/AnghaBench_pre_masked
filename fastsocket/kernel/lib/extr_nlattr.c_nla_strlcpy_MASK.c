
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,int ,size_t) ;
 char* FUNC_2 (struct nlattr const*) ;
 size_t FUNC_3 (struct nlattr const*) ;

size_t FUNC_4(char *VAR_0, const struct nlattr *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = FUNC_3(VAR_1);
 char *VAR_4 = FUNC_2(VAR_1);

 if (VAR_3 > 0 && VAR_4[VAR_3 - 1] == '\0')
  VAR_3--;

 if (VAR_2 > 0) {
  size_t VAR_5 = (VAR_3 >= VAR_2) ? VAR_2 - 1 : VAR_3;

  FUNC_1(VAR_0, 0, VAR_2);
  FUNC_0(VAR_0, VAR_4, VAR_5);
 }

 return VAR_3;
}
