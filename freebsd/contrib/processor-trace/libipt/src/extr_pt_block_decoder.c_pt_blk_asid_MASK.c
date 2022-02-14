
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_block_decoder {int asid; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_asid*,int *,size_t) ;
 int VAR_0 ;

int FUNC_1(const struct pt_block_decoder *VAR_1, struct pt_asid *VAR_2,
  size_t VAR_3)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_2, &VAR_1->asid, VAR_3);
}
