
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_5__ {char* rm_descr; void* rm_type; int rm_end; scalar_t__ rm_start; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{

 VAR_3.rm_start = 0;
 VAR_3.rm_end = VAR_0;
 VAR_3.rm_type = VAR_1;
 VAR_3.rm_descr = "I/O memory addresses";
 if (FUNC_3(&VAR_3) ||
     FUNC_4(&VAR_3, 0, VAR_0))
  FUNC_2("nexus_attach mem_rman");
 VAR_2.rm_start = 0;
 VAR_2.rm_end = ~0;
 VAR_2.rm_type = VAR_1;
 VAR_2.rm_descr = "Interrupts";
 if (FUNC_3(&VAR_2) || FUNC_4(&VAR_2, 0, ~0))
  FUNC_2("nexus_attach irq_rman");

 FUNC_1(VAR_4);
 FUNC_0(VAR_4);

 return (0);
}
