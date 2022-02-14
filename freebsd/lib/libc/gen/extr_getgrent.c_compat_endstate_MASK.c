
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compat_state {void* name; int * fp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct compat_state *VAR_1;

 if (VAR_0 == ((void*)0))
  return;
 VAR_1 = (struct compat_state *)VAR_0;
 FUNC_1(VAR_1->name);
 if (VAR_1->fp != ((void*)0))
  FUNC_0(VAR_1->fp);
 FUNC_1(VAR_0);
}
