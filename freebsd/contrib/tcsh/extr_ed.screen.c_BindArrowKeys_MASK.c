
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ cmd; } ;
struct TYPE_9__ {size_t key; scalar_t__ type; TYPE_6__ fun; } ;
struct TYPE_8__ {char* str; } ;
struct TYPE_7__ {int buf; int len; } ;
typedef scalar_t__ KEYCMD ;
typedef TYPE_1__ CStr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_6__*,scalar_t__) ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_1 (scalar_t__*,TYPE_1__*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_3__* VAR_11 ;
 int FUNC_4 (char*) ;
 TYPE_2__* VAR_12 ;

void
FUNC_5(void)
{
    KEYCMD *VAR_13, *VAR_14;
    int VAR_15, VAR_16;
    char *VAR_17;
    CStr VAR_18;

    if (!VAR_7)
 return;
    VAR_13 = VAR_8 ? VAR_1 : VAR_3;
    VAR_14 = VAR_8 ? VAR_4 : VAR_2;

    FUNC_2();

    for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
 VAR_17 = VAR_12[VAR_11[VAR_15].key].str;
 if (VAR_17 && *VAR_17) {
     VAR_16 = (unsigned char) *VAR_17;
     VAR_18.buf = FUNC_4(VAR_17);
     VAR_18.len = FUNC_3(VAR_18.buf);
     if (VAR_11[VAR_15].type == VAR_10) {
  FUNC_1(VAR_13, &VAR_18);
     }
     else {
  if (VAR_17[1] && (VAR_14[VAR_16] == VAR_13[VAR_16] || VAR_13[VAR_16] == VAR_6)) {
      FUNC_0(&VAR_18, &VAR_11[VAR_15].fun, VAR_11[VAR_15].type);
      VAR_13[VAR_16] = VAR_6;
  }
  else if (VAR_13[VAR_16] == VAR_5) {
      FUNC_1(VAR_13, &VAR_18);
      if (VAR_11[VAR_15].type == VAR_9)
   VAR_13[VAR_16] = VAR_11[VAR_15].fun.cmd;
      else
   FUNC_0(&VAR_18, &VAR_11[VAR_15].fun, VAR_11[VAR_15].type);
  }
     }
 }
    }
}
