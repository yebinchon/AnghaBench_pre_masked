
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char** Strings; int term_names; } ;
struct TYPE_4__ {TYPE_3__ tterm; scalar_t__ startline; } ;
typedef TYPE_1__ ENTRY ;


 char VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 unsigned int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*) ;
 long FUNC_8 (char*,char**,int ) ;

__attribute__((used)) static void
FUNC_9(ENTRY * VAR_6)
{
    unsigned VAR_7;
    int VAR_8;
    char *VAR_9, *VAR_10, *VAR_11;
    char VAR_12[VAR_1];





    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
 VAR_9 = VAR_6->tterm.Strings[VAR_7];
 if (FUNC_0(VAR_9)
     && FUNC_6(VAR_9, VAR_0) != 0) {
     VAR_10 = VAR_12;
     VAR_11 = VAR_9;
     while ((VAR_8 = *VAR_11++) != 0) {
  *VAR_10++ = (char) VAR_8;
  if (VAR_8 == '\\') {
      *VAR_10++ = *VAR_11++;
  } else if ((VAR_8 == '%')
      && (*VAR_11 == VAR_0)) {
      char *VAR_13 = 0;
      long VAR_14 = FUNC_8(VAR_11 + 1, &VAR_13, 0);
      if (VAR_13 != 0
   && *VAR_13 == VAR_2
   && VAR_14 > 0
   && VAR_14 != '\\'
   && VAR_14 < 127
   && FUNC_5((int) VAR_14)) {
   *VAR_10++ = VAR_4;
   *VAR_10++ = (char) VAR_14;
   *VAR_10++ = VAR_4;
   VAR_11 = (VAR_13 + 1);
      }
  }
     }
     *VAR_10 = 0;
     if (FUNC_7(VAR_12) < FUNC_7(VAR_9))
  FUNC_1(VAR_9, VAR_12, FUNC_7(VAR_9) + 1);
 }
    }

    FUNC_3(FUNC_2(VAR_6->tterm.term_names));
    VAR_5 = (int) VAR_6->startline;
    FUNC_4(&VAR_6->tterm);
}
