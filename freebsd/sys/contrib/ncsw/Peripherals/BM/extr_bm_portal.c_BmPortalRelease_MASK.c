
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
typedef scalar_t__ t_Error ;
typedef int t_BmPortal ;
struct bm_rcr_entry {size_t bpid; TYPE_1__* bufs; } ;
struct bm_buffer {int lo; int hi; } ;
struct TYPE_2__ {int lo; int hi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,size_t) ;
 struct bm_rcr_entry* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,struct bm_rcr_entry**,int) ;

t_Error FUNC_6(t_Handle VAR_4,
                        uint8_t VAR_5,
                        struct bm_buffer *VAR_6,
                        uint8_t VAR_7,
                        uint32_t VAR_8)
{
    t_BmPortal *VAR_9 = (t_BmPortal *)VAR_4;
    struct bm_rcr_entry *VAR_10;
    uint8_t VAR_11;

    FUNC_2(VAR_9, VAR_2);

    VAR_10 = FUNC_4(VAR_9);
    if (!VAR_10) {
        if (VAR_8 & VAR_0) {
            t_Error VAR_12 = FUNC_5(VAR_9, &VAR_10, VAR_8);
            if (VAR_12)
                return VAR_12;
        } else
            return FUNC_1(VAR_1);
        FUNC_0(VAR_10 != ((void*)0));
    }
    VAR_10->bpid = VAR_5;
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
        VAR_10->bufs[VAR_11].hi = VAR_6[VAR_11].hi;
        VAR_10->bufs[VAR_11].lo = VAR_6[VAR_11].lo;
    }





    FUNC_3(VAR_9, VAR_8, VAR_7);
    return VAR_3;
}
