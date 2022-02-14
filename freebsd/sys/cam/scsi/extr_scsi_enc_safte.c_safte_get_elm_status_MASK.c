
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * cstat; scalar_t__ elm_idx; } ;
typedef TYPE_3__ encioc_elm_status_t ;
struct TYPE_8__ {TYPE_1__* elm_map; } ;
struct TYPE_10__ {TYPE_2__ enc_cache; } ;
typedef TYPE_4__ enc_softc_t ;
struct TYPE_7__ {int * encstat; } ;



__attribute__((used)) static int
FUNC_0(enc_softc_t *VAR_0, encioc_elm_status_t *VAR_1, int VAR_2)
{
 int VAR_3 = (int)VAR_1->elm_idx;

 VAR_1->cstat[0] = VAR_0->enc_cache.elm_map[VAR_3].encstat[0];
 VAR_1->cstat[1] = VAR_0->enc_cache.elm_map[VAR_3].encstat[1];
 VAR_1->cstat[2] = VAR_0->enc_cache.elm_map[VAR_3].encstat[2];
 VAR_1->cstat[3] = VAR_0->enc_cache.elm_map[VAR_3].encstat[3];
 return (0);
}
