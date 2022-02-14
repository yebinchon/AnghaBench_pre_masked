
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtree_mem_dqinfo {int dqi_usable_bs; int dqi_qtree_depth; } ;
typedef unsigned int qid_t ;



__attribute__((used)) static int FUNC_0(struct qtree_mem_dqinfo *VAR_0, qid_t VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_0->dqi_usable_bs >> 2;

 VAR_2 = VAR_0->dqi_qtree_depth - VAR_2 - 1;
 while (VAR_2--)
  VAR_1 /= VAR_3;
 return VAR_1 % VAR_3;
}
