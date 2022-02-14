
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nelms; int elm_map; } ;
struct TYPE_5__ {TYPE_1__ enc_cache; int enc_private; } ;
typedef TYPE_2__ enc_softc_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(enc_softc_t *VAR_0)
{

 FUNC_0(VAR_0->enc_cache.elm_map);
 FUNC_0(VAR_0->enc_private);
 VAR_0->enc_cache.nelms = 0;
}
