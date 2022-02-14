
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* rxri; void* rxseq; int hlm; } ;
struct TYPE_10__ {TYPE_1__ flag; } ;
struct TYPE_8__ {TYPE_5__ features; int high_login_mode; scalar_t__ has_extents; } ;
struct TYPE_9__ {TYPE_2__ config; int os; } ;
typedef TYPE_3__ sli4_t ;
typedef int int32_t ;


 void* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_5__*,void*) ;

int32_t
FUNC_2(sli4_t *VAR_1)
{

 if (VAR_1->config.has_extents) {
                                          ;
  FUNC_0(VAR_1->os, "XXX need to implement extent allocation\n");
  return -1;
 }

 VAR_1->config.features.flag.hlm = VAR_1->config.high_login_mode;
 VAR_1->config.features.flag.rxseq = VAR_0;
 VAR_1->config.features.flag.rxri = VAR_0;

 if (FUNC_1(VAR_1, &VAR_1->config.features, VAR_0)) {
  return -1;
 }

 return 0;
}
