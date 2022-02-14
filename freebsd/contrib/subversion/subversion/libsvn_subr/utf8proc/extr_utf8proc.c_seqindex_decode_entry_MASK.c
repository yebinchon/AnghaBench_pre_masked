
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8proc_uint16_t ;
typedef int utf8proc_int32_t ;



__attribute__((used)) static utf8proc_int32_t FUNC_0(const utf8proc_uint16_t **VAR_0)
{
  utf8proc_int32_t VAR_1 = **VAR_0;
  if ((VAR_1 & 0xF800) == 0xD800) {
    *VAR_0 = *VAR_0 + 1;
    VAR_1 = ((VAR_1 & 0x03FF) << 10) | (**VAR_0 & 0x03FF);
    VAR_1 += 0x10000;
  }
  return VAR_1;
}
