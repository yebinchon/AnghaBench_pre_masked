
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int (* f_FM_MACSEC_ConfigEncryptWithNoChangedTextFrameTreatment ) (scalar_t__,int) ;} ;
typedef TYPE_1__ t_FmMacsecControllerDriver ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,int) ;

t_Error FUNC_3(t_Handle VAR_4, bool VAR_5)
{
    t_FmMacsecControllerDriver *VAR_6 = (t_FmMacsecControllerDriver *)VAR_4;

    FUNC_1(VAR_6, VAR_0);

    if (VAR_6->f_FM_MACSEC_ConfigEncryptWithNoChangedTextFrameTreatment)
        return VAR_6->f_FM_MACSEC_ConfigEncryptWithNoChangedTextFrameTreatment(VAR_4, VAR_5);

    FUNC_0(VAR_2, VAR_1, VAR_3);
}
