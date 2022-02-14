
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_info {int ngroups; int nblocks; int ** blocks; int * small_block; int usage; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct group_info*) ;
 struct group_info* FUNC_4 (int,int ) ;

struct group_info *FUNC_5(int VAR_3)
{
 struct group_info *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = (VAR_3 + VAR_1 - 1) / VAR_1;

 VAR_5 = VAR_5 ? : 1;
 VAR_4 = FUNC_4(sizeof(*VAR_4) + VAR_5*sizeof(gid_t *), VAR_0);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->ngroups = VAR_3;
 VAR_4->nblocks = VAR_5;
 FUNC_1(&VAR_4->usage, 1);

 if (VAR_3 <= VAR_2)
  VAR_4->blocks[0] = VAR_4->small_block;
 else {
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   gid_t *VAR_7;
   VAR_7 = (void *)FUNC_0(VAR_0);
   if (!VAR_7)
    goto out_undo_partial_alloc;
   VAR_4->blocks[VAR_6] = VAR_7;
  }
 }
 return VAR_4;

out_undo_partial_alloc:
 while (--VAR_6 >= 0) {
  FUNC_2((unsigned long)VAR_4->blocks[VAR_6]);
 }
 FUNC_3(VAR_4);
 return ((void*)0);
}
