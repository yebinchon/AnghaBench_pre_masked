
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mps_usr_command {int dummy; } ;
struct mps_command {scalar_t__ cm_sglsize; int * cm_sge; } ;



__attribute__((used)) static int
FUNC_0(struct mps_command *VAR_0,
        struct mps_usr_command *VAR_1)
{

 VAR_0->cm_sge = ((void*)0);
 VAR_0->cm_sglsize = 0;
 return (0);
}
