
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_5__ {void* commandSequence; scalar_t__ extraReg; scalar_t__ actionReg; void* opcode; } ;
typedef TYPE_1__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
typedef int t_FmHc ;
typedef scalar_t__ t_Error ;
typedef int t_DpaaFD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *,int *,void*) ;
 TYPE_1__* FUNC_3 (int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_4 (int *,TYPE_1__*,void*) ;
 int FUNC_5 (int ,scalar_t__,char*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

t_Error FUNC_7(t_Handle VAR_6)
{
    t_FmHc *VAR_7 = (t_FmHc*)VAR_6;
    t_HcFrame *VAR_8;
    t_DpaaFD VAR_9;
    t_Error VAR_10 = VAR_1;
    uint32_t VAR_11;

    FUNC_0(VAR_7);

    VAR_8 = FUNC_3(VAR_7, &VAR_11);
    if (!VAR_8)
        FUNC_5(VAR_4, VAR_0, ("HC Frame object"));
    FUNC_6(VAR_8, 0, sizeof(t_HcFrame));

    VAR_8->opcode = (uint32_t)(VAR_2 | VAR_3);
    VAR_8->actionReg = 0;
    VAR_8->extraReg = 0;
    VAR_8->commandSequence = VAR_11;

    FUNC_1(sizeof(t_HcFrame));

    VAR_10 = FUNC_2(VAR_7, &VAR_9, VAR_11);

    FUNC_4(VAR_7, VAR_8, VAR_11);

    if (VAR_10 != VAR_1)
        FUNC_5(VAR_4, VAR_10, VAR_5);

    return VAR_1;
}
