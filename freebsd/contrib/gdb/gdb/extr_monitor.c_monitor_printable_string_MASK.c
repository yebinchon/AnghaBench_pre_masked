
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, char *VAR_1, int VAR_2)
{
  int VAR_3;
  int VAR_4;

  if (VAR_2 <= 0)
    VAR_2 = FUNC_2 (VAR_1);

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
      VAR_3 = VAR_1[VAR_4];
      switch (VAR_3)
 {
 default:
   if (FUNC_0 (VAR_3))
     *VAR_0++ = VAR_3;

   else
     {
       FUNC_1 (VAR_0, "\\x%02x", VAR_3 & 0xff);
       VAR_0 += 4;
     }
   break;

 case '\\':
   *VAR_0++ = '\\';
   *VAR_0++ = '\\';
   break;
 case '\b':
   *VAR_0++ = '\\';
   *VAR_0++ = 'b';
   break;
 case '\f':
   *VAR_0++ = '\\';
   *VAR_0++ = 't';
   break;
 case '\n':
   *VAR_0++ = '\\';
   *VAR_0++ = 'n';
   break;
 case '\r':
   *VAR_0++ = '\\';
   *VAR_0++ = 'r';
   break;
 case '\t':
   *VAR_0++ = '\\';
   *VAR_0++ = 't';
   break;
 case '\v':
   *VAR_0++ = '\\';
   *VAR_0++ = 'v';
   break;
 }
    }

  *VAR_0++ = '\0';
}
