
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int strategy; } ;
struct TYPE_7__ {TYPE_1__ cParams; } ;
typedef TYPE_2__ ZSTD_matchState_t ;
typedef int BYTE ;







 int VAR_0 ;

 int FUNC_0 (TYPE_2__*,int const* const,int ) ;
 int FUNC_1 (TYPE_2__*,int const* const,int ) ;



 int FUNC_2 (int ) ;

__attribute__((used)) static size_t FUNC_3(ZSTD_matchState_t* VAR_1,
                                      void const* VAR_2)
{
    const BYTE* const VAR_3 = (const BYTE*)VAR_2;

    switch(VAR_1->cParams.strategy)
    {
    case 131:
        FUNC_1(VAR_1, VAR_3, VAR_0);
        break;

    case 132:
        FUNC_0(VAR_1, VAR_3, VAR_0);
        break;

    case 130:
    case 129:
    case 128:
    case 136:
    case 135:
    case 134:
    case 133:
        break;
    default:
        FUNC_2(0);
    }

    return 0;
}
