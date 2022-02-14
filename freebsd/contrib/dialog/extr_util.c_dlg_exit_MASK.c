
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int table ;
struct TYPE_2__ {scalar_t__ input; scalar_t__ pipe_input; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 char* FUNC_6 (char const*) ;
 scalar_t__ VAR_3 ;
 long FUNC_7 (char*,char**,int ) ;

void
FUNC_8(int VAR_4)
{

    static const struct {
 int code;
 const char *name;
    } VAR_5[] = {
 { 134, "DIALOG_CANCEL" },
 { 133, "DIALOG_ERROR" },
 { 132, "DIALOG_ESC" },
 { 131, "DIALOG_EXTRA" },
 { 130, "DIALOG_HELP" },
 { 128, "DIALOG_OK" },
 { 129, "DIALOG_ITEM_HELP" },
    };


    unsigned VAR_6;
    char *VAR_7;
    char *VAR_8;
    long VAR_9;
    bool VAR_10 = VAR_0;

  retry:
    for (VAR_6 = 0; VAR_6 < sizeof(VAR_5) / sizeof(VAR_5[0]); VAR_6++) {
 if (VAR_5[VAR_6].code == VAR_4) {
     if ((VAR_7 = FUNC_6(VAR_5[VAR_6].name)) != 0) {
  VAR_9 = FUNC_7(VAR_7, &VAR_8, 0);
  if (VAR_8 != 0 && VAR_8 != VAR_7 && *VAR_8 == '\0') {
      VAR_4 = (int) VAR_9;
      VAR_10 = VAR_1;
  }
     }
     break;
 }
    }






    if (VAR_4 == 129 && !VAR_10) {
 VAR_4 = 130;
 goto retry;
    }
    if (VAR_2.input == VAR_3) {
 FUNC_4(VAR_4);
    } else {




 if (VAR_2.input) {
     FUNC_5(VAR_2.input);
     VAR_2.input = 0;
 }
 if (VAR_2.pipe_input) {
     if (VAR_2.pipe_input != VAR_3) {
  FUNC_5(VAR_2.pipe_input);
  VAR_2.pipe_input = 0;
     }
 }
 FUNC_1(VAR_4);
    }
}
