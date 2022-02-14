
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_tnt_cache {int index; int tnt; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct pt_tnt_cache *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_1;

 if (!VAR_2->index)
  return -VAR_0;

 VAR_3 = (VAR_2->tnt & VAR_2->index) != 0;
 VAR_2->index >>= 1;

 return VAR_3;
}
