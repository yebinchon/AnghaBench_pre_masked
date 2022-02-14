
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ ccShadowSize; scalar_t__ ccShadowAlign; void* p_CcShadow; } ;
typedef TYPE_1__ t_FmPcd ;
typedef int t_Error ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ,char*) ;
 int VAR_5 ;

t_Error FUNC_8(t_FmPcd *VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{
    uint32_t VAR_9;
    uint32_t VAR_10 = 0, VAR_11 = 0;
    bool VAR_12 = VAR_3;

    FUNC_0(VAR_6);

    if (!VAR_7)
        FUNC_7(VAR_4, VAR_0, ("size must be larger then 0"));

    if (!FUNC_6(VAR_8))
        FUNC_7(VAR_4, VAR_0, ("alignment must be power of 2"));

    VAR_10 = VAR_6->ccShadowSize;
    VAR_11 = VAR_6->ccShadowAlign;


    if (VAR_7 > VAR_6->ccShadowSize)
        VAR_10 = VAR_7;


    if (VAR_8 > VAR_6->ccShadowAlign)
        VAR_11 = VAR_8;



    if ((VAR_10 != VAR_6->ccShadowSize)
            || (VAR_11 != VAR_6->ccShadowAlign))
    {
        VAR_9 = FUNC_4(VAR_6);

        if (VAR_6->p_CcShadow)
        {
            FUNC_2(FUNC_3(VAR_6), VAR_6->p_CcShadow);
            VAR_6->ccShadowSize = 0;
            VAR_6->ccShadowAlign = 0;
        }

        VAR_6->p_CcShadow = FUNC_1(FUNC_3(VAR_6),
                                                VAR_10, VAR_11);
        if (!VAR_6->p_CcShadow)
        {
            VAR_12 = VAR_5;



            VAR_6->p_CcShadow = FUNC_1(
                    FUNC_3(VAR_6), VAR_6->ccShadowSize,
                    VAR_6->ccShadowAlign);
        }

        FUNC_5(VAR_6, VAR_9);

        if (VAR_12)
            FUNC_7(VAR_4, VAR_1,
                         ("MURAM allocation for CC Shadow memory"));

        VAR_6->ccShadowSize = VAR_10;
        VAR_6->ccShadowAlign = VAR_11;
    }

    return VAR_2;
}
