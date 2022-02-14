
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_path_info {char* name; int const_len; scalar_t__ depth; int is_patterned; } ;


 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int const) ;
 int FUNC_3 (char const*,char const*,char const*,char const*) ;
 int FUNC_4 (struct tomoyo_path_info const*,struct tomoyo_path_info const*) ;

bool FUNC_5(const struct tomoyo_path_info *VAR_0,
     const struct tomoyo_path_info *VAR_1)
{




 const char *VAR_2 = VAR_0->name;
 const char *VAR_3 = VAR_1->name;
 const int VAR_4 = VAR_1->const_len;


 if (!VAR_1->is_patterned)
  return !FUNC_4(VAR_0, VAR_1);

 if (VAR_0->depth != VAR_1->depth)
  return 0;

 if (FUNC_2(VAR_2, VAR_3, VAR_4))
  return 0;
 VAR_2 += VAR_4;
 VAR_3 += VAR_4;

 while (*VAR_2 && *VAR_3) {
  const char *VAR_5 = FUNC_0(VAR_2, '/');
  const char *VAR_6 = FUNC_0(VAR_3, '/');
  if (!VAR_5)
   VAR_5 = VAR_2 + FUNC_1(VAR_2);
  if (!VAR_6)
   VAR_6 = VAR_3 + FUNC_1(VAR_3);
  if (!FUNC_3(VAR_2, VAR_5,
          VAR_3, VAR_6))
   return 0;
  VAR_2 = VAR_5;
  if (*VAR_2)
   VAR_2++;
  VAR_3 = VAR_6;
  if (*VAR_3)
   VAR_3++;
 }

 while (*VAR_3 == '\\' &&
        (*(VAR_3 + 1) == '*' || *(VAR_3 + 1) == '@'))
  VAR_3 += 2;
 return !*VAR_2 && !*VAR_3;
}
