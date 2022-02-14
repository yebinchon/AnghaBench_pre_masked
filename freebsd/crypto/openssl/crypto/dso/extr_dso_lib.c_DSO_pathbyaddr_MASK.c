
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* pathbyaddr ) (void*,char*,int) ;} ;
typedef TYPE_1__ DSO_METHOD ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (void*,char*,int) ;

int FUNC_3(void *VAR_3, char *VAR_4, int VAR_5)
{
    DSO_METHOD *VAR_6 = VAR_2;
    if (VAR_6 == ((void*)0))
        VAR_6 = FUNC_0();
    if (VAR_6->pathbyaddr == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return -1;
    }
    return (*VAR_6->pathbyaddr) (VAR_3, VAR_4, VAR_5);
}
