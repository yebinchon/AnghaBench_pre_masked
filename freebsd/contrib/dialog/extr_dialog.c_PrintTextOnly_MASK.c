
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int eOptions ;
struct TYPE_2__ {int text_height; int text_width; int output; int text_only; int input; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (char**) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int *,char*,int*,int*,int,int) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,int) ;
 int FUNC_9 (char**,int) ;


 int FUNC_10 (char**,int*) ;
 int VAR_5 ;
 char* FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(char **VAR_6, int *VAR_7, eOptions VAR_8)
{

    char *VAR_9;
    int VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14 = FUNC_2(VAR_6 + *VAR_7);

    if (VAR_2 <= 0 && VAR_0 <= 0)
 FUNC_6(FUNC_7(VAR_4.input), &VAR_2, &VAR_0);

    VAR_9 = FUNC_11(FUNC_10(VAR_6, VAR_7));
    FUNC_0(VAR_6, *VAR_7);

    if (VAR_14 >= 1) {
 VAR_14 = FUNC_1(VAR_14, 3);
 VAR_10 = FUNC_9(VAR_6, *VAR_7 + 1);
 if (VAR_14 >= 2)
     VAR_11 = FUNC_9(VAR_6, *VAR_7 + 2);
 *VAR_7 += VAR_14 - 1;
    }

    FUNC_5(VAR_9);
    FUNC_3(((void*)0), VAR_9, &VAR_12, &VAR_13, VAR_10, VAR_11);

    switch (VAR_8) {
    case 129:
 VAR_4.text_only = VAR_3;
 FUNC_4(VAR_5, VAR_9, VAR_12, VAR_13);
 VAR_4.text_only = VAR_1;
 break;
    case 128:
 FUNC_8(VAR_4.output, "%d %d\n",
  VAR_4.text_height,
  VAR_4.text_width);
 break;
    default:
 break;
    }
}
