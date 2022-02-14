
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ses_requests; } ;
typedef TYPE_1__ ses_softc_t ;
struct TYPE_5__ {TYPE_1__* enc_private; } ;
typedef TYPE_2__ enc_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(enc_softc_t *VAR_1)
{
 ses_softc_t *VAR_2;

 VAR_2 = VAR_1->enc_private;
 FUNC_0(&VAR_2->ses_requests, VAR_0);
}
