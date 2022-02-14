
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buf; } ;
struct TYPE_7__ {scalar_t__ cmd; TYPE_1__ str; } ;
typedef TYPE_2__ XmapVal ;
struct TYPE_8__ {int* buf; int len; } ;
typedef scalar_t__ KEYCMD ;
typedef int Char ;
typedef TYPE_3__ CStr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;



 scalar_t__ VAR_10 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(KEYCMD *VAR_11, Char *VAR_12)
{
    KEYCMD VAR_13 = 0;
    int VAR_14;

    while (VAR_13 == 0 || VAR_13 == VAR_4) {
 if ((VAR_14 = FUNC_1(VAR_12)) != 1) {
     return VAR_14;
 }
 if (VAR_7) {
     VAR_7 = 0;
     *VAR_12 |= VAR_6;
 }

 VAR_13 = FUNC_0(*VAR_12);
 if (VAR_13 == VAR_4) {
     XmapVal VAR_15;
     CStr VAR_16;
     VAR_16.buf = VAR_12;
     VAR_16.len = 1;
     switch (FUNC_2(&VAR_16, &VAR_15)) {
     case 130:
  VAR_13 = VAR_15.cmd;
  break;
     case 128:
  FUNC_3(VAR_15.str.buf);
  break;
     case 129:
  FUNC_4(VAR_15.str.buf);
  break;
     default:
  FUNC_5();
  break;
     }
 }
 if (!VAR_0)
     VAR_2 = VAR_1;
    }
    *VAR_11 = VAR_13;
    return VAR_8;
}
