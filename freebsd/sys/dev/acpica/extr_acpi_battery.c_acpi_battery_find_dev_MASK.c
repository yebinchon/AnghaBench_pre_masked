
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int * device_t ;
typedef int devclass_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static device_t
FUNC_3(u_int VAR_0)
{
    int VAR_1, VAR_2, VAR_3;
    device_t VAR_4;
    devclass_t VAR_5;

    VAR_4 = ((void*)0);
    VAR_1 = 0;
    VAR_5 = FUNC_0("battery");
    VAR_3 = FUNC_2(VAR_5);
    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
 VAR_4 = FUNC_1(VAR_5, VAR_2);
 if (VAR_4 == ((void*)0))
     continue;
 if (VAR_0 == VAR_1)
     break;
 VAR_1++;
 VAR_4 = ((void*)0);
    }

    return (VAR_4);
}
