
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bm_rcr_entry {int dummy; } ;
struct bm_rcr {int vbit; struct bm_rcr_entry* cursor; } ;


 int VAR_0 ;
 struct bm_rcr_entry* FUNC_0 (struct bm_rcr_entry*) ;

__attribute__((used)) static __inline__ void FUNC_1(struct bm_rcr *VAR_1)
{



    struct bm_rcr_entry *VAR_2 = VAR_1->cursor + 1;
    VAR_1->cursor = FUNC_0(VAR_2);
    if (VAR_2 != VAR_1->cursor)
        VAR_1->vbit ^= VAR_0;
}
