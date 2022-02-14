
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int sb; } ;
struct buffer_head {int b_end_io; scalar_t__ b_blocknr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int VAR_4 ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct buffer_head*) ;
 struct buffer_head* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;

int FUNC_13(struct ocfs2_super *VAR_5, u64 VAR_6,
      unsigned int VAR_7, struct buffer_head *VAR_8[])
{
 int VAR_9 = 0;
 unsigned int VAR_10;
 struct buffer_head *VAR_11;

 if (!VAR_7) {
  FUNC_7(VAR_1, "No buffers will be read!\n");
  goto bail;
 }

 for (VAR_10 = 0 ; VAR_10 < VAR_7 ; VAR_10++) {
  if (VAR_8[VAR_10] == ((void*)0)) {
   VAR_8[VAR_10] = FUNC_10(VAR_5->sb, VAR_6++);
   if (VAR_8[VAR_10] == ((void*)0)) {
    VAR_9 = -VAR_0;
    FUNC_8(VAR_9);
    goto bail;
   }
  }
  VAR_11 = VAR_8[VAR_10];

  if (FUNC_2(VAR_11)) {
   FUNC_7(VAR_1,
        "trying to sync read a jbd "
        "managed bh (blocknr = %llu), skipping\n",
        (unsigned long long)VAR_11->b_blocknr);
   continue;
  }

  if (FUNC_1(VAR_11)) {


   FUNC_7(VAR_2,
        "trying to sync read a dirty "
        "buffer! (blocknr = %llu), skipping\n",
        (unsigned long long)VAR_11->b_blocknr);
   continue;
  }

  FUNC_6(VAR_11);
  if (FUNC_2(VAR_11)) {
   FUNC_7(VAR_2,
        "block %llu had the JBD bit set "
        "while I was in lock_buffer!",
        (unsigned long long)VAR_11->b_blocknr);
   FUNC_0();
  }

  FUNC_4(VAR_11);
  FUNC_5(VAR_11);
  VAR_11->b_end_io = VAR_4;
  FUNC_11(VAR_3, VAR_11);
 }

 for (VAR_10 = VAR_7; VAR_10 > 0; VAR_10--) {
  VAR_11 = VAR_8[VAR_10 - 1];


  if (!FUNC_2(VAR_11))
   FUNC_12(VAR_11);

  if (!FUNC_3(VAR_11)) {



   VAR_9 = -VAR_0;
   FUNC_9(VAR_11);
   VAR_8[VAR_10 - 1] = ((void*)0);
  }
 }

bail:
 return VAR_9;
}
