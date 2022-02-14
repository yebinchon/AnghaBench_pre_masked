
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int XML_Char ;
struct TYPE_4__ {int * storage; } ;
typedef TYPE_1__ ExtTest ;
typedef int CharData ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,char const*,int,int ) ;
 int FUNC_5 (int ,char const*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_4,
                         ExtTest *VAR_5,
                         const XML_Char *VAR_6,
                         const char *VAR_7, int VAR_8)
{
    CharData VAR_9;

    FUNC_1(&VAR_9);
    VAR_5->storage = &VAR_9;
    FUNC_3(VAR_3, VAR_5);
    FUNC_2(VAR_3, VAR_2);
    if (FUNC_4(VAR_3, VAR_4, (int)FUNC_6(VAR_4),
                                VAR_1) == VAR_0)
        FUNC_5(VAR_3, VAR_7, VAR_8);
    FUNC_0(&VAR_9, VAR_6);
}
