
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int t_Handle ;
struct TYPE_3__ {int flags; int spFill; int spMinBufs; int spBufsCmd; int sp; int bpid; } ;
typedef TYPE_1__ t_BmPool ;
struct bm_buffer {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct bm_buffer*,int) ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct bm_buffer*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(t_BmPool *VAR_3,t_Handle VAR_4,
            struct bm_buffer *VAR_5, uint8_t VAR_6, uint32_t VAR_7)
{
    FUNC_0(FUNC_2(1, VAR_6, 8));
    if (VAR_3->flags & VAR_1)
        return 0;


    if (!(VAR_3->flags & VAR_2))
        return FUNC_1(VAR_4, VAR_3->bpid, VAR_5, VAR_6);

    if (!(VAR_7 & VAR_0) &&
            ((VAR_3->spFill - VAR_6) < VAR_3->spMinBufs))
    {
            VAR_3->spFill += FUNC_1(VAR_4,
                                               VAR_3->bpid,
                                               (struct bm_buffer *)FUNC_3(VAR_3->sp, sizeof(struct bm_buffer) * (VAR_3->spFill)),
                                               VAR_3->spBufsCmd);
    }
    else if (VAR_3->spFill < VAR_6)
        return 0;
    if (!VAR_3->spFill)
        return 0;
    FUNC_4(VAR_5,
           FUNC_3(VAR_3->sp, sizeof(struct bm_buffer) * (VAR_3->spFill - VAR_6)),
           sizeof(struct bm_buffer) * VAR_6);
    VAR_3->spFill -= VAR_6;
    return VAR_6;
}
