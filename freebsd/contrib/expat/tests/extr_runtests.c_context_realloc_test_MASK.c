
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_1; int * member_0; } ;
typedef TYPE_1__ ExtOption ;


 int * FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,char const*,int,int ) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_6)
{
    ExtOption VAR_7[] = {
        { FUNC_0("foo"), "<!ELEMENT e EMPTY>"},
        { FUNC_0("bar"), "<e/>" },
        { ((void*)0), ((void*)0) }
    };
    int VAR_8;
    const int VAR_9 = 6;

    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
        VAR_5 = VAR_8;
        FUNC_3(VAR_4, VAR_7);
        FUNC_2(VAR_4, VAR_0);
        FUNC_1(VAR_4, VAR_3);
        if (FUNC_4(VAR_4, VAR_6, (int)FUNC_8(VAR_6),
                                    VAR_2) != VAR_1)
            break;

        FUNC_7();
        FUNC_6();
    }
    if (VAR_8 == 0)
        FUNC_5("Parsing worked despite failing reallocations");
    else if (VAR_8 == VAR_9)
        FUNC_5("Parsing failed even at max reallocation count");
}
