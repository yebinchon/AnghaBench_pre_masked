
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int * name; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(struct pthread *VAR_0, const char *VAR_1)
{

 FUNC_0(VAR_0->name);
 VAR_0->name = VAR_1 != ((void*)0) ? FUNC_1(VAR_1) : ((void*)0);
}
