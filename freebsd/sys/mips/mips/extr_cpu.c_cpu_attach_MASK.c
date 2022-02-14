
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * device_t ;
struct TYPE_4__ {int rm_end; char* rm_descr; scalar_t__ rm_start; int rm_type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int * FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 int VAR_3;




 VAR_1.rm_start = 0;
 VAR_1.rm_end = 5;
 VAR_1.rm_type = VAR_0;
 VAR_1.rm_descr = "CPU Hard Interrupts";

 VAR_3 = FUNC_6(&VAR_1);
 if (VAR_3 != 0) {
  FUNC_3(VAR_2, "failed to initialize irq resources\n");
  return (VAR_3);
 }

 VAR_3 = FUNC_7(&VAR_1,
       VAR_1.rm_start,
       VAR_1.rm_end);
 if (VAR_3 != 0) {
  FUNC_3(VAR_2, "failed to manage irq resources\n");
  return (VAR_3);
 }

 if (FUNC_2(VAR_2) != 0)
  FUNC_5("can't attach more cpus");
 FUNC_4(VAR_2, "MIPS32 processor");







 return (FUNC_0(VAR_2));
}
