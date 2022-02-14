
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_7__ {struct TYPE_7__* b_next; } ;
typedef TYPE_2__ arc_buf_t ;
struct TYPE_6__ {TYPE_2__* b_buf; } ;
struct TYPE_8__ {TYPE_1__ b_l1hdr; } ;
typedef TYPE_3__ arc_buf_hdr_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static boolean_t
FUNC_1(arc_buf_hdr_t *VAR_2)
{
 for (arc_buf_t *VAR_3 = VAR_2->b_l1hdr.b_buf; VAR_3 != ((void*)0); VAR_3 = VAR_3->b_next) {
  if (!FUNC_0(VAR_3)) {
   return (VAR_1);
  }
 }
 return (VAR_0);
}
