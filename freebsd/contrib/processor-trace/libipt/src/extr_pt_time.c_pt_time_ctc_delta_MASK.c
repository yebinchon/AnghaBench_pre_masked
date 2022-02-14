
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pt_config {unsigned int mtc_freq; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(uint32_t *VAR_3, uint32_t VAR_4,
        uint32_t VAR_5, const struct pt_config *VAR_6)
{
 if (!VAR_6 || !VAR_3)
  return -VAR_2;




 if (VAR_4 < VAR_5) {
  VAR_4 += 1u << (VAR_6->mtc_freq + VAR_0);




  if (VAR_4 < VAR_5)
   return -VAR_1;
 }

 *VAR_3 = VAR_4 - VAR_5;
 return 0;
}
