
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 size_t FUNC_0 (char const* const*) ;





 char const* const FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(uint32_t VAR_0)
{
 static const char * const VAR_1[] = {

  [132] = "FDT_BEGIN_NODE",
  [130] = "FDT_END_NODE",
  [128] = "FDT_PROP",
  [129] = "FDT_NOP",
  [131] = "FDT_END",

 };
 if (VAR_0 < FUNC_0(VAR_1))
  if (VAR_1[VAR_0])
   return VAR_1[VAR_0];
 return "FDT_???";
}
