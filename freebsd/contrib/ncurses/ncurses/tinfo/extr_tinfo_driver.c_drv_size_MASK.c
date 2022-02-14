
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int use_env; int use_tioctl; } ;
struct TYPE_8__ {int _use_env; int _use_tioctl; scalar_t__ _filtered; } ;
struct TYPE_7__ {int Filedes; } ;
struct TYPE_6__ {TYPE_3__* csp; } ;
typedef TYPE_1__ TERMINAL_CONTROL_BLOCK ;
typedef TYPE_2__ TERMINAL ;
typedef int STRUCT_WINSIZE ;
typedef TYPE_3__ SCREEN ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 TYPE_5__ VAR_4 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int*) ;
 short VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 short VAR_7 ;

__attribute__((used)) static int
FUNC_9(TERMINAL_CONTROL_BLOCK * VAR_8, int *VAR_9, int *VAR_10)
{
    SCREEN *VAR_11;
    bool VAR_12 = VAR_3;
    bool VAR_13 = VAR_3;

    FUNC_0();
    VAR_11 = VAR_8->csp;

    if (VAR_11) {
 VAR_12 = VAR_11->_use_env;
 VAR_13 = VAR_11->_use_tioctl;
    } else {
 VAR_12 = VAR_4.use_env;
 VAR_13 = VAR_4.use_tioctl;
    }


    FUNC_1(("screen size: terminfo lines = %d columns = %d", VAR_7, VAR_5));

    *VAR_9 = (int) VAR_7;
    *VAR_10 = (int) VAR_5;

    if (VAR_12 || VAR_13) {
 int VAR_14;
 if (VAR_12) {
     if (VAR_13) {



  if ((VAR_11 == 0 || !VAR_11->_filtered) && FUNC_4("LINES") > 0) {
      FUNC_5("LINES", *VAR_9);
  }
  if (FUNC_4("COLUMNS") > 0) {
      FUNC_5("COLUMNS", *VAR_10);
  }
     }







     if ((VAR_14 = FUNC_4("LINES")) > 0) {
  *VAR_9 = VAR_14;
  FUNC_1(("screen size: environment LINES = %d", *VAR_9));
     }
     if ((VAR_14 = FUNC_4("COLUMNS")) > 0) {
  *VAR_10 = VAR_14;
  FUNC_1(("screen size: environment COLUMNS = %d", *VAR_10));
     }
 }


 if (*VAR_9 <= 0) {
     *VAR_9 = (int) VAR_7;
 }
 if (*VAR_10 <= 0) {
     *VAR_10 = (int) VAR_5;
 }


 if (*VAR_9 <= 0) {
     *VAR_9 = 24;
 }
 if (*VAR_10 <= 0) {
     *VAR_10 = 80;
 }





 VAR_7 = (short) (*VAR_9);
 VAR_5 = (short) (*VAR_10);
    }

    FUNC_1(("screen size is %dx%d", *VAR_9, *VAR_10));
    return VAR_2;
}
