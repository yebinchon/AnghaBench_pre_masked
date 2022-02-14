
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int t_Handle ;
typedef int t_Error ;
struct TYPE_9__ {int h_BufferPool; int (* f_PutBuf ) (int ,void*,int ) ;} ;
struct TYPE_10__ {int flags; struct TYPE_10__* sp; int bpid; int h_Bm; TYPE_1__ bufferPoolInfo; int h_BmPortal; int shadowMode; } ;
typedef TYPE_2__ t_BmPool ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 void* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,void*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,void*,int ) ;

__attribute__((used)) static t_Error FUNC_8(t_BmPool *VAR_3, bool VAR_4)
{
    t_Handle VAR_5;
    void *VAR_6;

    FUNC_0(VAR_3);

    if (!VAR_3->shadowMode)
    {
        if (VAR_3->flags & VAR_0)
        {
            FUNC_6(VAR_3);
            FUNC_4(VAR_3->h_Bm, VAR_3->bpid);
        }
        while (VAR_2)
        {
            VAR_6 = FUNC_1(VAR_3, VAR_3->h_BmPortal);
            if (!VAR_6)
                break;
            VAR_5 = FUNC_2(VAR_3, VAR_6);
            if (!VAR_4)
                VAR_3->bufferPoolInfo.f_PutBuf(VAR_3->bufferPoolInfo.h_BufferPool, VAR_6, VAR_5);
        }
        FUNC_3(VAR_3->h_Bm, VAR_3->bpid);
    }

    if (VAR_3->sp)
        FUNC_5(VAR_3->sp);

    FUNC_5(VAR_3);

    return VAR_1;
}
