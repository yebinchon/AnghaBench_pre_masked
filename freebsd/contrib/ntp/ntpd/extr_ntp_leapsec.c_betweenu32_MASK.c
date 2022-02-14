
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;



__attribute__((used)) static int
FUNC_0(
 uint32_t VAR_0,
 uint32_t VAR_1,
 uint32_t VAR_2)
{
 int VAR_3;

 if (VAR_0 <= VAR_2)
  VAR_3 = (VAR_0 <= VAR_1) && (VAR_1 < VAR_2);
 else
  VAR_3 = (VAR_0 <= VAR_1) || (VAR_1 < VAR_2);
 return VAR_3;
}
