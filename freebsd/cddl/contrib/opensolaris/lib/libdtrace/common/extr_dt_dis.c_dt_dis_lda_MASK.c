
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int dtrace_difo_t ;
typedef int dif_instr_t ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int const*,int,int ) ;
 int FUNC_5 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_6(const dtrace_difo_t *VAR_0, const char *VAR_1, dif_instr_t VAR_2, FILE *VAR_3)
{
 uint_t VAR_4 = FUNC_0(VAR_2);
 const char *VAR_5;

 (void) FUNC_5(VAR_3, "%-4s DT_VAR(%u), %%r%u, %%r%u", VAR_1,
     VAR_4, FUNC_1(VAR_2), FUNC_2(VAR_2));

 if ((VAR_5 = FUNC_4(VAR_0, VAR_4, FUNC_3(VAR_1))) != ((void*)0))
  (void) FUNC_5(VAR_3, "\t\t! DT_VAR(%u) = \"%s\"", VAR_4, VAR_5);
}
