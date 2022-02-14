
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_6__ {TYPE_1__* copper_queue; } ;
typedef TYPE_2__ ips_softc_t ;
struct TYPE_5__ {scalar_t__ nextstatus; scalar_t__ base_phys_addr; int * status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static u_int32_t FUNC_1(ips_softc_t *VAR_2)
{
 u_int32_t VAR_3;
 int VAR_4 = VAR_2->copper_queue->nextstatus++;
 if(VAR_2->copper_queue->nextstatus == VAR_1)
  VAR_2->copper_queue->nextstatus = 0;
 VAR_3 = VAR_2->copper_queue->status[VAR_4];
 FUNC_0(VAR_2, VAR_0, VAR_2->copper_queue->base_phys_addr +
      4 * VAR_4);
 return VAR_3;
}
