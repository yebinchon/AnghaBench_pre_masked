
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lzma_ret ;


 int VAR_0 ;
 char const* FUNC_0 (char*) ;
 char const* FUNC_1 (int ) ;

extern const char *
FUNC_2(lzma_ret VAR_1)
{
 switch (VAR_1) {
 case 133:
  return FUNC_0("No integrity check; not verifying file integrity");

 case 128:
  return FUNC_0("Unsupported type of integrity check; "
    "not verifying file integrity");

 case 134:
  return FUNC_1(VAR_0);

 case 135:
  return FUNC_0("Memory usage limit reached");

 case 137:
  return FUNC_0("File format not recognized");

 case 131:
  return FUNC_0("Unsupported options");

 case 138:
  return FUNC_0("Compressed data is corrupt");

 case 139:
  return FUNC_0("Unexpected end of input");

 case 132:
 case 129:
 case 136:
 case 130:



  break;
 }

 return FUNC_0("Internal error (bug)");
}
