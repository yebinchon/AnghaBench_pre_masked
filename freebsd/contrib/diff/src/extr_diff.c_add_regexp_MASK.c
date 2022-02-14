
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regexp_list {char* regexps; size_t len; int multiple_regexps; size_t size; int buf; } ;


 int FUNC_0 (int ,int ,char*,char const*,char const*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char const*,size_t,int ) ;
 size_t FUNC_3 (char const*) ;
 char* FUNC_4 (char*,size_t) ;

__attribute__((used)) static void
FUNC_5 (struct regexp_list *VAR_0, char const *VAR_1)
{
  size_t VAR_2 = FUNC_3 (VAR_1);
  char const *VAR_3 = FUNC_2 (VAR_1, VAR_2, VAR_0->buf);

  if (VAR_3 != 0)
    FUNC_0 (0, 0, "%s: %s", VAR_1, VAR_3);
  else
    {
      char *VAR_4 = VAR_0->regexps;
      size_t VAR_5 = VAR_0->len;
      bool VAR_6 = VAR_0->multiple_regexps = VAR_4 != 0;
      size_t VAR_7 = VAR_0->len = VAR_5 + 2 * VAR_6 + VAR_2;
      size_t VAR_8 = VAR_0->size;

      if (VAR_8 <= VAR_7)
 {
   if (!VAR_8)
     VAR_8 = 1;

   do VAR_8 *= 2;
   while (VAR_8 <= VAR_7);

   VAR_0->size = VAR_8;
   VAR_0->regexps = VAR_4 = FUNC_4 (VAR_4, VAR_8);
 }
      if (VAR_6)
 {
   VAR_4[VAR_5++] = '\\';
   VAR_4[VAR_5++] = '|';
 }
      FUNC_1 (VAR_4 + VAR_5, VAR_1, VAR_2 + 1);
    }
}
