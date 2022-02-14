
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_segsum_info {void* nsumblk; void* nblocks; void* nfileblk; void* sumbytes; void* nfinfo; void* next; void* ctime; void* seg_seq; int flags; } ;
struct nilfs_segment_summary {int ss_sumbytes; int ss_nfinfo; int ss_nblocks; int ss_next; int ss_create; int ss_seq; int ss_flags; } ;


 void* FUNC_0 (void*,unsigned int) ;
 int FUNC_1 (struct nilfs_segsum_info*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct nilfs_segsum_info *VAR_0,
         struct nilfs_segment_summary *VAR_1,
         unsigned int VAR_2)
{
 VAR_0->flags = FUNC_2(VAR_1->ss_flags);
 VAR_0->seg_seq = FUNC_4(VAR_1->ss_seq);
 VAR_0->ctime = FUNC_4(VAR_1->ss_create);
 VAR_0->next = FUNC_4(VAR_1->ss_next);
 VAR_0->nblocks = FUNC_3(VAR_1->ss_nblocks);
 VAR_0->nfinfo = FUNC_3(VAR_1->ss_nfinfo);
 VAR_0->sumbytes = FUNC_3(VAR_1->ss_sumbytes);

 VAR_0->nsumblk = FUNC_0(VAR_0->sumbytes, VAR_2);
 VAR_0->nfileblk = VAR_0->nblocks - VAR_0->nsumblk - !!FUNC_1(VAR_0);
}
