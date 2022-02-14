
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ (* setup_device_regs ) (struct octeon_device*) ;int (* disable_io_queues ) (struct octeon_device*) ;} ;
struct TYPE_3__ {int oq; int iq; } ;
struct octeon_device {scalar_t__ num_iqs; TYPE_2__ fn_list; TYPE_1__ io_qmask; } ;
struct lio {struct octeon_device* oct_dev; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (struct octeon_device*) ;
 struct lio* FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct octeon_device*,int) ;
 int FUNC_5 (struct octeon_device*,int) ;
 int FUNC_6 (struct octeon_device*,char*) ;
 scalar_t__ FUNC_7 (struct ifnet*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct octeon_device*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct octeon_device*) ;
 scalar_t__ FUNC_10 (struct octeon_device*) ;
 int FUNC_11 (struct octeon_device*) ;
 scalar_t__ FUNC_12 (struct octeon_device*) ;

__attribute__((used)) static int
FUNC_13(struct ifnet *VAR_0, uint32_t VAR_1)
{
 struct lio *VAR_2 = FUNC_3(VAR_0);
 struct octeon_device *VAR_3 = VAR_2->oct_dev;
 int VAR_4, VAR_5 = 0;

 if (FUNC_10(VAR_3))
  FUNC_6(VAR_3, "There were pending requests\n");

 if (FUNC_9(VAR_3))
  FUNC_6(VAR_3, "IQ had pending instructions\n");






 VAR_3->fn_list.disable_io_queues(VAR_3);

 if (VAR_1 != VAR_3->num_iqs)
  VAR_5 = 1;

 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_3); VAR_4++) {
  if (!(VAR_3->io_qmask.oq & FUNC_0(VAR_4)))
   continue;

  FUNC_4(VAR_3, VAR_4);
 }

 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_3); VAR_4++) {
  if (!(VAR_3->io_qmask.iq & FUNC_0(VAR_4)))
   continue;

  FUNC_5(VAR_3, VAR_4);
 }

 if (VAR_3->fn_list.setup_device_regs(VAR_3)) {
  FUNC_6(VAR_3, "Failed to configure device registers\n");
  return (-1);
 }

 if (FUNC_8(VAR_3, 0, VAR_1, VAR_1)) {
  FUNC_6(VAR_3, "IO queues initialization failed\n");
  return (-1);
 }

 if (VAR_5 && FUNC_7(VAR_0, VAR_1))
  return (-1);

 return (0);
}
