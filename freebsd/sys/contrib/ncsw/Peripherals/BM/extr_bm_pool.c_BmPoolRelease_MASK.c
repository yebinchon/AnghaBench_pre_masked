
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int t_Handle ;
typedef scalar_t__ t_Error ;
struct TYPE_3__ {int flags; int spFill; int spMaxBufs; int spBufsCmd; int sp; int bpid; } ;
typedef TYPE_1__ t_BmPool ;
struct bm_buffer {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,struct bm_buffer*,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__,struct bm_buffer*,int) ;

__attribute__((used)) static t_Error FUNC_5(t_BmPool *VAR_4,
                             t_Handle VAR_5,
                             struct bm_buffer *VAR_6,
                             uint8_t VAR_7,
                             uint32_t VAR_8)
{
    FUNC_0(VAR_7 && (VAR_7 <= 8));
    if (VAR_4->flags & VAR_0)
        return FUNC_2(VAR_2);


    if (!(VAR_4->flags & VAR_1))
        return FUNC_1(VAR_5, VAR_4->bpid, VAR_6, VAR_7, VAR_8);
    while (VAR_7)
    {

        if ((VAR_4->spFill + VAR_7) <= VAR_4->spMaxBufs)
        {
            FUNC_4(FUNC_3(VAR_4->sp, sizeof(struct bm_buffer) * (VAR_4->spFill)),
                   VAR_6,
                   sizeof(struct bm_buffer) * VAR_7);
            VAR_4->spFill += VAR_7;
            VAR_7 = 0;
        }
        else

        {
            t_Error VAR_9 = FUNC_1(VAR_5,
                                          VAR_4->bpid,
                                          (struct bm_buffer *)FUNC_3(VAR_4->sp, sizeof(struct bm_buffer) * (VAR_4->spFill - VAR_4->spBufsCmd)),
                                          VAR_4->spBufsCmd,
                                          VAR_8);
            if (VAR_9)
                return (VAR_7 ? VAR_9 : VAR_3);
            VAR_4->spFill -= VAR_4->spBufsCmd;
        }
    }

    return VAR_3;
}
