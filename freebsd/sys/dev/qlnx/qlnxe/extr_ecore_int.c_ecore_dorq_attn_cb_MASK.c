
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; struct ecore_ptt* p_dpc_ptt; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


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
 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int FUNC_1 (int ,int,char*,int,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_16)
{
 u32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21,
  VAR_22;
 struct ecore_ptt *VAR_23 = VAR_16->p_dpc_ptt;
 enum _ecore_status_t VAR_24;

 VAR_17 = FUNC_4(VAR_16, VAR_23, VAR_5);
 FUNC_1(VAR_16->p_dev, 0, "DORQ attention. int_sts was %x\n",
    VAR_17);






 if (!(VAR_17 & ~VAR_7))
  return VAR_15;


 if (VAR_17 & (VAR_6 |
         VAR_8)) {


  VAR_18 = FUNC_4(VAR_16, VAR_23,
      VAR_4) &
      VAR_12;
  VAR_19 = FUNC_4(VAR_16, VAR_23,
       VAR_0);
  VAR_20 = FUNC_4(VAR_16, VAR_23,
       VAR_1);
  VAR_21 = FUNC_4(VAR_16, VAR_23,
        VAR_10);
  VAR_22 = FUNC_4(VAR_16, VAR_23,
         VAR_2);


  FUNC_1(VAR_16->p_dev, 0,
     "Doorbell drop occurred\n"
     "Address\t\t0x%08x\t(second BAR address)\n"
     "FID\t\t0x%04x\t\t(Opaque FID)\n"
     "Size\t\t0x%04x\t\t(in bytes)\n"
     "1st drop reason\t0x%08x\t(details on first drop since last handling)\n"
     "Sticky reasons\t0x%08x\t(all drop reasons since last handling)\n"
     "Overflow\t0x%x\t\t(a per PF indication)\n",
     VAR_20, FUNC_2(VAR_19, VAR_11),
     FUNC_2(VAR_19, VAR_13) * 4,
     VAR_18, VAR_22, VAR_21);


  if (VAR_21) {
   VAR_24 = FUNC_3(VAR_16, VAR_23);
   if (VAR_24 != VAR_15)
    return VAR_24;
  }


  FUNC_5(VAR_16, VAR_23, VAR_3, 0);




  FUNC_5(VAR_16, VAR_23, VAR_9,
    VAR_6 | VAR_8);


  if ((VAR_17 & ~(VAR_6 |
     VAR_8 |
     VAR_7)) == 0)
   return VAR_15;
 }


 FUNC_0(VAR_16, "DORQ fatal attention\n");

 return VAR_14;
}
