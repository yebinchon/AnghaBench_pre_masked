
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int args; scalar_t__* argtags; int name; } ;
typedef TYPE_1__ bucket ;
struct TYPE_9__ {int args; scalar_t__* argtags; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char**,scalar_t__) ;
 char* FUNC_3 (int*) ;
 int* VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 TYPE_1__* FUNC_7 () ;
 TYPE_1__* FUNC_8 () ;
 char* FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 () ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_11 () ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_12 (TYPE_1__*,char*,int) ;
 TYPE_1__** VAR_7 ;
 TYPE_3__** VAR_8 ;
 void* VAR_9 ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int,int ) ;

__attribute__((used)) static void
FUNC_16(void)
{
    int VAR_10;
    bucket *VAR_11;
    int VAR_12 = VAR_3;





    VAR_10 = *VAR_1;
    if (VAR_10 == '\'' || VAR_10 == '"')
 VAR_11 = FUNC_7();
    else
 VAR_11 = FUNC_8();

    VAR_10 = FUNC_11();
    VAR_9 = VAR_3;
    if (VAR_10 == ':')
    {
 FUNC_4();
 FUNC_13(VAR_11, VAR_12);



 ++VAR_1;
 return;
    }

    if (VAR_2)
 FUNC_10();
    VAR_2 = 0;
    if (++VAR_5 > VAR_4)
 FUNC_5();
    VAR_7[VAR_5 - 1] = VAR_11;
}
