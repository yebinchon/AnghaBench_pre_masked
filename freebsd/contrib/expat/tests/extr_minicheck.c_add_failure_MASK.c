
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nfailures; } ;
typedef TYPE_1__ SRunner ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int,char*) ;

__attribute__((used)) static void
FUNC_1(SRunner *VAR_4, int VAR_5)
{
    VAR_4->nfailures++;
    if (VAR_5 >= VAR_0) {
        FUNC_0("%s:%d: %s\n", VAR_1,
               VAR_3, VAR_2);
    }
}
