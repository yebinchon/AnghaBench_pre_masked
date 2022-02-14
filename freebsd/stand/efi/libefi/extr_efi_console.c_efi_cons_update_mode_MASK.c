
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {unsigned int ta_fgcolor; unsigned int ta_bgcolor; } ;
typedef TYPE_2__ teken_attr_t ;
typedef int env ;
typedef int UINTN ;
struct TYPE_16__ {char c; TYPE_2__ a; } ;
struct TYPE_15__ {int (* SetAttribute ) (TYPE_6__*,int ) ;TYPE_1__* Mode; int (* QueryMode ) (TYPE_6__*,int ,int*,int*) ;} ;
struct TYPE_14__ {int tp_row; int tp_col; } ;
struct TYPE_12__ {int Mode; } ;
typedef int EFI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* VAR_5 ;
 TYPE_6__* VAR_6 ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;
 int VAR_10 ;
 int FUNC_4 (char*,int ,char*,int ,int ) ;
 int VAR_11 ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (int *,int *) ;
 TYPE_8__* FUNC_7 (int) ;
 int VAR_12 ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,int,char*,unsigned int) ;
 int FUNC_11 (TYPE_6__*,int ,int*,int*) ;
 int FUNC_12 (TYPE_6__*,int ) ;
 int VAR_13 ;
 TYPE_2__* FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (int *,TYPE_3__*) ;
 int VAR_14 ;
 TYPE_3__ VAR_15 ;

bool
FUNC_16(void)
{
 UINTN VAR_16, VAR_17;
 const teken_attr_t *VAR_18;
 EFI_STATUS VAR_19;
 char VAR_20[8];

 VAR_19 = VAR_6->QueryMode(VAR_6, VAR_6->Mode->Mode, &VAR_16, &VAR_17);
 if (FUNC_0(VAR_19)) {
  VAR_16 = 80;
  VAR_17 = 24;
 }
 VAR_12 = FUNC_8();
 if ((VAR_12 & VAR_3) == 0) {
  if (VAR_5 != ((void*)0)) {
   if (VAR_15.tp_row == VAR_17 && VAR_15.tp_col == VAR_16)
    return (1);
   FUNC_5(VAR_5);
  } else {
   FUNC_14(&VAR_13, &VAR_14, ((void*)0));
  }

  VAR_15.tp_row = VAR_17;
  VAR_15.tp_col = VAR_16;
  VAR_5 = FUNC_7(VAR_17 * VAR_16 * sizeof(*VAR_5));
  if (VAR_5 == ((void*)0))
   return (0);

  FUNC_15(&VAR_13, &VAR_15);
  VAR_18 = FUNC_13(&VAR_13);

  FUNC_10(VAR_20, sizeof(VAR_20), "%d", VAR_18->ta_fgcolor);
  FUNC_4("teken.fg_color", VAR_2, VAR_20, VAR_9,
      VAR_10);
  FUNC_10(VAR_20, sizeof(VAR_20), "%d", VAR_18->ta_bgcolor);
  FUNC_4("teken.bg_color", VAR_2, VAR_20, VAR_9,
      VAR_10);

  for (int VAR_21 = 0; VAR_21 < VAR_17; VAR_21++) {
   for (int VAR_22 = 0; VAR_22 < VAR_16; VAR_22++) {
    VAR_5[VAR_22 + VAR_21 * VAR_15.tp_col].c = ' ';
    VAR_5[VAR_22 + VAR_21 * VAR_15.tp_col].a = *VAR_18;
   }
  }
 } else {
 }

 FUNC_10(VAR_20, sizeof (VAR_20), "%u", (unsigned)VAR_17);
 FUNC_9("LINES", VAR_20, 1);
 FUNC_10(VAR_20, sizeof (VAR_20), "%u", (unsigned)VAR_16);
 FUNC_9("COLUMNS", VAR_20, 1);

 return (1);
}
