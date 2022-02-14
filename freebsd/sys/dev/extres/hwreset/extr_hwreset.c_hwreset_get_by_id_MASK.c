
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hwreset {int dummy; } ;
typedef TYPE_1__* hwreset_t ;
typedef void* device_t ;
struct TYPE_4__ {intptr_t rst_id; void* provider_dev; void* consumer_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ,int) ;

int
FUNC_1(device_t VAR_3, device_t VAR_4, intptr_t VAR_5,
    hwreset_t *VAR_6)
{
 hwreset_t VAR_7;


 VAR_7 = FUNC_0(sizeof(struct hwreset), VAR_0,
     VAR_1 | VAR_2);
 VAR_7->consumer_dev = VAR_3;
 VAR_7->provider_dev = VAR_4;
 VAR_7->rst_id = VAR_5;
 *VAR_6 = VAR_7;
 return (0);
}
