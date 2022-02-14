
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_BmPortalLow; } ;
typedef TYPE_1__ t_BmPortal ;
struct bm_rcr_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 struct bm_rcr_entry* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static struct bm_rcr_entry *FUNC_6(t_BmPortal *VAR_2)
{
    struct bm_rcr_entry *VAR_3;

    FUNC_1(VAR_2);
    if (FUNC_3((VAR_2)->p_BmPortalLow) < VAR_1)
        FUNC_0(VAR_2, VAR_0);
    VAR_3 = FUNC_4((VAR_2)->p_BmPortalLow);
    if (!VAR_3) {
        FUNC_5(VAR_2, 1);
        FUNC_2(VAR_2);
    }
    return VAR_3;
}
