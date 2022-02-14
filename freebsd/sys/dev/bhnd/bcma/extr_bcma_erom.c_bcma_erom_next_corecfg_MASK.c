
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct bcma_mport {int mp_num; int mp_vid; } ;
struct bcma_erom_mport {int port_num; int port_vid; } ;
struct bcma_erom_core {scalar_t__ vendor; scalar_t__ device; scalar_t__ num_mport; scalar_t__ num_dport; scalar_t__ num_mwrap; scalar_t__ num_swrap; int rev; } ;
struct bcma_erom {int dummy; } ;
struct bcma_corecfg {scalar_t__ num_master_ports; scalar_t__ num_dev_ports; scalar_t__ num_bridge_ports; scalar_t__ num_wrapper_ports; int master_ports; } ;
typedef scalar_t__ bus_size_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct bcma_erom*,char*,scalar_t__,int ,int ,scalar_t__,int ,int) ;
 int FUNC_3 (int,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *,struct bcma_mport*,int ) ;
 struct bcma_corecfg* FUNC_5 (scalar_t__,int,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (struct bcma_erom*,struct bcma_corecfg*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct bcma_erom*,struct bcma_erom_core*) ;
 int FUNC_8 (struct bcma_erom*,struct bcma_erom_mport*) ;
 int FUNC_9 (struct bcma_erom*,int *) ;
 int FUNC_10 (struct bcma_erom*) ;
 int FUNC_11 (struct bcma_erom*,int ) ;
 int FUNC_12 (struct bcma_erom*) ;
 scalar_t__ FUNC_13 (struct bcma_erom*) ;
 int FUNC_14 (struct bcma_corecfg*) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 struct bcma_mport* FUNC_17 (int,int ,int ) ;
 int VAR_14 ;

int
FUNC_18(struct bcma_erom *VAR_15, struct bcma_corecfg **VAR_16)
{
 struct bcma_corecfg *VAR_17;
 struct bcma_erom_core VAR_18;
 uint8_t VAR_19;
 bus_size_t VAR_20;
 u_int VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_17 = ((void*)0);
 VAR_20 = FUNC_13(VAR_15);


 if ((VAR_23 = FUNC_7(VAR_15, &VAR_18)))
  return (VAR_23);


 FUNC_10(VAR_15);
 VAR_22 = 0;
 VAR_21 = 0;
 for (; FUNC_13(VAR_15) != VAR_20; VAR_21++) {
  struct bcma_erom_core VAR_24;


  VAR_23 = FUNC_11(VAR_15, VAR_0);
  if (VAR_23)
   return (VAR_23);

  if ((VAR_23 = FUNC_7(VAR_15, &VAR_24)))
   return (VAR_23);


  if (VAR_18.vendor == VAR_24.vendor &&
      VAR_18.device == VAR_24.device)
  {
   VAR_22++;
  }


  VAR_23 = FUNC_11(VAR_15, VAR_0);
  if (VAR_23)
   return (VAR_23);
 }


 if ((VAR_23 = FUNC_12(VAR_15)))
  return (VAR_23);


 VAR_17 = FUNC_5(VAR_21, VAR_22, VAR_18.vendor,
     VAR_18.device, VAR_18.rev);
 if (VAR_17 == ((void*)0))
  return (VAR_8);



 FUNC_3(VAR_18.num_mport <= VAR_5, ("unsupported mport count"));
 FUNC_3(VAR_18.num_dport <= VAR_5, ("unsupported dport count"));
 FUNC_3(VAR_18.num_mwrap + VAR_18.num_swrap <= VAR_5,
     ("unsupported wport count"));

 if (VAR_13) {
  FUNC_2(VAR_15,
      "core%u: %s %s (cid=%hx, rev=%hu, unit=%d)\n",
      VAR_21,
      FUNC_16(VAR_18.vendor),
      FUNC_15(VAR_18.vendor, VAR_18.device),
      VAR_18.device, VAR_18.rev, VAR_22);
 }

 VAR_17->num_master_ports = VAR_18.num_mport;
 VAR_17->num_dev_ports = 0;
 VAR_17->num_bridge_ports = 0;
 VAR_17->num_wrapper_ports = VAR_18.num_mwrap + VAR_18.num_swrap;


 for (uint8_t VAR_25 = 0; VAR_25 < VAR_18.num_mport; VAR_25++) {
  struct bcma_mport *VAR_26;
  struct bcma_erom_mport VAR_27;


  VAR_23 = FUNC_8(VAR_15, &VAR_27);
  if (VAR_23)
   goto failed;


  VAR_26 = FUNC_17(sizeof(struct bcma_mport), VAR_9, VAR_10);
  if (VAR_26 == ((void*)0)) {
   VAR_23 = VAR_8;
   goto failed;
  }

  VAR_26->mp_vid = VAR_27.port_vid;
  VAR_26->mp_num = VAR_27.port_num;


  FUNC_4(&VAR_17->master_ports, VAR_26, VAR_14);
 }
 if (VAR_18.num_dport > 0) {
  uint32_t VAR_28;

  if ((VAR_23 = FUNC_9(VAR_15, &VAR_28)))
   goto failed;

  if (FUNC_0(VAR_28, VAR_11) &&
      FUNC_1(VAR_28, VAR_12) == VAR_1)
  {
   VAR_19 = VAR_1;
   VAR_17->num_dev_ports = 0;
   VAR_17->num_bridge_ports = VAR_18.num_dport;
  } else {
   VAR_19 = VAR_2;
   VAR_17->num_dev_ports = VAR_18.num_dport;
   VAR_17->num_bridge_ports = 0;
  }
 }


 for (uint8_t VAR_29 = 0; VAR_29 < VAR_18.num_dport; VAR_29++) {
  VAR_23 = FUNC_6(VAR_15, VAR_17, VAR_29,
      VAR_19);

  if (VAR_23)
   goto failed;
 }


 for (uint8_t VAR_30 = 0; VAR_30 < VAR_18.num_mwrap; VAR_30++) {
  VAR_23 = FUNC_6(VAR_15, VAR_17, VAR_30,
      VAR_3);

  if (VAR_23)
   goto failed;
 }



 for (uint8_t VAR_31 = 0; VAR_31 < VAR_18.num_swrap; VAR_31++) {
  uint8_t VAR_32;
  VAR_32 = (VAR_18.num_mwrap > 0) ?
    VAR_18.num_mwrap :
    ((VAR_18.vendor == VAR_6) ? 1 : 0) + VAR_31;
  VAR_23 = FUNC_6(VAR_15, VAR_17, VAR_32,
      VAR_4);

  if (VAR_23)
   goto failed;
 }
 if ((VAR_23 = FUNC_11(VAR_15, VAR_0))) {
  if (VAR_23 != VAR_7)
   goto failed;
 }

 *VAR_16 = VAR_17;
 return (0);

failed:
 if (VAR_17 != ((void*)0))
  FUNC_14(VAR_17);

 return VAR_23;
}
