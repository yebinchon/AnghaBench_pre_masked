
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmm_stat_type {char* desc; scalar_t__ scope; scalar_t__ nelems; scalar_t__ index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct vmm_stat_type** VAR_5 ;

void
FUNC_3(void *VAR_6)
{
 struct vmm_stat_type *VAR_7 = VAR_6;


 if (VAR_7->desc == ((void*)0))
  return;

 if (VAR_7->scope == VAR_2 && !FUNC_2())
  return;

 if (VAR_7->scope == VAR_1 && !FUNC_1())
  return;

 if (VAR_3 + VAR_7->nelems >= VAR_0) {
  FUNC_0("Cannot accommodate vmm stat type \"%s\"!\n", VAR_7->desc);
  return;
 }

 VAR_7->index = VAR_3;
 VAR_3 += VAR_7->nelems;

 VAR_5[VAR_4++] = VAR_7;
}
