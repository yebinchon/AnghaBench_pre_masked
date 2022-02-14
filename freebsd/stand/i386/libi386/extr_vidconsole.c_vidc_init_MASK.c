
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int ta_fgcolor; int ta_bgcolor; } ;
typedef TYPE_1__ teken_attr_t ;
typedef int env ;
struct TYPE_9__ {char c; TYPE_1__ a; } ;
struct TYPE_8__ {int tp_row; int tp_col; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_5__* VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*,int ,char*,int ,int ) ;
 TYPE_5__* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int,char*,int) ;
 int VAR_14 ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int VAR_15 ;
 TYPE_2__ VAR_16 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int) ;
 int * VAR_17 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_13(int VAR_20)
{
 const teken_attr_t *VAR_21;
 int VAR_22;
 char VAR_23[8];

 if (VAR_19 && VAR_20 == 0)
  return (0);

 VAR_19 = 1;






 if (FUNC_9(VAR_10, VAR_6) & VAR_7)
  VAR_17 = (uint16_t *)FUNC_0(VAR_11);
 else
  VAR_17 = (uint16_t *)FUNC_0(VAR_8 + VAR_9);


        VAR_22 = FUNC_8(VAR_10, VAR_5);
        VAR_22 &= ~VAR_3;
        VAR_22 &= ~VAR_4;
        FUNC_10(VAR_10, VAR_5, VAR_22);

 VAR_16.tp_row = VAR_2;
 VAR_16.tp_col = VAR_1;
 VAR_12 = FUNC_2(VAR_16.tp_row * VAR_16.tp_col * sizeof(*VAR_12));
 if (VAR_12 == ((void*)0))
  return (1);

 FUNC_4(VAR_23, sizeof (VAR_23), "%u", VAR_16.tp_row);
 FUNC_3("LINES", VAR_23, 1);
 FUNC_4(VAR_23, sizeof (VAR_23), "%u", VAR_16.tp_col);
 FUNC_3("COLUMNS", VAR_23, 1);

 FUNC_6(&VAR_14, &VAR_15, ((void*)0));
 FUNC_7(&VAR_14, &VAR_16);
 VAR_21 = FUNC_5(&VAR_14);

 FUNC_4(VAR_23, sizeof(VAR_23), "%d", VAR_21->ta_fgcolor);
 FUNC_1("teken.fg_color", VAR_0, VAR_23, VAR_18,
     VAR_13);
 FUNC_4(VAR_23, sizeof(VAR_23), "%d", VAR_21->ta_bgcolor);
 FUNC_1("teken.bg_color", VAR_0, VAR_23, VAR_18,
     VAR_13);

 for (int VAR_24 = 0; VAR_24 < VAR_16.tp_row; VAR_24++)
  for (int VAR_25 = 0; VAR_25 < VAR_16.tp_col; VAR_25++) {
   VAR_12[VAR_25 + VAR_24 * VAR_16.tp_col].c = ' ';
   VAR_12[VAR_25 + VAR_24 * VAR_16.tp_col].a = *VAR_21;
  }

 for (int VAR_26 = 0; VAR_26 < 10 && FUNC_12(); VAR_26++)
  (void) FUNC_11();

 return (0);
}
