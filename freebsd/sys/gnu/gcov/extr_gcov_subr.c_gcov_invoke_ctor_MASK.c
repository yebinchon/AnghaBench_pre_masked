
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; } ;
typedef TYPE_1__ linker_symval_t ;
typedef void* linker_file_t ;
typedef int c_linker_sym_t ;


 int VAR_0 ;
 int FUNC_0 (void*,char const*,int *) ;
 int FUNC_1 (void*,int ,TYPE_1__*) ;
 int * FUNC_2 (char const*,int ) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, void *VAR_2)
{
 void (*VAR_3)(void);
 c_linker_sym_t VAR_4;
 linker_symval_t VAR_5;
 linker_file_t VAR_6;

 if (FUNC_2(VAR_1, VAR_0) == ((void*)0))
  return (0);
 VAR_6 = VAR_2;
 FUNC_0(VAR_6, VAR_1, &VAR_4);
 FUNC_1(VAR_6, VAR_4, &VAR_5);
 VAR_3 = (void *)VAR_5.value;
 VAR_3();
 return (0);
}
