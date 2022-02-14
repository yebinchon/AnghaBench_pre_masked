
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ hdr_template_req; } ;
struct TYPE_5__ {TYPE_1__ config; } ;
typedef TYPE_2__ sli4_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

uint32_t
FUNC_1(sli4_t *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = 0;


 if (VAR_1->config.hdr_template_req) {

  VAR_3 = FUNC_0(VAR_2 * VAR_0);
 }

 return VAR_3;
}
