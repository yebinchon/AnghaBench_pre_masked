
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_14__ {size_t size; TYPE_1__* data; } ;
typedef TYPE_4__ param_values_t ;
struct TYPE_15__ {scalar_t__ no_pledged_src_size; TYPE_4__ param_values; } ;
typedef TYPE_5__ config_t ;
typedef int ZSTD_strategy ;
struct TYPE_13__ {unsigned int windowLog; unsigned int chainLog; unsigned int hashLog; unsigned int searchLog; unsigned int minMatch; unsigned int targetLength; int strategy; } ;
struct TYPE_12__ {unsigned int contentSizeFlag; unsigned int checksumFlag; int noDictIDFlag; } ;
struct TYPE_16__ {TYPE_3__ cParams; TYPE_2__ fParams; } ;
typedef TYPE_6__ ZSTD_parameters ;
struct TYPE_11__ {unsigned int value; int param; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ FUNC_0 (int,int ,size_t) ;
 int FUNC_1 (TYPE_5__ const*) ;

ZSTD_parameters FUNC_2(
    config_t const* VAR_2,
    uint64_t VAR_3,
    size_t VAR_4)
{
    ZSTD_parameters VAR_5 = {};
    param_values_t const VAR_6 = VAR_2->param_values;
    int VAR_7 = FUNC_1(VAR_2);
    if (VAR_7 == VAR_0)
        VAR_7 = 3;
    VAR_5 = FUNC_0(
        VAR_7,
        VAR_2->no_pledged_src_size ? VAR_1 : VAR_3,
        VAR_4);
    for (size_t VAR_8 = 0; VAR_8 < VAR_6.size; ++VAR_8) {
        unsigned const VAR_9 = VAR_6.data[VAR_8].value;
        switch (VAR_6.data[VAR_8].param) {
            case 135:
                VAR_5.fParams.contentSizeFlag = VAR_9;
                break;
            case 136:
                VAR_5.fParams.checksumFlag = VAR_9;
                break;
            case 134:
                VAR_5.fParams.noDictIDFlag = !VAR_9;
                break;
            case 128:
                VAR_5.cParams.windowLog = VAR_9;
                break;
            case 137:
                VAR_5.cParams.chainLog = VAR_9;
                break;
            case 133:
                VAR_5.cParams.hashLog = VAR_9;
                break;
            case 131:
                VAR_5.cParams.searchLog = VAR_9;
                break;
            case 132:
                VAR_5.cParams.minMatch = VAR_9;
                break;
            case 129:
                VAR_5.cParams.targetLength = VAR_9;
                break;
            case 130:
                VAR_5.cParams.strategy = (ZSTD_strategy)VAR_9;
                break;
            default:
                break;
        }
    }
    return VAR_5;
}
