
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int,struct buffer_head**) ;
 struct buffer_head* FUNC_3 (struct inode*,int,int,int*) ;
 int FUNC_4 (struct buffer_head*) ;

struct buffer_head *FUNC_5(struct inode *VAR_2, int VAR_3,
         int VAR_4, int *VAR_5)
{
 struct buffer_head *VAR_6 = ((void*)0);

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 if (FUNC_1(VAR_6))
  return VAR_6;

 FUNC_2(VAR_1, 1, &VAR_6);

 FUNC_4(VAR_6);
 if (FUNC_1(VAR_6))
  return VAR_6;

 FUNC_0(VAR_6);
 *VAR_5 = -VAR_0;
 return ((void*)0);
}
