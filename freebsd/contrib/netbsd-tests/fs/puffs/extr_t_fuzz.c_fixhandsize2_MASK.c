
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puffs_kargs {int pa_fhflags; int pa_fhsize; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct puffs_kargs *VAR_2)
{


 if (VAR_2->pa_fhflags & VAR_1)
  VAR_2->pa_fhsize %= 60;
 if (VAR_2->pa_fhflags & VAR_0)
  VAR_2->pa_fhsize %= 28;
}
