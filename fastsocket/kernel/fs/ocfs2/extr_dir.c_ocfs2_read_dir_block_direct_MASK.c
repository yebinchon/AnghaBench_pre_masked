
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct buffer_head*) ;
 int FUNC_4 (int ,int ,struct buffer_head**,int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, u64 VAR_2,
           struct buffer_head **VAR_3)
{
 int VAR_4;
 struct buffer_head *VAR_5 = *VAR_3;

 VAR_4 = FUNC_4(FUNC_0(VAR_1), VAR_2, &VAR_5,
          VAR_0);
 if (VAR_4) {
  FUNC_2(VAR_4);
  goto out;
 }

 if (FUNC_5(VAR_1)) {
  VAR_4 = FUNC_3(VAR_1, VAR_5);
  if (VAR_4) {
   if (!*VAR_3)
    FUNC_1(VAR_5);
   FUNC_2(VAR_4);
   goto out;
  }
 }

 if (!VAR_4 && !*VAR_3)
  *VAR_3 = VAR_5;
out:
 return VAR_4;
}
