
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int elm_idx; int cstat; } ;
typedef TYPE_3__ encioc_elm_status_t ;
struct TYPE_8__ {TYPE_1__* elm_map; } ;
struct TYPE_10__ {TYPE_2__ enc_cache; } ;
typedef TYPE_4__ enc_softc_t ;
struct TYPE_7__ {int encstat; } ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_1(enc_softc_t *VAR_0, encioc_elm_status_t *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_1->elm_idx;

 FUNC_0(VAR_1->cstat, &VAR_0->enc_cache.elm_map[VAR_3].encstat, 4);
 return (0);
}
