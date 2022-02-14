
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {struct iwm_fw_img* img; } ;
struct iwm_softc {TYPE_1__ sc_fw; } ;
struct iwm_fw_img {size_t fw_count; struct iwm_fw_desc* sec; } ;
struct iwm_fw_desc {size_t len; int const* data; int offset; } ;
typedef enum iwm_ucode_type { ____Placeholder_iwm_ucode_type } iwm_ucode_type ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static int
FUNC_1(struct iwm_softc *VAR_3,
    enum iwm_ucode_type VAR_4, const uint8_t *VAR_5, size_t VAR_6)
{
 struct iwm_fw_img *VAR_7;
 struct iwm_fw_desc *VAR_8;

 if (VAR_4 >= VAR_2)
  return VAR_0;
 if (VAR_6 < sizeof(uint32_t))
  return VAR_0;

 VAR_7 = &VAR_3->sc_fw.img[VAR_4];
 if (VAR_7->fw_count >= VAR_1)
  return VAR_0;

 VAR_8 = &VAR_7->sec[VAR_7->fw_count];


 FUNC_0(&VAR_8->offset, VAR_5, sizeof(uint32_t));


 VAR_8->data = VAR_5 + sizeof(uint32_t);
 VAR_8->len = VAR_6 - sizeof(uint32_t);

 VAR_7->fw_count++;

 return 0;
}
