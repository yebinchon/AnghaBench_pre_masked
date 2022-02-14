
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {unsigned int hr_block_bytes; unsigned int hr_block_bits; scalar_t__ hr_bdev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct o2hb_region*,char const*,size_t,unsigned long*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_1(struct o2hb_region *VAR_1,
          const char *VAR_2,
          size_t VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;

 if (VAR_1->hr_bdev)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3,
           &VAR_5, &VAR_6);
 if (VAR_4)
  return VAR_4;

 VAR_1->hr_block_bytes = (unsigned int)VAR_5;
 VAR_1->hr_block_bits = VAR_6;

 return VAR_3;
}
