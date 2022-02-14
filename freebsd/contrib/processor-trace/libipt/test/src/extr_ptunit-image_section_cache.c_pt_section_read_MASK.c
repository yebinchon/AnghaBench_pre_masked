
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint64_t ;
typedef size_t uint16_t ;
struct pt_section {int * content; } ;


 int FUNC_0 (int *,int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(const struct pt_section *VAR_3, uint8_t *VAR_4,
      uint16_t VAR_5, uint64_t VAR_6)
{
 uint64_t VAR_7, VAR_8, VAR_9;

 if (!VAR_3 || !VAR_4)
  return -VAR_0;

 VAR_7 = VAR_6;
 VAR_8 = VAR_7 + VAR_5;
 VAR_9 = sizeof(VAR_3->content);

 if (VAR_9 <= VAR_7)
  return -VAR_2;

 if (VAR_9 < VAR_8)
  VAR_8 = VAR_9;

 if (VAR_8 <= VAR_7)
  return -VAR_1;

 FUNC_0(VAR_4, &VAR_3->content[VAR_7], (size_t) (VAR_8 - VAR_7));
 return (int) (VAR_8 - VAR_7);
}
