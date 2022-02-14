
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*,struct buffer_head**,int) ;
 int FUNC_1 (struct inode*,struct buffer_head**,int,int ) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct page*) ;

int FUNC_4(struct inode *VAR_3,
         struct buffer_head **VAR_4,
         int VAR_5,
         struct page *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2);
 if (VAR_7 == -VAR_1) {
  FUNC_3(VAR_6);
  if (FUNC_0(VAR_3, VAR_4, VAR_5) == 0)
   FUNC_2(VAR_3, VAR_5);
  VAR_7 = VAR_0;
 }

 return VAR_7;
}
