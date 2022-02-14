
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int pcell_t ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_6, u_int VAR_7, pcell_t *VAR_8, u_int *VAR_9,
    enum intr_polarity *VAR_10, enum intr_trigger *VAR_11)
{
 u_int VAR_12, VAR_13;
 enum intr_polarity VAR_14;
 enum intr_trigger VAR_15;

 if (VAR_7 != 2) {
  FUNC_0(VAR_6, "Invalid #interrupt-cells\n");
  return (VAR_0);
 }

 VAR_12 = VAR_8[0];
 if (VAR_12 != 0) {
  FUNC_0(VAR_6, "Controller only support irq 0\n");
  return (VAR_0);
 }

 VAR_13 = VAR_8[1];

 switch (VAR_13) {
 case 130:
  VAR_15 = VAR_4;
  VAR_14 = VAR_2;
  break;
 case 131:
  VAR_15 = VAR_4;
  VAR_14 = VAR_3;
  break;
 case 129:
  VAR_15 = VAR_5;
  VAR_14 = VAR_2;
  break;
 case 128:
  VAR_15 = VAR_5;
  VAR_14 = VAR_3;
  break;
 default:
  FUNC_0(VAR_6, "unsupported trigger/polarity 0x%2x\n",
      VAR_13);
  return (VAR_1);
 }

 *VAR_9 = VAR_12;
 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_14;
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_15;
 return (0);
}
