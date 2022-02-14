
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct inode*,unsigned long,int ,struct buffer_head**) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_6, unsigned long VAR_7,
    struct buffer_head **VAR_8)
{
 struct buffer_head *VAR_9, *VAR_10;
 unsigned long VAR_11;
 int VAR_12, VAR_13 = VAR_3;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_6, VAR_7, VAR_4, &VAR_9);
 if (VAR_14 == -VAR_1)
  goto out;

 if (FUNC_5(VAR_14))
  goto failed;

 VAR_11 = VAR_7 + 1;
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++, VAR_11++) {
  VAR_14 = FUNC_4(VAR_6, VAR_11, VAR_5, &VAR_10);
  if (FUNC_3(!VAR_14 || VAR_14 == -VAR_1))
   FUNC_0(VAR_10);
  else if (VAR_14 != -VAR_0)
   break;

  if (!FUNC_1(VAR_9))
   goto out_no_wait;
 }

 FUNC_6(VAR_9);

 out_no_wait:
 VAR_14 = -VAR_2;
 if (!FUNC_2(VAR_9))
  goto failed_bh;
 out:
 *VAR_8 = VAR_9;
 return 0;

 failed_bh:
 FUNC_0(VAR_9);
 failed:
 return VAR_14;
}
