
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct pt_section {int (* read ) (struct pt_section const*,int *,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_section const*,int *,int ,int ) ;

int FUNC_1(const struct pt_section *VAR_2, uint8_t *VAR_3,
      uint16_t VAR_4, uint64_t VAR_5)
{
 if (!VAR_2)
  return -VAR_0;

 if (!VAR_2->read)
  return -VAR_1;

 return VAR_2->read(VAR_2, VAR_3, VAR_4, VAR_5);
}
