
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t pos_mask; size_t state; int * is_rep; int rc; int ** is_match; } ;
typedef TYPE_1__ lzma_lzma1_encoder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,size_t const,int ,int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_2(lzma_lzma1_encoder *VAR_2, uint32_t VAR_3)
{
 const uint32_t VAR_4 = VAR_3 & VAR_2->pos_mask;
 FUNC_1(&VAR_2->rc, &VAR_2->is_match[VAR_2->state][VAR_4], 1);
 FUNC_1(&VAR_2->rc, &VAR_2->is_rep[VAR_2->state], 0);
 FUNC_0(VAR_2, VAR_4, VAR_1, VAR_0);
}
