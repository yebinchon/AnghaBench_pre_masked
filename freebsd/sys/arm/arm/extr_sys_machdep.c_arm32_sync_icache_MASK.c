
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int ua ;
struct thread {scalar_t__* td_retval; } ;
struct arm_sync_icache_args {scalar_t__ len; scalar_t__ addr; } ;
struct TYPE_4__ {void* ksi_addr; int ksi_code; void* ksi_signo; } ;
typedef TYPE_1__ ksiginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (void*,struct arm_sync_icache_args*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct thread*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_5, void *VAR_6)
{
 struct arm_sync_icache_args VAR_7;
 int VAR_8;
 ksiginfo_t VAR_9;




 if ((VAR_8 = FUNC_0(VAR_6, &VAR_7, sizeof(VAR_7))) != 0)
  return (VAR_8);

 if (VAR_7.len == 0) {
  VAR_5->td_retval[0] = 0;
  return (0);
 }





 if (((VAR_7.addr + VAR_7.len) < VAR_7.addr) ||
     ((VAR_7.addr + VAR_7.len) > VAR_4)) {
  FUNC_2(&VAR_9);
  VAR_9.ksi_signo = VAR_3;
  VAR_9.ksi_code = VAR_1;
  VAR_9.ksi_addr = (void *)FUNC_3(VAR_7.addr, VAR_4);
  FUNC_5(VAR_5, &VAR_9);
  return (VAR_0);
 }
 FUNC_1(VAR_7.addr, VAR_7.len);


 VAR_5->td_retval[0] = 0;
 return (0);
}
