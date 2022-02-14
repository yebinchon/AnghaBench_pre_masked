
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {char* val; int len; } ;


 struct data FUNC_0 (int ,int) ;
 int VAR_0 ;
 char FUNC_1 (char const*,int*) ;

struct data FUNC_2(const char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct data VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_2 + 1);

 VAR_5 = VAR_4.val;
 while (VAR_3 < VAR_2) {
  char VAR_6 = VAR_1[VAR_3++];

  if (VAR_6 == '\\')
   VAR_6 = FUNC_1(VAR_1, &VAR_3);

  VAR_5[VAR_4.len++] = VAR_6;
 }

 VAR_5[VAR_4.len++] = '\0';
 return VAR_4;
}
