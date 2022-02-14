
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int dof_secidx_t ;
struct TYPE_6__ {int dofs_flags; scalar_t__ dofs_type; } ;
typedef TYPE_1__ dof_sec_t ;
struct TYPE_7__ {int dofh_secsize; int dofh_secnum; scalar_t__ dofh_secoff; } ;
typedef TYPE_2__ dof_hdr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;

__attribute__((used)) static dof_sec_t *
FUNC_1(dof_hdr_t *VAR_2, uint32_t VAR_3, dof_secidx_t VAR_4)
{
 dof_sec_t *VAR_5 = (dof_sec_t *)(uintptr_t)
     ((uintptr_t)VAR_2 + VAR_2->dofh_secoff + VAR_4 * VAR_2->dofh_secsize);

 if (VAR_4 >= VAR_2->dofh_secnum) {
  FUNC_0(VAR_2, "referenced section index is invalid");
  return (((void*)0));
 }

 if (!(VAR_5->dofs_flags & VAR_0)) {
  FUNC_0(VAR_2, "referenced section is not loadable");
  return (((void*)0));
 }

 if (VAR_3 != VAR_1 && VAR_3 != VAR_5->dofs_type) {
  FUNC_0(VAR_2, "referenced section is the wrong type");
  return (((void*)0));
 }

 return (VAR_5);
}
