
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int lock; int h_FqidMm; int h_RsrvFqidMm; } ;
typedef TYPE_1__ t_Qm ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__,char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static uint32_t FUNC_5(t_Qm *VAR_1, uint32_t VAR_2, uint32_t VAR_3, bool VAR_4, uint32_t VAR_5)
{
    uint64_t VAR_6;
    uint32_t VAR_7;

    VAR_7 = FUNC_3(VAR_1->lock);
    if (VAR_4)
        VAR_6 = FUNC_1(VAR_1->h_FqidMm,
                          (uint64_t)VAR_5,
                          (uint64_t)VAR_2,
                          "QM FQID MEM");
    else
        VAR_6 = FUNC_0(VAR_1->h_FqidMm,
                     (uint64_t)VAR_2,
                     VAR_3,
                     "QM FQID MEM");
    if (VAR_6 == VAR_0)
    {
        FUNC_4(VAR_1->lock, VAR_7);
        return (uint32_t)VAR_6;
    }
    VAR_5 = (uint32_t)VAR_6;
    VAR_6 = FUNC_1(VAR_1->h_RsrvFqidMm,
                      (uint64_t)VAR_5,
                      (uint64_t)VAR_2,
                      "QM rsrv FQID MEM");
    if (VAR_6 == VAR_0)
    {
        FUNC_2(VAR_1->h_FqidMm, (uint64_t)VAR_5);
        FUNC_4(VAR_1->lock, VAR_7);
        return (uint32_t)VAR_6;
    }
    FUNC_4(VAR_1->lock, VAR_7);

    return (uint32_t)VAR_5;
}
