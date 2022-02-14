
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_dir {scalar_t__ pos; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct gl_dir *VAR_1 = VAR_0;
 VAR_1->pos = 0;
 FUNC_0(("closedir %p\n", VAR_1));
}
