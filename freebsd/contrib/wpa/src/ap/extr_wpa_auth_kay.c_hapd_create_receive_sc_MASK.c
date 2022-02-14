
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct receive_sc {int dummy; } ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
typedef enum validate_frames { ____Placeholder_validate_frames } validate_frames ;
typedef enum confidentiality_offset { ____Placeholder_confidentiality_offset } confidentiality_offset ;
struct TYPE_2__ {int (* create_receive_sc ) (int ,struct receive_sc*,int ,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct receive_sc*,int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, struct receive_sc *VAR_1,
      enum validate_frames VAR_2,
      enum confidentiality_offset VAR_3)
{
 struct hostapd_data *VAR_4 = VAR_0;

 if (!VAR_4->driver->create_receive_sc)
  return -1;
 return VAR_4->driver->create_receive_sc(VAR_4->drv_priv, VAR_1,
            FUNC_0(VAR_3), VAR_2);
}
