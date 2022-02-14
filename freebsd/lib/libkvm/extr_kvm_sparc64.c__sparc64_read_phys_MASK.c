
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int off_t ;
struct TYPE_4__ {int program; int pmfd; } ;
typedef TYPE_1__ kvm_t ;


 int FUNC_0 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_1 (int ,void*,size_t,int ) ;

__attribute__((used)) static int
FUNC_2(kvm_t *VAR_0, off_t VAR_1, void *VAR_2, size_t VAR_3)
{


 if (FUNC_1(VAR_0->pmfd, VAR_2, VAR_3, VAR_1) != (ssize_t)VAR_3) {
  FUNC_0(VAR_0, VAR_0->program, "_sparc64_read_phys: pread");
  return (0);
 }
 return (1);
}
