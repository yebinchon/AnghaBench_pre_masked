
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int,struct buffer_head**) ;
 struct buffer_head* FUNC_3 (struct inode*,int,int) ;
 int FUNC_4 (struct buffer_head*) ;

struct buffer_head *FUNC_5(struct inode *VAR_1, int VAR_2, int VAR_3)
{
 struct buffer_head *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (!VAR_4 || FUNC_1(VAR_4)) {
  return VAR_4;
 }
 FUNC_2(VAR_0, 1, &VAR_4);
 FUNC_4(VAR_4);
 if (FUNC_1(VAR_4)) {
  return VAR_4;
 }
 FUNC_0(VAR_4);

 return ((void*)0);
}
