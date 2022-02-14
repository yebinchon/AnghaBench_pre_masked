
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int i_version; } ;
typedef scalar_t__ loff_t ;
typedef int filldir_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int *,scalar_t__*,void*,int ,int*) ;

int FUNC_2(struct inode *VAR_1, loff_t *VAR_2, void *VAR_3,
        filldir_t VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 u64 VAR_7 = VAR_1->i_version;

 while (*VAR_2 < FUNC_0(VAR_1)) {
  VAR_5 = FUNC_1(VAR_1, &VAR_7, VAR_2, VAR_3,
         VAR_4, &VAR_6);
  if (VAR_5 || VAR_6)
   break;
 }

 if (VAR_5 > 0)
  VAR_5 = -VAR_0;

 return 0;
}
