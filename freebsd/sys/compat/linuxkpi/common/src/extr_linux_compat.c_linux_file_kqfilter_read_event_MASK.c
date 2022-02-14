
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m; } ;
struct linux_file {int f_kqflags; TYPE_1__ f_kqlock; } ;
struct knote {struct linux_file* kn_hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_2, long VAR_3)
{
 struct linux_file *VAR_4 = VAR_2->kn_hook;

 FUNC_0(&VAR_4->f_kqlock.m, VAR_1);

 return ((VAR_4->f_kqflags & VAR_0) ? 1 : 0);
}
