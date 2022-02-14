
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
struct pt_section {struct pt_sec_windows_mapping* mapping; } ;
struct pt_sec_windows_mapping {int * begin; } ;


 int FUNC_0 (int *,int const*,scalar_t__) ;
 int VAR_0 ;

int FUNC_1(const struct pt_section *VAR_1, uint8_t *VAR_2,
        uint16_t VAR_3, uint64_t VAR_4)
{
 struct pt_sec_windows_mapping *VAR_5;
 const uint8_t *VAR_6;

 if (!VAR_2 || !VAR_1)
  return -VAR_0;

 VAR_5 = VAR_1->mapping;
 if (!VAR_5)
  return -VAR_0;







 VAR_6 = VAR_5->begin + VAR_4;

 FUNC_0(VAR_2, VAR_6, VAR_3);
 return (int) VAR_3;
}
