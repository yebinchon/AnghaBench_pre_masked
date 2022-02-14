
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db_index; void* description; void* term_name; int checksum; } ;
typedef int TERMTYPE ;
typedef TYPE_1__ TERMDATA ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 () ;
 void* FUNC_2 (char const*) ;
 char const* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(int VAR_0, int VAR_1, const char *VAR_2, TERMTYPE *VAR_3)
{
    TERMDATA *VAR_4 = FUNC_1();

    VAR_4->db_index = VAR_0;
    VAR_4->checksum = ((VAR_1 > 1) ? FUNC_0(VAR_3) : 0);
    VAR_4->term_name = FUNC_2(VAR_2);
    VAR_4->description = FUNC_2(FUNC_3(VAR_3));
}
