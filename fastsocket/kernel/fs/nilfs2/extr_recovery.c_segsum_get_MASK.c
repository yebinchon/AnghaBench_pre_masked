
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {unsigned int b_size; void* b_data; scalar_t__ b_blocknr; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 struct buffer_head* FUNC_2 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void *FUNC_4(struct super_block *VAR_0, struct buffer_head **VAR_1,
   unsigned int *VAR_2, unsigned int VAR_3)
{
 void *VAR_4;
 sector_t VAR_5;

 FUNC_0((*VAR_1)->b_size < *VAR_2);
 if (VAR_3 > (*VAR_1)->b_size - *VAR_2) {
  VAR_5 = (*VAR_1)->b_blocknr;
  FUNC_1(*VAR_1);
  *VAR_1 = FUNC_2(VAR_0, VAR_5 + 1);
  if (FUNC_3(!*VAR_1))
   return ((void*)0);
  *VAR_2 = 0;
 }
 VAR_4 = (*VAR_1)->b_data + *VAR_2;
 *VAR_2 += VAR_3;
 return VAR_4;
}
