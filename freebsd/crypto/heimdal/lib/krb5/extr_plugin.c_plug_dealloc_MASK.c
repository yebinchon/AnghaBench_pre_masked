
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plugin2 {scalar_t__ dsohandle; int names; int path; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
    struct plugin2 *VAR_1 = VAR_0;
    FUNC_1(VAR_1->path);
    FUNC_1(VAR_1->names);
    if (VAR_1->dsohandle)
 FUNC_0(VAR_1->dsohandle);
}
