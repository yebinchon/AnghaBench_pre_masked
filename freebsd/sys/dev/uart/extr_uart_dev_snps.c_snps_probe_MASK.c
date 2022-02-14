
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct uart_class {int dummy; } ;
struct TYPE_4__ {struct uart_class* sc_class; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct snps_softc {int reset; int * apb_pclk; int * baudclk; TYPE_2__ ns8250; } ;
typedef int shift ;
typedef int phandle_t ;
typedef int iowidth ;
typedef int hwreset_t ;
typedef int device_t ;
typedef int clock ;
typedef int * clk_t ;
struct TYPE_6__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,scalar_t__*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int VAR_3 ;
 struct snps_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int **,int **) ;
 int FUNC_11 (int ,int,int,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_4)
{
 struct snps_softc *VAR_5;
 struct uart_class *VAR_6;
 phandle_t VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10;
 uint64_t VAR_11;
 int VAR_12;





 if (!FUNC_9(VAR_4))
  return (VAR_0);

 VAR_6 = (struct uart_class *)FUNC_8(VAR_4,
     VAR_3)->ocd_data;
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_11 = 0;
 VAR_5 = FUNC_3(VAR_4);
 VAR_5->ns8250.base.sc_class = VAR_6;

 VAR_7 = FUNC_7(VAR_4);
 if (FUNC_0(VAR_7, "reg-shift", &VAR_8, sizeof(VAR_8)) <= 0)
  VAR_8 = 0;
 if (FUNC_0(VAR_7, "reg-io-width", &VAR_9, sizeof(VAR_9)) <= 0)
  VAR_9 = 1;
 if (FUNC_0(VAR_7, "clock-frequency", &VAR_10, sizeof(VAR_10)) <= 0)
  VAR_10 = 0;
 if (VAR_2 && VAR_10 == 0)
  FUNC_4(VAR_4, "could not determine frequency\n");

 VAR_12 = FUNC_11(VAR_4, (int)VAR_8, (int)VAR_9, (int)VAR_10, 0, 0, VAR_1);
 if (VAR_12 != 0)
  return (VAR_12);
 return (0);
}
