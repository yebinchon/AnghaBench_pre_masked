
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct inode {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct list_head* VAR_2 ;

__attribute__((used)) static inline struct list_head *FUNC_0(const struct inode *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_3 / VAR_1;
 return VAR_2 + VAR_4 % VAR_0;
}
