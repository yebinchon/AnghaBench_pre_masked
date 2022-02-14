
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_11__ {int p_BmPortalLow; } ;
typedef TYPE_4__ t_BmPortal ;
struct TYPE_10__ {TYPE_2__* bufs; } ;
struct bm_mc_result {int verb; TYPE_3__ acquire; } ;
struct TYPE_8__ {int bpid; } ;
struct bm_mc_command {TYPE_1__ acquire; } ;
struct bm_buffer {int bpid; int lo; int hi; } ;
struct TYPE_9__ {int lo; int hi; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (int ,int) ;
 struct bm_mc_result* FUNC_5 (int ) ;
 struct bm_mc_command* FUNC_6 (int ) ;

uint8_t FUNC_7(t_Handle VAR_4,
                        uint8_t VAR_5,
                        struct bm_buffer *VAR_6,
                        uint8_t VAR_7)
{
    t_BmPortal *VAR_8 = (t_BmPortal *)VAR_4;
    struct bm_mc_command *VAR_9;
    struct bm_mc_result *VAR_10;
    uint8_t VAR_11 = 0;

    FUNC_3(VAR_8, VAR_3, 0);
    FUNC_1(VAR_8);
    VAR_9 = FUNC_6(VAR_8->p_BmPortalLow);
    VAR_9->acquire.bpid = VAR_5;
    FUNC_4(VAR_8->p_BmPortalLow,
                 (uint8_t)(VAR_1 |
                           (VAR_7 & VAR_0)));
    while (!(VAR_10 = FUNC_5(VAR_8->p_BmPortalLow))) ;
    VAR_11 = VAR_7 = (uint8_t)(VAR_10->verb & VAR_2);
    FUNC_0(VAR_7 <= 8);
    while (VAR_7--) {
        VAR_6[VAR_7].bpid = VAR_5;
        VAR_6[VAR_7].hi = VAR_10->acquire.bufs[VAR_7].hi;
        VAR_6[VAR_7].lo = VAR_10->acquire.bufs[VAR_7].lo;
    }
    FUNC_2(VAR_8);
    return VAR_11;
}
