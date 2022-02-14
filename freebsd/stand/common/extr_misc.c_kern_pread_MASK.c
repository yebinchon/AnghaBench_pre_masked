
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int off_t ;
struct TYPE_2__ {scalar_t__ (* arch_readin ) (int,int ,size_t) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,int ,size_t) ;

int
FUNC_3(int VAR_2, vm_offset_t VAR_3, size_t VAR_4, off_t VAR_5)
{

 if (FUNC_0(VAR_2, VAR_5, VAR_0) == -1) {



  return (-1);
 }
 if ((size_t)VAR_1.arch_readin(VAR_2, VAR_3, VAR_4) != VAR_4) {



  return (-1);
 }
 return (0);
}
