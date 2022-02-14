
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {struct ecore_dev* p_dev; } ;
struct ecore_dev {int num_ports_in_engine; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (struct ecore_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ecore_dev*) ;
 scalar_t__ FUNC_3 (struct ecore_dev*) ;
 scalar_t__ FUNC_4 (struct ecore_dev*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_8(struct ecore_hwfn *VAR_9,
            struct ecore_ptt *VAR_10)
{
 struct ecore_dev *VAR_11 = VAR_9->p_dev;
 u32 VAR_12 = 1;
 int VAR_13;

 if (FUNC_0(VAR_11)) {
  if (FUNC_2(VAR_11))
   VAR_12 |= 0x600;
  else if (FUNC_4(VAR_11))
   VAR_1;
 }

 FUNC_7(VAR_9, VAR_10, VAR_3 + 4, VAR_12);

 if (FUNC_0(VAR_11) &&
     (FUNC_2(VAR_11) || FUNC_4(VAR_11)))
  FUNC_7(VAR_9, VAR_10, VAR_4,
    0x3ffffff);



 if (!FUNC_0(VAR_11) || FUNC_3(VAR_11))
  FUNC_7(VAR_9, VAR_10, VAR_0, 4);

 if (FUNC_0(VAR_11)) {
  if (FUNC_2(VAR_11)) {

   FUNC_7(VAR_9, VAR_10, VAR_6,
     (VAR_11->num_ports_in_engine >> 1));

   FUNC_7(VAR_9, VAR_10, VAR_5,
     VAR_11->num_ports_in_engine == 4 ? 0 : 3);
  } else if (FUNC_4(VAR_11)) {
   VAR_1;
  }


  FUNC_7(VAR_9, VAR_10, VAR_8, 1);
  for (VAR_13 = 0; VAR_13 < 100; VAR_13++) {
   FUNC_5(50);
   if (FUNC_6(VAR_9, VAR_10, VAR_7) == 1)
    break;
  }
  if (VAR_13 == 100)
   FUNC_1(VAR_9, 1,
      "RBC done failed to complete in PSWRQ2\n");
 }

 return VAR_2;
}
