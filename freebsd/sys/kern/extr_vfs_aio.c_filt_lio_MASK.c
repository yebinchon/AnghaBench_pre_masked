
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct aioliojob* p_lio; } ;
struct knote {TYPE_1__ kn_ptr; } ;
struct aioliojob {int lioj_flags; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct knote *VAR_1, long VAR_2)
{
 struct aioliojob * VAR_3 = VAR_1->kn_ptr.p_lio;

 return (VAR_3->lioj_flags & VAR_0);
}
