
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct inode {int i_ctime; int i_mtime; } ;


 int FUNC_0 (int *,struct timespec const*) ;

__attribute__((used)) static inline int FUNC_1(const struct inode *VAR_0,
           const struct timespec *VAR_1)
{
 if (!FUNC_0(&VAR_0->i_mtime, VAR_1) ||
     !FUNC_0(&VAR_0->i_ctime, VAR_1))
  return 1;
 return 0;
}
