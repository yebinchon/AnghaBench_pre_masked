
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rm_descr; int rm_type; int rm_end; scalar_t__ rm_start; } ;
struct pcicfg_iov {int iov_flags; TYPE_1__ rman; int rman_name; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,char*,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, struct pcicfg_iov *VAR_3)
{
 int VAR_4;

 VAR_3->rman.rm_start = 0;
 VAR_3->rman.rm_end = ~0;
 VAR_3->rman.rm_type = VAR_1;
 FUNC_2(VAR_3->rman_name, sizeof(VAR_3->rman_name), "%s VF I/O memory",
     FUNC_0(VAR_2));
 VAR_3->rman.rm_descr = VAR_3->rman_name;

 VAR_4 = FUNC_1(&VAR_3->rman);
 if (VAR_4 != 0)
  return (VAR_4);

 VAR_3->iov_flags |= VAR_0;
 return (0);
}
