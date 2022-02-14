
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum darwin_section_enum { ____Placeholder_darwin_section_enum } darwin_section_enum ;


 size_t FUNC_0 (int const*) ;
 int * VAR_0 ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (const void *VAR_1)
{
  static bool VAR_2 = 0;

  if (! VAR_2)
    {
      static const enum darwin_section_enum VAR_3[] =
 {

   147,
   146,
   129,
   139,
   130,
   131,
   140,
   143,
   136,

   141,
   138,
   132,
   144,
   134,
   135,
   145,
   142,
   137,
   133,
   128
 };
      size_t VAR_4;

      VAR_2 = 1;
      for (VAR_4 = 0; VAR_4 < FUNC_0 (VAR_3); VAR_4++)
 FUNC_2 (VAR_0[VAR_3[VAR_4]]);
    }
  FUNC_1 (VAR_1);
}
