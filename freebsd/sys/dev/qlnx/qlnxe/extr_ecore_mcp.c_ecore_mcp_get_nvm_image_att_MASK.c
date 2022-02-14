
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_nvm_image_att {int length; int start_addr; } ;
struct ecore_hwfn {int dummy; } ;
struct bist_nvm_image_att {int image_type; int len; int nvm_start_addr; } ;
typedef enum nvm_image_type { ____Placeholder_nvm_image_type } nvm_image_type ;
typedef enum ecore_nvm_images { ____Placeholder_ecore_nvm_images } ecore_nvm_images ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct bist_nvm_image_att*,scalar_t__) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__*) ;

enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_6, struct ecore_ptt *VAR_7,
       enum ecore_nvm_images VAR_8,
       struct ecore_nvm_image_att *VAR_9)
{
 struct bist_nvm_image_att VAR_10;
 enum nvm_image_type VAR_11;
 u32 VAR_12, VAR_13;
 enum _ecore_status_t VAR_14;


 switch (VAR_8) {
 case 129:
  VAR_11 = VAR_4;
  break;
 case 130:
  VAR_11 = VAR_3;
  break;
 case 128:
  VAR_11 = VAR_5;
  break;
 default:
  FUNC_0(VAR_6, 0, "Unknown request of image_id %08x\n",
     VAR_8);
  return VAR_0;
 }


 VAR_14 = FUNC_3(VAR_6, VAR_7, &VAR_12);
 if (VAR_14 != VAR_2 || !VAR_12)
  return VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_14 = FUNC_2(VAR_6, VAR_7,
          &VAR_10, VAR_13);
  if (VAR_14 != VAR_2)
   return VAR_14;

  if (VAR_11 == VAR_10.image_type)
   break;
 }
 if (VAR_13 == VAR_12) {
  FUNC_1(VAR_6, VAR_1,
      "Failed to find nvram image of type %08x\n",
      VAR_8);
  return VAR_0;
 }

 VAR_9->start_addr = VAR_10.nvm_start_addr;
 VAR_9->length = VAR_10.len;

 return VAR_2;
}
