
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {int MessageId; } ;
typedef int FILE ;
typedef int BOOLEAN ;
typedef TYPE_1__ ASL_ERROR_MSG ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_3 (
    FILE *VAR_1,
    ASL_ERROR_MSG *VAR_2)
{
    UINT32 VAR_3 = 0;
    BOOLEAN VAR_4 = VAR_0;
    const char *VAR_5;


    VAR_5 = FUNC_0 (VAR_2->MessageId);

    FUNC_2 (VAR_1, "    %s%s", VAR_5, "\n    ");
    (void) FUNC_1 (VAR_1, VAR_2, &VAR_4, &VAR_3);
    FUNC_2 (VAR_1, "\n");
}
