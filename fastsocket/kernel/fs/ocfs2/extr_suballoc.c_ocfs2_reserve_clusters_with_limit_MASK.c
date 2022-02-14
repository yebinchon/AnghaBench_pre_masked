
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_alloc_context {int ac_max_block; int ac_bits_wanted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_alloc_context* FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*,int ) ;
 int FUNC_5 (struct ocfs2_alloc_context*) ;
 int FUNC_6 (struct ocfs2_super*,struct ocfs2_alloc_context*) ;
 int FUNC_7 (struct ocfs2_super*,int ,struct ocfs2_alloc_context*) ;

__attribute__((used)) static int FUNC_8(struct ocfs2_super *VAR_5,
          u32 VAR_6, u64 VAR_7,
          int VAR_8,
          struct ocfs2_alloc_context **VAR_9)
{
 int VAR_10;

 FUNC_1();

 *VAR_9 = FUNC_0(sizeof(struct ocfs2_alloc_context), VAR_4);
 if (!(*VAR_9)) {
  VAR_10 = -VAR_2;
  FUNC_2(VAR_10);
  goto bail;
 }

 (*VAR_9)->ac_bits_wanted = VAR_6;
 (*VAR_9)->ac_max_block = VAR_7;

 VAR_10 = -VAR_3;
 if (!(VAR_8 & VAR_0) &&
     FUNC_4(VAR_5, VAR_6)) {
  VAR_10 = FUNC_7(VAR_5,
       VAR_6,
       *VAR_9);
  if (VAR_10 == -VAR_1) {


   VAR_10 = -VAR_3;
  } else if ((VAR_10 < 0) && (VAR_10 != -VAR_3)) {
   FUNC_2(VAR_10);
   goto bail;
  }
 }

 if (VAR_10 == -VAR_3) {
  VAR_10 = FUNC_6(VAR_5, *VAR_9);
  if (VAR_10 < 0) {
   if (VAR_10 != -VAR_3)
    FUNC_2(VAR_10);
   goto bail;
  }
 }

 VAR_10 = 0;
bail:
 if ((VAR_10 < 0) && *VAR_9) {
  FUNC_5(*VAR_9);
  *VAR_9 = ((void*)0);
 }

 FUNC_3(VAR_10);
 return VAR_10;
}
