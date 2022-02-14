
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ggc_pch_data {int* type_bases; int orig_base; long* alloc_bits; } ;
typedef enum gt_types_enum { ____Placeholder_gt_types_enum } gt_types_enum ;
typedef int alloc_type ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int) ;

char *
FUNC_1 (struct ggc_pch_data *VAR_1, void *VAR_2,
        size_t VAR_3, bool VAR_4,
        enum gt_types_enum VAR_5)
{
  size_t VAR_6, VAR_7;
  char *VAR_8;
  int VAR_9 = FUNC_0 (VAR_2, VAR_5, VAR_4);






  VAR_6 = ((VAR_1->type_bases[VAR_9] - VAR_1->orig_base)
  / (8 * sizeof (alloc_type) * VAR_0));
  VAR_7 = ((VAR_1->type_bases[VAR_9] - VAR_1->orig_base)
        / VAR_0) % (8 * sizeof (alloc_type));
  VAR_1->alloc_bits[VAR_6] |= 1L << VAR_7;


  VAR_8 = (char *) VAR_1->type_bases[VAR_9];
  VAR_1->type_bases[VAR_9] += VAR_3;
  return VAR_8;
}
