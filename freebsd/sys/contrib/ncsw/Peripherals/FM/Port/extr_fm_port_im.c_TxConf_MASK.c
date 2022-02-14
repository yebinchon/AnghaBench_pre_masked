
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct TYPE_6__ {size_t currBdId; int * p_BdShadow; int (* f_TxConf ) (int ,int ,int ,int ) ;} ;
struct TYPE_7__ {TYPE_1__ im; int h_App; } ;
typedef TYPE_2__ t_FmPort ;
typedef scalar_t__ t_Error ;
typedef int e_TxConfType ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_5 (TYPE_2__*,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static t_Error FUNC_8(t_FmPort *VAR_8, e_TxConfType VAR_9)
{
    t_Error VAR_10 = VAR_2;
    uint32_t VAR_11;
    uint16_t VAR_12, VAR_13;

    FUNC_0(VAR_8);






    VAR_13 = VAR_12 = VAR_8->im.currBdId;
    VAR_11 = FUNC_2(FUNC_1(VAR_13));



    while ((!(VAR_11 & VAR_1) || (VAR_9 == VAR_7)) && (VAR_10 != VAR_3))
    {
        if (VAR_9 & VAR_6)
            FUNC_3(FUNC_1(VAR_13), 0);


        if ((VAR_9 & VAR_6) && (VAR_11 & VAR_0))
        {
            if (VAR_8->im.f_TxConf)
            {
                if ((VAR_9 == VAR_7) && (VAR_11 & VAR_1))
                    VAR_8->im.f_TxConf(VAR_8->h_App,
                                          FUNC_4(VAR_5, FUNC_1(VAR_13)),
                                          VAR_4,
                                          VAR_8->im.p_BdShadow[VAR_13]);
                else
                    VAR_8->im.f_TxConf(VAR_8->h_App,
                                          FUNC_4(VAR_5, FUNC_1(VAR_13)),
                                          0,
                                          VAR_8->im.p_BdShadow[VAR_13]);
            }
        }


        VAR_13 = FUNC_5(VAR_8, VAR_13);
        if (VAR_13 == VAR_12)
            VAR_10 = VAR_3;
        VAR_11 = FUNC_2(FUNC_1(VAR_13));
    }

    return VAR_10;
}
