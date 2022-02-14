
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; void* height; void* base; } ;
struct TYPE_8__ {int sc; TYPE_2__ curs_attr; TYPE_1__* rndr; void* font_size; TYPE_2__ base_curs_attr; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_6__ {int (* set_cursor ) (TYPE_3__*,void*,void*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*,void*) ;
 int FUNC_3 (TYPE_3__*,void*,void*,int) ;

void
FUNC_4(scr_stat *VAR_3)
{
    VAR_3->curs_attr = VAR_3->base_curs_attr;
    if (VAR_3->curs_attr.flags & VAR_2) {

 VAR_3->curs_attr.flags = VAR_1;
 VAR_3->curs_attr.base = VAR_3->curs_attr.height = 0;
    } else if (VAR_3->curs_attr.flags & VAR_1) {
 VAR_3->curs_attr.base = FUNC_2(VAR_3->base_curs_attr.base,
      VAR_3->font_size - 1);
 VAR_3->curs_attr.height = FUNC_2(VAR_3->base_curs_attr.height,
        VAR_3->font_size - VAR_3->curs_attr.base);
    } else {
 VAR_3->curs_attr.base = 0;
 VAR_3->curs_attr.height = VAR_3->font_size;
    }


    FUNC_0(VAR_3->sc);
    (*VAR_3->rndr->set_cursor)(VAR_3, VAR_3->curs_attr.base, VAR_3->curs_attr.height,
        VAR_3->curs_attr.flags & VAR_0);
    FUNC_1(VAR_3->sc);
}
