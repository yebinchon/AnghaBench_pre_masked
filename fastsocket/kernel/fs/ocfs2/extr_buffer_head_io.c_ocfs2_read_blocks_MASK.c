
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef struct super_block super_block ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {int b_end_io; scalar_t__ b_blocknr; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int VAR_8 ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (char*,struct ocfs2_caching_info*,unsigned long long,int,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (struct ocfs2_caching_info*,struct buffer_head*) ;
 scalar_t__ FUNC_15 (struct ocfs2_caching_info*,struct buffer_head*) ;
 struct super_block* FUNC_16 (struct ocfs2_caching_info*) ;
 int FUNC_17 (struct ocfs2_caching_info*) ;
 int FUNC_18 (struct ocfs2_caching_info*) ;
 scalar_t__ FUNC_19 (struct ocfs2_caching_info*) ;
 int FUNC_20 (struct ocfs2_caching_info*,struct buffer_head*) ;
 int FUNC_21 (struct buffer_head*) ;
 struct buffer_head* FUNC_22 (struct super_block*,int ) ;
 int FUNC_23 (struct buffer_head*) ;
 int FUNC_24 (int ,struct buffer_head*) ;
 int FUNC_25 (struct buffer_head*) ;
 int FUNC_26 (struct buffer_head*) ;

int FUNC_27(struct ocfs2_caching_info *VAR_9, u64 VAR_10, int VAR_11,
        struct buffer_head *VAR_12[], int VAR_13,
        int (*VAR_14)(struct super_block *VAR_15,
          struct buffer_head *VAR_16))
{
 int VAR_17 = 0;
 int VAR_18, VAR_19 = 0;
 struct buffer_head *VAR_20;
 struct super_block *VAR_21 = FUNC_16(VAR_9);

 FUNC_11("(ci=%p, block=(%llu), nr=(%d), flags=%d)\n",
     VAR_9, (unsigned long long)VAR_10, VAR_11, VAR_13);

 FUNC_1(!VAR_9);
 FUNC_1((VAR_13 & VAR_6) &&
        (VAR_13 & VAR_5));

 if (VAR_12 == ((void*)0)) {
  VAR_17 = -VAR_0;
  FUNC_12(VAR_17);
  goto bail;
 }

 if (VAR_11 < 0) {
  FUNC_10(VAR_3, "asked to read %d blocks!\n", VAR_11);
  VAR_17 = -VAR_0;
  FUNC_12(VAR_17);
  goto bail;
 }

 if (VAR_11 == 0) {
  FUNC_10(VAR_2, "No buffers will be read!\n");
  VAR_17 = 0;
  goto bail;
 }

 FUNC_17(VAR_9);
 for (VAR_18 = 0 ; VAR_18 < VAR_11 ; VAR_18++) {
  if (VAR_12[VAR_18] == ((void*)0)) {
   VAR_12[VAR_18] = FUNC_22(VAR_21, VAR_10++);
   if (VAR_12[VAR_18] == ((void*)0)) {
    FUNC_18(VAR_9);
    VAR_17 = -VAR_1;
    FUNC_12(VAR_17);
    goto bail;
   }
  }
  VAR_20 = VAR_12[VAR_18];
  VAR_19 = (VAR_13 & VAR_5);
  if (!VAR_19 && !FUNC_15(VAR_9, VAR_20)) {
   FUNC_10(VAR_4,
        "bh (%llu), owner %llu not uptodate\n",
        (unsigned long long)VAR_20->b_blocknr,
        (unsigned long long)FUNC_19(VAR_9));


   VAR_19 = 1;
  }

  if (FUNC_3(VAR_20)) {
   if (VAR_19)
    FUNC_10(VAR_2, "trying to sync read a jbd "
            "managed bh (blocknr = %llu)\n",
         (unsigned long long)VAR_20->b_blocknr);
   continue;
  }

  if (VAR_19) {
   if (FUNC_2(VAR_20)) {


    FUNC_10(VAR_2, "asking me to sync read a dirty "
            "buffer! (blocknr = %llu)\n",
         (unsigned long long)VAR_20->b_blocknr);
    continue;
   }





   if ((VAR_13 & VAR_6)
       && FUNC_14(VAR_9, VAR_20))
    continue;

   FUNC_9(VAR_20);
   if (FUNC_3(VAR_20)) {






    FUNC_25(VAR_20);
    continue;

   }





   if (!(VAR_13 & VAR_5)
       && !(VAR_13 & VAR_6)
       && FUNC_15(VAR_9, VAR_20)) {
    FUNC_25(VAR_20);
    continue;
   }

   FUNC_7(VAR_20);
   FUNC_8(VAR_20);
   if (VAR_14)
    FUNC_23(VAR_20);
   VAR_20->b_end_io = VAR_8;
   FUNC_24(VAR_7, VAR_20);
   continue;
  }
 }

 VAR_17 = 0;

 for (VAR_18 = (VAR_11 - 1); VAR_18 >= 0; VAR_18--) {
  VAR_20 = VAR_12[VAR_18];

  if (!(VAR_13 & VAR_6)) {



   if (!FUNC_3(VAR_20))
    FUNC_26(VAR_20);

   if (!FUNC_5(VAR_20)) {






    VAR_17 = -VAR_1;
    FUNC_21(VAR_20);
    VAR_12[VAR_18] = ((void*)0);
    continue;
   }

   if (FUNC_4(VAR_20)) {



    FUNC_1(FUNC_3(VAR_20));
    FUNC_6(VAR_20);
    VAR_17 = VAR_14(VAR_21, VAR_20);
    if (VAR_17) {
     FUNC_21(VAR_20);
     VAR_12[VAR_18] = ((void*)0);
     continue;
    }
   }
  }




  FUNC_20(VAR_9, VAR_20);
 }
 FUNC_18(VAR_9);

 FUNC_10(VAR_2, "block=(%llu), nr=(%d), cached=%s, flags=0x%x\n",
      (unsigned long long)VAR_10, VAR_11,
      ((VAR_13 & VAR_5) || VAR_19) ? "no" : "yes",
      VAR_13);

bail:

 FUNC_13(VAR_17);
 return VAR_17;
}
