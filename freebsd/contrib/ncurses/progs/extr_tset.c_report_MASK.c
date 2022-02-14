
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* c_cc; } ;
struct TYPE_3__ {unsigned int* c_cc; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*,...) ;
 char* VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_4, int VAR_5, unsigned VAR_6)
{
    unsigned VAR_7, VAR_8;
    char *VAR_9;

    VAR_8 = VAR_1.c_cc[VAR_5];
    VAR_7 = VAR_2.c_cc[VAR_5];

    if (VAR_7 == VAR_8 && VAR_7 == VAR_6)
 return;

    (void) FUNC_2(VAR_3, "%s %s ", VAR_4, VAR_7 == VAR_8 ? "is" : "set to");

    if (FUNC_0(VAR_8))
 (void) FUNC_2(VAR_3, "undef.\n");




    else if (VAR_8 == 0177)
 (void) FUNC_2(VAR_3, "delete.\n");
    else if ((VAR_9 = VAR_0) != 0
      && VAR_8 == (unsigned char) VAR_9[0]
      && VAR_9[1] == '\0')
 (void) FUNC_2(VAR_3, "backspace.\n");
    else if (VAR_8 < 040) {
 VAR_8 ^= 0100;
 (void) FUNC_2(VAR_3, "control-%c (^%c).\n", FUNC_1(VAR_8), FUNC_1(VAR_8));
    } else
 (void) FUNC_2(VAR_3, "%c.\n", FUNC_1(VAR_8));
}
