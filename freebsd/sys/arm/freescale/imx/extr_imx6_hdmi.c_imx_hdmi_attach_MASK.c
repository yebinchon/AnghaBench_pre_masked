
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * sc_mem_res; scalar_t__ sc_mem_rid; int sc_get_i2c_dev; int sc_dev; } ;
struct imx_hdmi_softc {scalar_t__ i2c_xref; TYPE_1__ base; } ;
typedef scalar_t__ phandle_t ;
typedef int i2c_xref ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,char*,scalar_t__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,scalar_t__*,int ) ;
 int FUNC_2 (int ,int ) ;
 struct imx_hdmi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_8)
{
 struct imx_hdmi_softc *VAR_9;
 int VAR_10;
 uint32_t VAR_11;
 phandle_t VAR_12, VAR_13;

 VAR_9 = FUNC_3(VAR_8);
 VAR_9->base.sc_dev = VAR_8;
 VAR_9->base.sc_get_i2c_dev = VAR_6;
 VAR_10 = 0;


 VAR_9->base.sc_mem_rid = 0;
 VAR_9->base.sc_mem_res = FUNC_1(VAR_8, VAR_5,
     &VAR_9->base.sc_mem_rid, VAR_4);
 if (VAR_9->base.sc_mem_res == ((void*)0)) {
  FUNC_4(VAR_8, "Cannot allocate memory resources\n");
  VAR_10 = VAR_0;
  goto out;
 }

 VAR_12 = FUNC_9(VAR_8);
 if (FUNC_0(VAR_12, "ddc-i2c-bus", &VAR_13, sizeof(VAR_13)) == -1)
  VAR_9->i2c_xref = 0;
 else
  VAR_9->i2c_xref = VAR_13;

 FUNC_5();

 VAR_11 = FUNC_7(VAR_1);
 VAR_11 &= ~(VAR_3);
 VAR_11 |= VAR_2;
 FUNC_8(VAR_1, VAR_11);


 FUNC_2(VAR_7, VAR_8);
 return (0);

out:
 FUNC_6(VAR_8);

 return (VAR_10);
}
