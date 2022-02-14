
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int b_hdr; } ;
typedef TYPE_1__ arc_buf_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int32_t
FUNC_3(arc_buf_t *VAR_0)
{
 return (FUNC_0(VAR_0) ?
     FUNC_2(VAR_0->b_hdr) : FUNC_1(VAR_0->b_hdr));
}
