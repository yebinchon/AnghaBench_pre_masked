
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_medium ;
typedef int link_state ;
typedef int hardware_status ;
typedef int bpf_u_int32 ;
typedef int NDIS_PHYSICAL_MEDIUM ;
typedef int NDIS_LINK_STATE ;
typedef int NDIS_HARDWARE_STATUS ;
typedef int ADAPTER ;




 size_t VAR_0 ;
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
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int,int*,size_t*,char*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_13, bpf_u_int32 *VAR_14, char *VAR_15)
{
 char *VAR_16;
 ADAPTER *VAR_17;
 int VAR_18;
 size_t VAR_19;
 NDIS_HARDWARE_STATUS VAR_20;
 int VAR_21;

 if (*VAR_14 & VAR_9) {





  *VAR_14 |= VAR_11 | VAR_10 | VAR_8;
  return (0);
 }
 VAR_16 = FUNC_5(VAR_13);
 VAR_17 = FUNC_2(VAR_16);
 FUNC_3(VAR_16);
 if (VAR_17 == ((void*)0)) {



  return (0);
 }
 VAR_19 = sizeof (VAR_20);
 VAR_18 = FUNC_4(VAR_17, VAR_1,
     &VAR_20, &VAR_19, VAR_15);
 if (VAR_18 == 0) {
  switch (VAR_20) {

  case 137:




   *VAR_14 |= VAR_11 | VAR_10;
   break;

  case 139:
  case 136:




   *VAR_14 |= VAR_11;
   break;

  case 140:
  case 138:




   break;
  }
 } else {




  *VAR_14 |= VAR_11 | VAR_10;
 }
 VAR_18 = -1;

 if (VAR_18 == -1) {




  VAR_18 = FUNC_4(VAR_17, VAR_3,
      &VAR_21, &VAR_19, VAR_15);
  if (VAR_18 == 0) {
   switch (VAR_21) {

   case 135:



    *VAR_14 |= VAR_6;
    break;

   case 134:



    *VAR_14 |= VAR_7;
    break;
   }
  }
 }
 FUNC_0(VAR_17);
 return (0);
}
