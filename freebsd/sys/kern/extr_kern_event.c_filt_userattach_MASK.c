
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_fflags; int kn_hookid; int * kn_hook; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct knote *VAR_1)
{




 VAR_1->kn_hook = ((void*)0);
 if (VAR_1->kn_fflags & VAR_0)
  VAR_1->kn_hookid = 1;
 else
  VAR_1->kn_hookid = 0;
 return (0);
}
