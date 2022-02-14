
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct section {scalar_t__ type; int scn; } ;
struct readelf {struct section* sl; } ;
struct TYPE_4__ {int st_value; } ;
typedef TYPE_1__ GElf_Sym ;
typedef int Elf_Data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int *,int,TYPE_1__*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static uint64_t
FUNC_5(struct readelf *VAR_2, int VAR_3, int VAR_4)
{
 struct section *VAR_5;
 GElf_Sym VAR_6;
 Elf_Data *VAR_7;
 int VAR_8;

 VAR_5 = &VAR_2->sl[VAR_3];
 if (VAR_5->type != VAR_1 && VAR_5->type != VAR_0)
  return (0);
 (void) FUNC_1();
 if ((VAR_7 = FUNC_2(VAR_5->scn, ((void*)0))) == ((void*)0)) {
  VAR_8 = FUNC_1();
  if (VAR_8 != 0)
   FUNC_4("elf_getdata failed: %s", FUNC_0(VAR_8));
  return (0);
 }
 if (FUNC_3(VAR_7, VAR_4, &VAR_6) != &VAR_6)
  return (0);

 return (VAR_6.st_value);
}
