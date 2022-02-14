
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_5__ {scalar_t__ dataAlign; } ;
struct TYPE_4__ {TYPE_2__ bufferPrefixContent; struct TYPE_4__* p_FmPortDriverParam; } ;
typedef TYPE_1__ t_FmPort ;
typedef int t_FmBufferPrefixContent ;
typedef int t_Error ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;

t_Error FUNC_2(
        t_Handle VAR_3, t_FmBufferPrefixContent *VAR_4)
{
    t_FmPort *VAR_5 = (t_FmPort*)VAR_3;

    FUNC_0(VAR_5, VAR_1);
    FUNC_0(VAR_5->p_FmPortDriverParam, VAR_1);

    FUNC_1(&VAR_5->p_FmPortDriverParam->bufferPrefixContent,
           VAR_4, sizeof(t_FmBufferPrefixContent));

    if (!VAR_5->p_FmPortDriverParam->bufferPrefixContent.dataAlign)
        VAR_5->p_FmPortDriverParam->bufferPrefixContent.dataAlign =
                VAR_0;

    return VAR_2;
}
