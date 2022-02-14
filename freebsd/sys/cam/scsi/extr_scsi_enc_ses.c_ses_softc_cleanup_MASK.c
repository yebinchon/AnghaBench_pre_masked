
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int private; } ;
struct TYPE_5__ {TYPE_4__ enc_daemon_cache; TYPE_4__ enc_cache; int enc_private; } ;
typedef TYPE_1__ enc_softc_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2(enc_softc_t *VAR_0)
{

 FUNC_1(VAR_0, &VAR_0->enc_cache);
 FUNC_1(VAR_0, &VAR_0->enc_daemon_cache);
 FUNC_0(VAR_0->enc_private);
 FUNC_0(VAR_0->enc_cache.private);
 FUNC_0(VAR_0->enc_daemon_cache.private);
}
