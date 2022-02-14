
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pseudo; int entropy; int rotate; int cursor; } ;
struct TYPE_6__ {int initcount; int initialized; int nextsource; int nsources; TYPE_1__ pool; int refcnt; } ;
typedef TYPE_2__ isc_entropy_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,TYPE_2__*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 char* FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_2(isc_entropy_t *VAR_3, FILE *VAR_4) {
 FUNC_0(VAR_4,
  FUNC_1(VAR_2, VAR_0,
          VAR_1,
          "Entropy pool %p:  refcnt %u cursor %u,"
          " rotate %u entropy %u pseudo %u nsources %u"
          " nextsource %p initialized %u initcount %u\n"),
  VAR_3, VAR_3->refcnt,
  VAR_3->pool.cursor, VAR_3->pool.rotate,
  VAR_3->pool.entropy, VAR_3->pool.pseudo,
  VAR_3->nsources, VAR_3->nextsource, VAR_3->initialized,
  VAR_3->initcount);
}
