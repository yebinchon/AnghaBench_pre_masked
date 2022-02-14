
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pipe_input; } ;
struct TYPE_5__ {char* prompt_buf; char* prompt; void* percent; } ;
typedef TYPE_1__ MY_OBJ ;
typedef int DIALOG_CALLBACK ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static bool
FUNC_13(DIALOG_CALLBACK * VAR_6)
{
    MY_OBJ *VAR_7 = (MY_OBJ *) VAR_6;
    bool VAR_8;
    bool VAR_9 = VAR_1;
    int VAR_10;
    char VAR_11[VAR_2 + 1];

    if (VAR_4.pipe_input == 0) {
 VAR_10 = -1;
 VAR_9 = VAR_3;
    } else if ((VAR_10 = FUNC_8(VAR_11, VAR_4.pipe_input)) > 0) {

 if (FUNC_7(VAR_11)) {





     if ((VAR_10 = FUNC_8(VAR_11, VAR_4.pipe_input)) > 0) {

  VAR_7->prompt_buf[0] = '\0';
  if (FUNC_1(VAR_11))
      VAR_7->percent = FUNC_0(VAR_11);
  else
      FUNC_11(VAR_7->prompt_buf, VAR_11);


  while ((VAR_10 = FUNC_8(VAR_11, VAR_4.pipe_input)) > 0
         && !FUNC_7(VAR_11)) {
      if (FUNC_12(VAR_7->prompt_buf) + FUNC_12(VAR_11) <
   sizeof(VAR_7->prompt_buf) - 1) {
   FUNC_10(VAR_7->prompt_buf, VAR_11);
      }
  }

  if (VAR_7->prompt != VAR_7->prompt_buf)
      FUNC_6(VAR_7->prompt);
  VAR_7->prompt = VAR_7->prompt_buf;
     }
 } else if (FUNC_1(VAR_11)) {
     VAR_7->percent = FUNC_0(VAR_11);
 }
    } else {
 if (FUNC_4(VAR_4.pipe_input) ||
     (FUNC_5(VAR_4.pipe_input) && VAR_5 != VAR_0)) {
     VAR_9 = VAR_3;
 }
    }

    FUNC_9(VAR_7);
    if (VAR_10 > 0) {
 VAR_8 = VAR_3;
    } else {
 VAR_8 = VAR_1;
 if (VAR_9) {
     FUNC_3(VAR_6);
     FUNC_2(VAR_7);
 }
    }

    return VAR_8;
}
