
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sysv_zone_t ;
struct sysv_sb_info {scalar_t__ s_type; scalar_t__* s_free_blocks; int s_flc_size; unsigned int s_firstdatazone; unsigned int s_nzones; scalar_t__ s_block_base; scalar_t__* s_bcache; int * s_bcache_count; } ;
struct super_block {int s_flags; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __fs16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct sysv_sb_info*,int) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct sysv_sb_info*,int ) ;
 void* FUNC_5 (struct sysv_sb_info*,scalar_t__) ;
 scalar_t__* FUNC_6 (struct super_block*,struct buffer_head*) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (char*,...) ;
 struct buffer_head* FUNC_9 (struct super_block*,unsigned int) ;
 int FUNC_10 (struct super_block*) ;

unsigned long FUNC_11(struct super_block * VAR_2)
{
 struct sysv_sb_info * VAR_3 = FUNC_0(VAR_2);
 int VAR_4;
 int VAR_5;
 struct buffer_head * VAR_6 = ((void*)0);
 sysv_zone_t *VAR_7;
 unsigned VAR_8;
 int VAR_9;






 if (VAR_3->s_type == VAR_0)
  return 0;

 FUNC_7(VAR_2);
 VAR_4 = FUNC_5(VAR_3, *VAR_3->s_free_blocks);

 if (0)
  goto trust_sb;


 VAR_5 = 0;
 VAR_9 = FUNC_4(VAR_3, *VAR_3->s_bcache_count);
 VAR_7 = VAR_3->s_bcache;
 while (1) {
  sysv_zone_t VAR_10;
  if (VAR_9 > VAR_3->s_flc_size)
   goto E2big;
  VAR_10 = 0;
  while (VAR_9 && (VAR_10 = VAR_7[--VAR_9]) != 0)
   VAR_5++;
  if (VAR_10 == 0)
   break;

  VAR_8 = FUNC_5(VAR_3, VAR_10);
  if (VAR_6)
   FUNC_1(VAR_6);

  if (VAR_8 < VAR_3->s_firstdatazone || VAR_8 >= VAR_3->s_nzones)
   goto Einval;
  VAR_8 += VAR_3->s_block_base;
  VAR_6 = FUNC_9(VAR_2, VAR_8);
  if (!VAR_6)
   goto Eio;
  VAR_9 = FUNC_4(VAR_3, *(__fs16*)VAR_6->b_data);
  VAR_7 = FUNC_6(VAR_2, VAR_6);
 }
 if (VAR_6)
  FUNC_1(VAR_6);
 if (VAR_5 != VAR_4)
  goto Ecount;
done:
 FUNC_10(VAR_2);
 return VAR_5;

Einval:
 FUNC_8("sysv_count_free_blocks: new block %d is not in data zone\n",
  VAR_8);
 goto trust_sb;
Eio:
 FUNC_8("sysv_count_free_blocks: cannot read free-list block\n");
 goto trust_sb;
E2big:
 FUNC_8("sysv_count_free_blocks: >flc_size entries in free-list block\n");
 if (VAR_6)
  FUNC_1(VAR_6);
trust_sb:
 VAR_5 = VAR_4;
 goto done;
Ecount:
 FUNC_8("sysv_count_free_blocks: free block count was %d, "
  "correcting to %d\n", VAR_4, VAR_5);
 if (!(VAR_2->s_flags & VAR_1)) {
  *VAR_3->s_free_blocks = FUNC_2(VAR_3, VAR_5);
  FUNC_3(VAR_2);
 }
 goto done;
}
