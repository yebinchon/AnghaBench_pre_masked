
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const*,size_t) ;
 char* FUNC_1 (char const*) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0)
{
 const char *VAR_1 = "label\0severity\0text\0action\0tag\0";
 char *VAR_2;
 size_t VAR_3, VAR_4;
 const char *VAR_5;
 int VAR_6;

 VAR_6 = 0;
 while ((VAR_2 = FUNC_1(VAR_0)) != ((void*)0)) {
  VAR_6--;
  VAR_3 = FUNC_2(VAR_2);
  for (VAR_5 = VAR_1; (VAR_4 = FUNC_2(VAR_5)) != 0; VAR_5 += VAR_4 + 1) {
   if (VAR_3 == VAR_4 && FUNC_0(VAR_2, VAR_5, VAR_3) == 0)
    VAR_6++;
  }
 }
 return (!VAR_6);
}
