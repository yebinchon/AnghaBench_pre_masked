
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* ifm_cur; int ifm_media; } ;
struct TYPE_7__ {int current_media; TYPE_4__ media; } ;
typedef TYPE_2__ mxge_softc_t ;
struct TYPE_6__ {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int,int ,int *) ;
 int FUNC_1 (TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_2(mxge_softc_t *VAR_2, int VAR_3)
{


 FUNC_0(&VAR_2->media, VAR_0 | VAR_1 | VAR_3,
      0, ((void*)0));
 FUNC_1(&VAR_2->media, VAR_0 | VAR_1 | VAR_3);
 VAR_2->current_media = VAR_3;
 VAR_2->media.ifm_media = VAR_2->media.ifm_cur->ifm_media;
}
