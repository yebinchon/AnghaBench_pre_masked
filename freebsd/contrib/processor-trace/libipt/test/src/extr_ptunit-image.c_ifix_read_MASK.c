
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct pt_section {struct ifix_mapping* mapping; } ;
struct ifix_mapping {int errcode; scalar_t__ size; int * content; } ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct pt_section *VAR_2, uint8_t *VAR_3,
       uint16_t VAR_4, uint64_t VAR_5)
{
 struct ifix_mapping *VAR_6;
 uint64_t VAR_7, VAR_8;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_7 = VAR_5;
 VAR_8 = VAR_7 + VAR_4;

 if (VAR_8 < VAR_7)
  return -VAR_1;

 VAR_6 = VAR_2->mapping;
 if (!VAR_6)
  return -VAR_1;

 if (VAR_6->errcode)
  return VAR_6->errcode;

 if (VAR_6->size <= VAR_7)
  return -VAR_1;

 if (VAR_6->size < VAR_8) {
  VAR_8 = VAR_6->size;
  VAR_4 = (uint16_t) (VAR_8 - VAR_7);
 }

 FUNC_0(VAR_3, &VAR_6->content[VAR_7], VAR_4);

 return VAR_4;
}
