
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_nvm_image_att {int length; int start_addr; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum ecore_nvm_images { ____Placeholder_ecore_nvm_images } ecore_nvm_images ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int,struct ecore_nvm_image_att*) ;
 int FUNC_3 (int ,int ,int *,int) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_4,
          struct ecore_ptt *VAR_5,
          enum ecore_nvm_images VAR_6,
          u8 *VAR_7, u32 VAR_8)
{
 struct ecore_nvm_image_att VAR_9;
 enum _ecore_status_t VAR_10;

 FUNC_1(VAR_7, VAR_8);

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_9);
 if (VAR_10 != VAR_3)
  return VAR_10;


 if (VAR_9.length <= 4) {
  FUNC_0(VAR_4, VAR_1,
      "Image [%d] is too small - only %d bytes\n",
      VAR_6, VAR_9.length);
  return VAR_0;
 }


 VAR_9.length -= 4;

 if (VAR_9.length > VAR_8) {
  FUNC_0(VAR_4, VAR_1,
      "Image [%d] is too big - %08x bytes where only %08x are available\n",
      VAR_6, VAR_9.length, VAR_8);
  return VAR_2;
 }

 return FUNC_3(VAR_4->p_dev, VAR_9.start_addr,
      VAR_7, VAR_9.length);
}
