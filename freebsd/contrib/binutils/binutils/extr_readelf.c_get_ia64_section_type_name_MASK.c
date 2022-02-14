
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;


 char const* FUNC_0 (unsigned int) ;

__attribute__((used)) static const char *
FUNC_1 (unsigned int VAR_1)
{

  if ((VAR_1 & 0xFF000000) == VAR_0)
    return FUNC_0 ((VAR_1 & 0x00FF0000) >> 16);

  switch (VAR_1)
    {
    case 130: return "IA_64_EXT";
    case 128: return "IA_64_UNWIND";
    case 129: return "IA_64_PRIORITY_INIT";
    default:
      break;
    }
  return ((void*)0);
}
