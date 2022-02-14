
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, u32 VAR_1)
{
 if (VAR_1 == 0)
  return VAR_0;

 return (VAR_0 << (VAR_1 & 31)) | (VAR_0 >> (32 - (VAR_1 & 31)));
}
