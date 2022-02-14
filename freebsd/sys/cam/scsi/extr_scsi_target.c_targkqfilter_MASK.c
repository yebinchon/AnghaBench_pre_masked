
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct targ_softc {TYPE_1__ read_select; } ;
struct knote {int * kn_fop; scalar_t__ kn_hook; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (void**) ;
 int FUNC_1 (int *,struct knote*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_1, struct knote *VAR_2)
{
 struct targ_softc *VAR_3;

 FUNC_0((void **)&VAR_3);
 VAR_2->kn_hook = (caddr_t)VAR_3;
 VAR_2->kn_fop = &VAR_0;
 FUNC_1(&VAR_3->read_select.si_note, VAR_2, 0);
 return (0);
}
