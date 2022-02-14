
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_3__ {int dtdo_strlen; char* dtdo_strtab; } ;
typedef TYPE_1__ dtrace_difo_t ;
typedef int dif_instr_t ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_3(const dtrace_difo_t *VAR_0, const char *VAR_1, dif_instr_t VAR_2, FILE *VAR_3)
{
 uint_t VAR_4 = FUNC_1(VAR_2);

 (void) FUNC_2(VAR_3, "%-4s DT_STRING[%u], %%r%u", VAR_1,
     VAR_4, FUNC_0(VAR_2));

 if (VAR_4 < VAR_0->dtdo_strlen)
  (void) FUNC_2(VAR_3, "\t\t! \"%s\"", VAR_0->dtdo_strtab + VAR_4);
}
