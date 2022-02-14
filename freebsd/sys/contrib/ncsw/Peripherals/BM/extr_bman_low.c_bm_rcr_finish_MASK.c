
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bm_rcr {scalar_t__ ci; int cursor; int busy; } ;
struct bm_portal {struct bm_rcr rcr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

void FUNC_4(struct bm_portal *VAR_5)
{
    register struct bm_rcr *VAR_6 = &VAR_5->rcr;
    uint8_t VAR_7 = (uint8_t)(FUNC_3(VAR_3) & (VAR_0 - 1));
    uint8_t VAR_8 = (uint8_t)(FUNC_3(VAR_2) & (VAR_0 - 1));
    FUNC_0(!VAR_6->busy);
    if (VAR_7 != FUNC_1(VAR_6->cursor))
        FUNC_2(VAR_4, VAR_1, ("losing uncommitted RCR entries"));
    if (VAR_8 != VAR_6->ci)
        FUNC_2(VAR_4, VAR_1, ("missing existing RCR completions"));
    if (VAR_6->ci != FUNC_1(VAR_6->cursor))
        FUNC_2(VAR_4, VAR_1, ("RCR destroyed unquiesced"));
}
