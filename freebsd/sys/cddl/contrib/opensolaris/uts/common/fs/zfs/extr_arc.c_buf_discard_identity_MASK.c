
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* dva_word; } ;
struct TYPE_5__ {scalar_t__ b_birth; TYPE_1__ b_dva; } ;
typedef TYPE_2__ arc_buf_hdr_t ;



__attribute__((used)) static void
FUNC_0(arc_buf_hdr_t *VAR_0)
{
 VAR_0->b_dva.dva_word[0] = 0;
 VAR_0->b_dva.dva_word[1] = 0;
 VAR_0->b_birth = 0;
}
