
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsstate {int ls_flags; scalar_t__ ls_delegtime; scalar_t__ ls_delegtimelimit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct nfsstate *VAR_3)
{

 if ((VAR_3->ls_flags & VAR_1) == 0)
  return;

 if ((VAR_3->ls_delegtime + 15) > VAR_0 &&
     VAR_3->ls_delegtime < VAR_3->ls_delegtimelimit) {
  VAR_3->ls_delegtime += VAR_2;
  if (VAR_3->ls_delegtime > VAR_3->ls_delegtimelimit)
   VAR_3->ls_delegtime = VAR_3->ls_delegtimelimit;
 }
}
