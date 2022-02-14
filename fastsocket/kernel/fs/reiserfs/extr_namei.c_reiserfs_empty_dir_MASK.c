
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct inode *VAR_2)
{





 if (VAR_2->i_size != VAR_0 &&
     VAR_2->i_size != VAR_1) {
  return 0;
 }
 return 1;
}
