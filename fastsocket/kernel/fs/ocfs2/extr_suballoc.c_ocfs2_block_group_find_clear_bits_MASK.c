
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_group_desc {void* bg_bitmap; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ocfs2_group_desc*) ;
 int FUNC_2 (void*,unsigned int,int) ;
 int FUNC_3 (struct buffer_head*,int) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_super *VAR_1,
          struct buffer_head *VAR_2,
          unsigned int VAR_3,
          unsigned int VAR_4,
          u16 *VAR_5,
          u16 *VAR_6)
{
 void *VAR_7;
 u16 VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13 = 0;
 struct ocfs2_group_desc *VAR_14 = (struct ocfs2_group_desc *) VAR_2->b_data;



 FUNC_0(!FUNC_1(VAR_14));

 VAR_12 = VAR_11 = VAR_8 = VAR_9 = 0;
 VAR_7 = VAR_14->bg_bitmap;

 while((VAR_10 = FUNC_2(VAR_7, VAR_4, VAR_11)) != -1) {
  if (VAR_10 == VAR_4)
   break;

  if (!FUNC_3(VAR_2, VAR_10)) {


   VAR_12 = 0;
   VAR_11 = VAR_10 + 1;
  } else if (VAR_10 == VAR_11) {

   VAR_12++;

   VAR_11++;
  } else {

   VAR_12 = 1;
   VAR_11 = VAR_10 + 1;
  }
  if (VAR_12 > VAR_9) {
   VAR_9 = VAR_12;
   VAR_8 = VAR_11 - VAR_12;
  }

  if (VAR_12 == VAR_3) {

   break;
  }
 }



 if (VAR_12 == VAR_3) {
  *VAR_5 = VAR_11 - VAR_12;
  *VAR_6 = VAR_12;
 } else if (VAR_9) {
  *VAR_5 = VAR_8;
  *VAR_6 = VAR_9;
 } else {
  VAR_13 = -VAR_0;


 }

 return VAR_13;
}
