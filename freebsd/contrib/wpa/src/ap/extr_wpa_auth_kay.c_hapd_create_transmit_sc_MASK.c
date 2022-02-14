
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transmit_sc {int dummy; } ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
typedef enum confidentiality_offset { ____Placeholder_confidentiality_offset } confidentiality_offset ;
struct TYPE_2__ {int (* create_transmit_sc ) (int ,struct transmit_sc*,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct transmit_sc*,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, struct transmit_sc *VAR_1,
   enum confidentiality_offset VAR_2)
{
 struct hostapd_data *VAR_3 = VAR_0;

 if (!VAR_3->driver->create_transmit_sc)
  return -1;
 return VAR_3->driver->create_transmit_sc(VAR_3->drv_priv, VAR_1,
      FUNC_0(VAR_2));
}
