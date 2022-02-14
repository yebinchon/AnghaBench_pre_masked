
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ frameAnnotationSize; scalar_t__ frameDataSize; scalar_t__ fqContextSize; int fqContextAddr; } ;
struct TYPE_6__ {TYPE_1__ stashingParams; } ;
typedef TYPE_2__ t_QmFqrParams ;
typedef int t_Error ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static __inline__ t_Error FUNC_3(t_QmFqrParams *VAR_5)
{
    FUNC_0(VAR_5);

    if (VAR_5->stashingParams.frameAnnotationSize > VAR_4)
        FUNC_2(VAR_3, VAR_1, ("Frame Annotation Size Exceeded Max Stash Size(%d)", VAR_4));
    if (VAR_5->stashingParams.frameDataSize > VAR_4)
        FUNC_2(VAR_3, VAR_1, ("Frame Data Size Exceeded Max Stash Size(%d)", VAR_4));
    if (VAR_5->stashingParams.fqContextSize > VAR_4)
        FUNC_2(VAR_3, VAR_1, ("Frame Context Size Exceeded Max Stash Size(%d)", VAR_4));
    if (VAR_5->stashingParams.fqContextSize)
    {
        if (!VAR_5->stashingParams.fqContextAddr)
            FUNC_2(VAR_3, VAR_1, ("FQ Context Address Must be givven"));
        if (!FUNC_1(VAR_5->stashingParams.fqContextAddr, VAR_0))
            FUNC_2(VAR_3, VAR_1, ("FQ Context Address Must be aligned to %d", VAR_0));
        if (VAR_5->stashingParams.fqContextAddr & 0xffffff0000000000LL)
            FUNC_2(VAR_3, VAR_1, ("FQ Context Address May be up to 40 bit"));
    }

    return VAR_2;
}
