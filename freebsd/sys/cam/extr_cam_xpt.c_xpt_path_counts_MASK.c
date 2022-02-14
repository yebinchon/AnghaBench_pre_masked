
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct cam_path {TYPE_4__* device; TYPE_3__* target; TYPE_2__* periph; TYPE_1__* bus; } ;
struct TYPE_8__ {scalar_t__ refcount; } ;
struct TYPE_7__ {scalar_t__ refcount; } ;
struct TYPE_6__ {scalar_t__ refcount; } ;
struct TYPE_5__ {scalar_t__ refcount; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void
FUNC_2(struct cam_path *VAR_0, uint32_t *VAR_1,
    uint32_t *VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{

 FUNC_0();
 if (VAR_1) {
  if (VAR_0->bus)
   *VAR_1 = VAR_0->bus->refcount;
  else
   *VAR_1 = 0;
 }
 if (VAR_2) {
  if (VAR_0->periph)
   *VAR_2 = VAR_0->periph->refcount;
  else
   *VAR_2 = 0;
 }
 FUNC_1();
 if (VAR_3) {
  if (VAR_0->target)
   *VAR_3 = VAR_0->target->refcount;
  else
   *VAR_3 = 0;
 }
 if (VAR_4) {
  if (VAR_0->device)
   *VAR_4 = VAR_0->device->refcount;
  else
   *VAR_4 = 0;
 }
}
