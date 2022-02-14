
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uchar_t ;
struct TYPE_6__ {int dc_name; } ;
typedef TYPE_1__ dtrace_cmd_t ;
struct TYPE_7__ {int dofh_loadsz; } ;
typedef TYPE_2__ dof_hdr_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(const dtrace_cmd_t *VAR_1, dof_hdr_t *VAR_2, int VAR_3)
{
 const uchar_t *VAR_4, *VAR_5;

 if (VAR_2 == ((void*)0))
  FUNC_0("failed to create DOF image for '%s'", VAR_1->dc_name);

 VAR_4 = (uchar_t *)VAR_2;
 VAR_5 = VAR_4 + VAR_2->dofh_loadsz;
 FUNC_2("dof-data-%d=0x%x", VAR_3, *VAR_4++);

 while (VAR_4 < VAR_5)
  FUNC_2(",0x%x", *VAR_4++);

 FUNC_2(";\n");


 FUNC_1(VAR_0, VAR_2);
}
