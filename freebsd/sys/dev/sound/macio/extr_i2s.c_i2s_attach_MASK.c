
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct intr_config_hook {int dummy; } ;
struct TYPE_4__ {int * sc_odma; int sc_dev; } ;
struct i2s_softc {int node; int soundnode; TYPE_1__ aoa; int * reg; int port_mtx; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_5__ {struct i2s_softc* ich_arg; int ich_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct i2s_softc*) ;
 int VAR_14 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct i2s_softc*,int,int,int) ;
 void* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 void* FUNC_6 (int,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (int ,struct resource*,int ,int ,struct i2s_softc*,void**) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_17)
{
 struct i2s_softc *VAR_18;
 struct resource *VAR_19;
 void *VAR_20;
 int VAR_21, VAR_22, VAR_23;
 phandle_t VAR_24;

 VAR_18 = FUNC_4(sizeof(*VAR_18), VAR_6, VAR_8 | VAR_9);

 VAR_18->aoa.sc_dev = VAR_17;
 VAR_18->node = FUNC_7(VAR_17);

 VAR_24 = FUNC_6(VAR_18->node, "i2s-a");
 if (VAR_24 == -1)
  return (VAR_1);
 VAR_18->soundnode = FUNC_6(VAR_24, "sound");
 if (VAR_18->soundnode == -1)
  return (VAR_1);

 FUNC_5(&VAR_18->port_mtx, "port_mtx", ((void*)0), VAR_5);


 VAR_21 = 0;
 VAR_18->reg = FUNC_1(VAR_17, VAR_13, &VAR_21, VAR_10);
 if (VAR_18->reg == ((void*)0))
  return VAR_1;


 VAR_21 = 1;
 VAR_18->aoa.sc_odma = FUNC_1(VAR_17, VAR_13, &VAR_21,
     VAR_10);
 if (VAR_18->aoa.sc_odma == ((void*)0))
  return VAR_1;


 VAR_21 = 1;
 VAR_19 = FUNC_1(VAR_17, VAR_12,
     &VAR_21, VAR_11 | VAR_10);
 if (VAR_19 == ((void*)0))
  return (VAR_1);


 VAR_23 = FUNC_3(VAR_18, 44100, 16, 64);
 if (VAR_23 != 0)
  return (VAR_23);

 FUNC_10(VAR_17, VAR_19, VAR_2, VAR_14,
     VAR_18, &VAR_20);

 VAR_22 = FUNC_9(VAR_19);
 VAR_23 = FUNC_8(VAR_22, VAR_4, VAR_3);
 if (VAR_23 != 0)
  return (VAR_23);





 if ((VAR_15 = FUNC_4(sizeof(struct intr_config_hook),
     VAR_7, VAR_8 | VAR_9)) == ((void*)0))
  return (VAR_0);

 VAR_15->ich_func = VAR_16;
 VAR_15->ich_arg = VAR_18;

 if (FUNC_2(VAR_15) != 0)
  return (VAR_0);

 return (FUNC_0(VAR_18));
}
