
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fg; int bg; } ;
struct TYPE_7__ {int fg; int bg; } ;
struct TYPE_9__ {int cur_attr; TYPE_2__ std_color; TYPE_2__ cur_color; TYPE_1__ dflt_rev_color; TYPE_1__ rev_color; TYPE_2__ dflt_std_color; } ;
typedef TYPE_3__ term_stat ;
struct TYPE_10__ {TYPE_3__* ts; } ;
typedef TYPE_4__ scr_stat ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(scr_stat *VAR_0, int VAR_1, int VAR_2)
{
 term_stat *VAR_3 = VAR_0->ts;

 VAR_3->dflt_std_color.fg = VAR_1 & 0x0f;
 VAR_3->dflt_std_color.bg = (VAR_1 >> 4) & 0x0f;
 VAR_3->dflt_rev_color.fg = VAR_2 & 0x0f;
 VAR_3->dflt_rev_color.bg = (VAR_2 >> 4) & 0x0f;
 VAR_3->std_color = VAR_3->dflt_std_color;
 VAR_3->rev_color = VAR_3->dflt_rev_color;
 VAR_3->cur_color = VAR_3->std_color;
 VAR_3->cur_attr = FUNC_0(VAR_3);
}
