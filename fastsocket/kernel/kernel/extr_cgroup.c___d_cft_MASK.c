
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct cftype* d_fsdata; } ;
struct cftype {int dummy; } ;



__attribute__((used)) static inline struct cftype *FUNC_0(struct dentry *VAR_0)
{
 return VAR_0->d_fsdata;
}
