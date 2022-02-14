
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int __u64 ;


 int FUNC_0 (struct inode*) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_0, unsigned long VAR_1, __u64 VAR_2)
{
 __u64 VAR_3, VAR_4;

 VAR_3 = VAR_1 * FUNC_0(VAR_0);
 VAR_4 = VAR_3 + FUNC_0(VAR_0) - 1;
 return (VAR_2 >= VAR_3) && (VAR_2 <= VAR_4);
}
