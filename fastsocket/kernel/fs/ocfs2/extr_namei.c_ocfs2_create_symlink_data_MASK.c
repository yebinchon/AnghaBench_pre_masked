
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct ocfs2_super {struct super_block* sb; } ;
struct inode {scalar_t__ i_blocks; } ;
struct buffer_head {int b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int ip_clusters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 struct buffer_head** FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct buffer_head**) ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (char*,unsigned long long,int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct super_block*,int ) ;
 int FUNC_12 (struct inode*,int ,int*,int*,int *) ;
 int FUNC_13 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_14 (int *,struct buffer_head*) ;
 int FUNC_15 (int ,struct buffer_head*) ;
 struct buffer_head* FUNC_16 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_17(struct ocfs2_super *VAR_4,
         handle_t *VAR_5,
         struct inode *VAR_6,
         const char *VAR_7)
{
 struct buffer_head **VAR_8 = ((void*)0);
 const char *VAR_9;
 struct super_block *VAR_10 = VAR_4->sb;
 u64 VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_17 = FUNC_3(VAR_6) + 1;


 VAR_14 = (VAR_17 + VAR_10->s_blocksize - 1) >> VAR_10->s_blocksize_bits;

 FUNC_8("i_blocks = %llu, i_size = %llu, blocks = %d\n",
   (unsigned long long)VAR_6->i_blocks,
   FUNC_3(VAR_6), VAR_14);


 if (VAR_17 >
     FUNC_11(VAR_10, FUNC_1(VAR_6)->ip_clusters)) {
  VAR_15 = -VAR_0;
  FUNC_9(VAR_15);
  goto bail;
 }

 VAR_8 = FUNC_4(VAR_14, sizeof(struct buffer_head *), VAR_2);
 if (!VAR_8) {
  VAR_15 = -VAR_1;
  FUNC_9(VAR_15);
  goto bail;
 }

 VAR_15 = FUNC_12(VAR_6, 0, &VAR_11, &VAR_12,
          ((void*)0));
 if (VAR_15 < 0) {
  FUNC_9(VAR_15);
  goto bail;
 }




 if ((VAR_12 << VAR_10->s_blocksize_bits) < VAR_17) {
  VAR_15 = -VAR_0;
  FUNC_9(VAR_15);
  goto bail;
 }

 VAR_13 = 0;
 while(VAR_17 > 0) {
  VAR_9 = &VAR_7[VAR_13 * VAR_10->s_blocksize];

  VAR_8[VAR_13] = FUNC_16(VAR_10, VAR_11);
  if (!VAR_8[VAR_13]) {
   VAR_15 = -VAR_1;
   FUNC_9(VAR_15);
   goto bail;
  }
  FUNC_15(FUNC_0(VAR_6),
           VAR_8[VAR_13]);

  VAR_15 = FUNC_13(VAR_5, FUNC_0(VAR_6),
           VAR_8[VAR_13],
           VAR_3);
  if (VAR_15 < 0) {
   FUNC_9(VAR_15);
   goto bail;
  }

  FUNC_7(VAR_8[VAR_13]->b_data, 0, VAR_10->s_blocksize);

  FUNC_6(VAR_8[VAR_13]->b_data, VAR_9,
         (VAR_17 > VAR_10->s_blocksize) ? VAR_10->s_blocksize :
         VAR_17);

  VAR_15 = FUNC_14(VAR_5, VAR_8[VAR_13]);
  if (VAR_15 < 0) {
   FUNC_9(VAR_15);
   goto bail;
  }

  VAR_13++;
  VAR_11++;
  VAR_17 -= VAR_10->s_blocksize;
 }

 VAR_15 = 0;
bail:

 if (VAR_8) {
  for(VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
   FUNC_2(VAR_8[VAR_16]);
  FUNC_5(VAR_8);
 }

 FUNC_10(VAR_15);
 return VAR_15;
}
