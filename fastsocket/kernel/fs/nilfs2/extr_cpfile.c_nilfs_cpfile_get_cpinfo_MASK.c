
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int ssize_t ;
typedef int __u64 ;


 int VAR_0 ;


 int FUNC_0 (struct inode*,int *,void*,unsigned int,size_t) ;
 int FUNC_1 (struct inode*,int *,void*,unsigned int,size_t) ;

ssize_t FUNC_2(struct inode *VAR_1, __u64 *VAR_2, int VAR_3,
    void *VAR_4, unsigned VAR_5, size_t VAR_6)
{
 switch (VAR_3) {
 case 129:
  return FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6);
 case 128:
  return FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6);
 default:
  return -VAR_0;
 }
}
