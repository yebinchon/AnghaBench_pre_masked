
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int Filedes; } ;
struct TYPE_7__ {int caninit; int tabsize; int defaultPalette; void* nocolorvideo; void* labelheight; void* labelwidth; void* numlabels; void* maxcolors; void* maxpairs; int hascolor; int canchange; int initcolor; } ;
struct TYPE_9__ {TYPE_2__* drv; TYPE_1__ info; } ;
struct TYPE_8__ {int (* mode ) (TYPE_3__*,int ,int ) ;} ;
typedef TYPE_3__ TERMINAL_CONTROL_BLOCK ;
typedef TYPE_4__ TERMINAL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 void* VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 scalar_t__ VAR_19 ;
 int * VAR_20 ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(TERMINAL_CONTROL_BLOCK * VAR_21)
{
    TERMINAL *VAR_22;

    FUNC_0();

    VAR_22 = (TERMINAL *) VAR_21;

    VAR_21->info.initcolor = FUNC_2(VAR_8);
    VAR_21->info.canchange = VAR_4;
    VAR_21->info.hascolor = ((FUNC_1(VAR_11) && FUNC_1(VAR_12)
      && (((VAR_20 != ((void*)0))
    && (VAR_18 != ((void*)0)))
          || ((VAR_17 != ((void*)0))
       && (VAR_16 != ((void*)0)))
          || VAR_19)) ? VAR_1 : VAR_0);

    VAR_21->info.caninit = !(VAR_5 && VAR_14);

    VAR_21->info.maxpairs = FUNC_1(VAR_12) ? VAR_12 : 0;
    VAR_21->info.maxcolors = FUNC_1(VAR_11) ? VAR_11 : 0;
    VAR_21->info.numlabels = FUNC_1(VAR_15) ? VAR_15 : 0;
    VAR_21->info.labelwidth = FUNC_1(VAR_10) ? VAR_10 : 0;
    VAR_21->info.labelheight = FUNC_1(VAR_9) ? VAR_9 : 0;
    VAR_21->info.nocolorvideo = FUNC_1(VAR_13) ? VAR_13
 : 0;
    VAR_21->info.tabsize = FUNC_1(VAR_7) ? (int) VAR_7 : 8;

    VAR_21->info.defaultPalette = VAR_6 ? VAR_3 : VAR_2;







    if (FUNC_3(VAR_22->Filedes)) {
 VAR_21->drv->mode(VAR_21, VAR_1, VAR_1);
    }
}
