
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; int port_id; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (struct ecore_hwfn*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;
 int FUNC_13 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_14(struct ecore_hwfn *VAR_11,
            struct ecore_ptt *VAR_12,
            int VAR_13)
{
 enum _ecore_status_t VAR_14 = VAR_1;


 if (!FUNC_6(VAR_11->p_dev) || !FUNC_7(VAR_11))
  FUNC_8(VAR_11, VAR_6, 0);

 VAR_14 = FUNC_10(VAR_11, VAR_12, VAR_10, VAR_11->port_id,
       VAR_13);
 if (VAR_14 != VAR_1)
  return VAR_14;

 FUNC_13(VAR_11, VAR_12, VAR_9, 0);


 if (FUNC_0(VAR_11->p_dev))
  return VAR_1;

 if (FUNC_2(VAR_11->p_dev)) {
  if (FUNC_4(VAR_11->p_dev))
   return VAR_1;
  else if (FUNC_5(VAR_11->p_dev))
   FUNC_11(VAR_11, VAR_12, VAR_11->port_id);
  else
   VAR_0;
 } else if (FUNC_1(VAR_11->p_dev)) {
  if (FUNC_6(VAR_11->p_dev)) {

   u32 VAR_15;

   VAR_15 = FUNC_12(VAR_11, VAR_12, VAR_3);
   VAR_15 |= 0x10;
   FUNC_13(VAR_11, VAR_12, VAR_3, VAR_15);
   FUNC_13(VAR_11, VAR_12, VAR_4, 1);
   FUNC_13(VAR_11, VAR_12, VAR_2, 1);
   FUNC_13(VAR_11, VAR_12, VAR_5, 1);
   FUNC_13(VAR_11, VAR_12,
     VAR_8, 1);
   FUNC_13(VAR_11, VAR_12,
     VAR_7, 0x55555555);
   FUNC_13(VAR_11, VAR_12,
     VAR_7 + 0x4,
     0x55555555);
  }

  FUNC_9(VAR_11, VAR_12);
 } else {
  FUNC_3(VAR_11->p_dev, "link is not being configured\n");
 }


 return VAR_14;
}
