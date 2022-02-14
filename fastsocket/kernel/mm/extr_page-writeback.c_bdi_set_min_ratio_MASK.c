
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {unsigned int max_ratio; scalar_t__ min_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct backing_dev_info *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(&VAR_1);
 if (VAR_4 > VAR_3->max_ratio) {
  VAR_5 = -VAR_0;
 } else {
  VAR_4 -= VAR_3->min_ratio;
  if (VAR_2 + VAR_4 < 100) {
   VAR_2 += VAR_4;
   VAR_3->min_ratio += VAR_4;
  } else {
   VAR_5 = -VAR_0;
  }
 }
 FUNC_1(&VAR_1);

 return VAR_5;
}
