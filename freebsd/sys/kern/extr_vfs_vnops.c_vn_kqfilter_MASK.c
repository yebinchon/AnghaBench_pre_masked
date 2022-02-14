
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int dummy; } ;
struct file {int f_vnode; } ;


 int FUNC_0 (int ,struct knote*) ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_0, struct knote *VAR_1)
{

 return (FUNC_0(VAR_0->f_vnode, VAR_1));
}
