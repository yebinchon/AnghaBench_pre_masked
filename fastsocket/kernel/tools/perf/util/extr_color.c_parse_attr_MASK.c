
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;
 int FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int VAR_1)
{
 static const int VAR_2[] = { 1, 2, 4, 5, 7 };
 static const char * const VAR_3[] = {
  "bold", "dim", "ul", "blink", "reverse"
 };
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  const char *VAR_5 = VAR_3[VAR_4];
  if (!FUNC_1(VAR_0, VAR_5, VAR_1) && !VAR_5[VAR_1])
   return VAR_2[VAR_4];
 }
 return -1;
}
