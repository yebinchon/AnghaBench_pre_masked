
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_hwfn {int p_dpc_ptt; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (int ,int,char*,int,int,char*,int,int ,int,char*,int) ;
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
 int VAR_14 ;
 int FUNC_1 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int ,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_15)
{
 u32 VAR_16, VAR_17;




 VAR_16 = FUNC_1(VAR_15, VAR_15->p_dpc_ptt,
         VAR_14);
 if (!(VAR_16 & VAR_8))
  goto out;


 VAR_16 = FUNC_1(VAR_15, VAR_15->p_dpc_ptt,
         VAR_12);
 VAR_17 = FUNC_1(VAR_15, VAR_15->p_dpc_ptt,
   VAR_13);

 FUNC_0(VAR_15->p_dev, 0,
    "GRC timeout [%08x:%08x] - %s Address [%08x] [Master %s] [PF: %02x %s %02x]\n",
    VAR_17, VAR_16,
    (VAR_16 & VAR_7) ? "Write to"
             : "Read from",
    (VAR_16 & VAR_0) << 2,
    FUNC_3((VAR_16 & VAR_1) >>
       VAR_2),
    (VAR_17 & VAR_3),
    (((VAR_17 & VAR_4) >>
    VAR_5) ==
    VAR_6) ? "VF" : "(Irrelevant:)",
    (VAR_17 & VAR_9) >>
    VAR_10);

out:

 FUNC_2(VAR_15, VAR_15->p_dpc_ptt,
   VAR_14, 0);
 return VAR_11;
}
