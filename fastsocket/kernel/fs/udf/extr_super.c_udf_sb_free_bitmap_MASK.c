
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_bitmap {int s_nr_groups; scalar_t__* s_block_bitmap; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct udf_bitmap*) ;
 int FUNC_2 (struct udf_bitmap*) ;

__attribute__((used)) static void FUNC_3(struct udf_bitmap *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_1->s_nr_groups;
 int VAR_4 = sizeof(struct udf_bitmap) + (sizeof(struct buffer_head *) *
      VAR_3);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  if (VAR_1->s_block_bitmap[VAR_2])
   FUNC_0(VAR_1->s_block_bitmap[VAR_2]);

 if (VAR_4 <= VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_2(VAR_1);
}
