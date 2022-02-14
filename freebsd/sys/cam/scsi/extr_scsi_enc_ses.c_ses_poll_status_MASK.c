
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ses_flags; } ;
typedef TYPE_1__ ses_softc_t ;
struct TYPE_6__ {TYPE_1__* enc_private; } ;
typedef TYPE_2__ enc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_1(enc_softc_t *VAR_5)
{
 ses_softc_t *VAR_6;

 VAR_6 = VAR_5->enc_private;
 FUNC_0(VAR_5, VAR_4);
 if (VAR_6->ses_flags & VAR_1)
  FUNC_0(VAR_5, VAR_3);
 if (VAR_6->ses_flags & VAR_0)
  FUNC_0(VAR_5, VAR_2);
}
