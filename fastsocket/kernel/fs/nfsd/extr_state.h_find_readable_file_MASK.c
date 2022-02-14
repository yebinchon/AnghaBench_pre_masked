
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {struct file** fi_fds; } ;
struct file {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline struct file *FUNC_0(struct nfs4_file *VAR_2)
{
 if (VAR_2->fi_fds[VAR_0])
  return VAR_2->fi_fds[VAR_0];
 return VAR_2->fi_fds[VAR_1];
}
