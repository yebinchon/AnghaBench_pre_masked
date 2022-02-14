
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int fg; int bg; } ;
struct TYPE_8__ {int fg; int bg; } ;
struct TYPE_10__ {int flags; int saved_xpos; int saved_ypos; void* cur_attr; TYPE_2__ std_color; TYPE_2__ cur_color; TYPE_1__ dflt_rev_color; TYPE_1__ rev_color; TYPE_2__ dflt_std_color; int esc; int attr_mask; } ;
typedef TYPE_3__ term_stat ;
typedef int scr_stat ;
struct TYPE_12__ {int flags; } ;
struct TYPE_11__ {int te_refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (TYPE_3__*,int) ;
 void* FUNC_1 (TYPE_3__*) ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static int
FUNC_2(scr_stat *VAR_7, void **VAR_8, int VAR_9)
{
 term_stat *VAR_10;

 if (*VAR_8 == ((void*)0)) {
  if (VAR_5.flags & VAR_2)
   return VAR_0;
  *VAR_8 = &VAR_5;
 }
 VAR_10 = *VAR_8;

 switch (VAR_9) {
 case 129:
  FUNC_0(VAR_10, sizeof(*VAR_10));
  VAR_10->flags = VAR_2;
  VAR_10->esc = 0;
  VAR_10->saved_xpos = -1;
  VAR_10->saved_ypos = -1;
  VAR_10->attr_mask = VAR_1;

  VAR_10->dflt_std_color.fg = VAR_3 & 0x0f;
  VAR_10->dflt_std_color.bg = (VAR_3 >> 4) & 0x0f;
  VAR_10->dflt_rev_color.fg = VAR_4 & 0x0f;
  VAR_10->dflt_rev_color.bg = (VAR_4 >> 4) & 0x0f;
  VAR_10->std_color = VAR_10->dflt_std_color;
  VAR_10->rev_color = VAR_10->dflt_rev_color;
  VAR_10->cur_color = VAR_10->std_color;
  VAR_10->cur_attr = FUNC_1(VAR_10);
  ++VAR_6.te_refcount;
  break;

 case 128:
  VAR_10->esc = 0;
  VAR_10->saved_xpos = -1;
  VAR_10->saved_ypos = -1;




  VAR_10->cur_color = VAR_10->std_color;
  VAR_10->cur_attr = FUNC_1(VAR_10);
  break;
 }

 return 0;
}
