
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct inode*,struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0)
{
 int VAR_1;
 struct buffer_head *VAR_2 = ((void*)0);

 VAR_1 = FUNC_3(VAR_0, &VAR_2);
 if (VAR_1 < 0) {
  FUNC_2(VAR_1);
  goto out;
 }

 VAR_1 = FUNC_0(VAR_0, VAR_2);
out:
 FUNC_1(VAR_2);
 return VAR_1;
}
