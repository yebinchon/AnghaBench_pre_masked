
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spec_list {scalar_t__* ptr_spec; struct spec_list* next; } ;
struct compiler {scalar_t__ spec; } ;


 struct compiler* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct spec_list* VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct compiler *VAR_3;
  struct spec_list *VAR_4;

  for (VAR_3 = VAR_0; VAR_3->spec; VAR_3++)
    FUNC_0 (VAR_3->spec);


  for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
    FUNC_0 (*VAR_4->ptr_spec);

  FUNC_0 (VAR_1);
}
