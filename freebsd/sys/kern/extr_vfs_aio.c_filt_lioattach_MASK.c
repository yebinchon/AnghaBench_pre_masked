
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct aioliojob* p_lio; } ;
struct knote {int kn_flags; TYPE_1__ kn_ptr; scalar_t__ kn_sdata; } ;
struct aioliojob {int klist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct knote*,int ) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_2)
{
 struct aioliojob *VAR_3;

 VAR_3 = (struct aioliojob *)(uintptr_t)VAR_2->kn_sdata;






 if ((VAR_2->kn_flags & VAR_1) == 0)
  return (VAR_0);
 VAR_2->kn_ptr.p_lio = VAR_3;
 VAR_2->kn_flags &= ~VAR_1;

 FUNC_0(&VAR_3->klist, VAR_2, 0);

 return (0);
}
