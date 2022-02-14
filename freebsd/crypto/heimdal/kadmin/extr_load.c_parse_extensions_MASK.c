
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int len; int * val; } ;
typedef TYPE_1__ HDB_extensions ;
typedef int HDB_extension ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (void*,scalar_t__,int *,int *) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (char*,void*,scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 char* FUNC_9 (char**,char*) ;

__attribute__((used)) static int
FUNC_10(char *VAR_0, HDB_extensions **VAR_1)
{
    char *VAR_2;
    int VAR_3;

    if(FUNC_7(VAR_0, "-") == 0 || *VAR_0 == '\0') {
 *VAR_1 = ((void*)0);
 return 0;
    }
    *VAR_1 = FUNC_1(1, sizeof(**VAR_1));

    VAR_2 = FUNC_9(&VAR_0, ":");

    while (VAR_2) {
 HDB_extension VAR_4;
 ssize_t VAR_5;
 void *VAR_6;

 VAR_5 = FUNC_8(VAR_2);
 VAR_6 = FUNC_5(VAR_5);

 VAR_5 = FUNC_4(VAR_2, VAR_6, VAR_5);
 if (VAR_5 < 0) {
     FUNC_3(VAR_6);
     return -1;
 }

 VAR_3 = FUNC_2(VAR_6, VAR_5, &VAR_4, ((void*)0));
 FUNC_3(VAR_6);
 if (VAR_3)
     return -1;
 VAR_6 = FUNC_6((*VAR_1)->val, ((*VAR_1)->len + 1) * sizeof((*VAR_1)->val[0]));
 if (VAR_6 == ((void*)0))
     FUNC_0();
 (*VAR_1)->val = VAR_6;
 (*VAR_1)->val[(*VAR_1)->len] = VAR_4;
 (*VAR_1)->len++;

 VAR_2 = FUNC_9(&VAR_0, ":");
    }

    return 0;
}
