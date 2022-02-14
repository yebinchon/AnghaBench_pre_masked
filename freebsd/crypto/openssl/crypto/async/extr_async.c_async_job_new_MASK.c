
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
typedef TYPE_1__ ASYNC_JOB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static ASYNC_JOB *FUNC_2(void)
{
    ASYNC_JOB *VAR_3 = ((void*)0);

    VAR_3 = FUNC_1(sizeof(*VAR_3));
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return ((void*)0);
    }

    VAR_3->status = VAR_1;

    return VAR_3;
}
