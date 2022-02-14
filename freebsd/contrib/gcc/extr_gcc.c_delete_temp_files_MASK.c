
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_file {int name; struct temp_file* next; } ;


 struct temp_file* VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct temp_file *VAR_1;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    FUNC_0 (VAR_1->name);
  VAR_0 = 0;
}
