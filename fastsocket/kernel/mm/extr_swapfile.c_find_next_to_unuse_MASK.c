
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {unsigned int max; unsigned char* swap_map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static unsigned int FUNC_1(struct swap_info_struct *VAR_1,
     unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_1->max;
 unsigned int VAR_4 = VAR_2;
 unsigned char VAR_5;







 for (;;) {
  if (++VAR_4 >= VAR_3) {
   if (!VAR_2) {
    VAR_4 = 0;
    break;
   }




   VAR_3 = VAR_2 + 1;
   VAR_2 = 0;
   VAR_4 = 1;
  }
  VAR_5 = VAR_1->swap_map[VAR_4];
  if (VAR_5 && FUNC_0(VAR_5) != VAR_0)
   break;
 }
 return VAR_4;
}
