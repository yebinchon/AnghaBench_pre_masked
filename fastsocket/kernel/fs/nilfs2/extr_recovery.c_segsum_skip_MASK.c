
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {unsigned int b_size; scalar_t__ b_blocknr; } ;
typedef scalar_t__ sector_t ;


 unsigned int FUNC_0 (unsigned long,unsigned int) ;
 int FUNC_1 (struct buffer_head*) ;
 struct buffer_head* FUNC_2 (struct super_block*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0, struct buffer_head **VAR_1,
   unsigned int *VAR_2, unsigned int VAR_3,
   unsigned long VAR_4)
{
 unsigned int VAR_5
  = ((*VAR_1)->b_size - *VAR_2) / VAR_3;

 if (VAR_4 <= VAR_5) {
  *VAR_2 += VAR_3 * VAR_4;
 } else {
  sector_t VAR_6 = (*VAR_1)->b_blocknr;
  unsigned int VAR_7 = (*VAR_1)->b_size / VAR_3;
  unsigned int VAR_8;

  VAR_4 -= VAR_5;
  VAR_8 = FUNC_0(VAR_4, VAR_7);
  *VAR_2 = VAR_3 * (VAR_4 - (VAR_8 - 1) * VAR_7);

  FUNC_1(*VAR_1);
  *VAR_1 = FUNC_2(VAR_0, VAR_6 + VAR_8);
 }
}
