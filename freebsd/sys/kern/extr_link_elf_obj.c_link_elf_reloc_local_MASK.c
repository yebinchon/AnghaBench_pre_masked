
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int linker_file_t ;
typedef TYPE_4__* elf_file_t ;
struct TYPE_16__ {int r_info; } ;
struct TYPE_15__ {int st_info; } ;
struct TYPE_13__ {int filename; } ;
struct TYPE_14__ {int nreltab; scalar_t__ ddbsymcnt; int nrelatab; TYPE_5__* ddbsymtab; TYPE_3__ lf; TYPE_2__* relatab; TYPE_1__* reltab; } ;
struct TYPE_12__ {int nrela; int sec; TYPE_6__* rela; } ;
struct TYPE_11__ {int nrel; int sec; TYPE_6__* rel; } ;
typedef TYPE_5__ Elf_Sym ;
typedef scalar_t__ Elf_Size ;
typedef TYPE_6__ Elf_Rela ;
typedef TYPE_6__ Elf_Rel ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,scalar_t__,TYPE_6__ const*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_8(linker_file_t VAR_6, bool VAR_7)
{
 elf_file_t VAR_8 = (elf_file_t)VAR_6;
 const Elf_Rel *VAR_9;
 const Elf_Rel *VAR_10;
 const Elf_Rela *VAR_11;
 const Elf_Rela *VAR_12;
 const Elf_Sym *VAR_13;
 Elf_Addr VAR_14;
 int VAR_15;
 Elf_Size VAR_16;

 FUNC_7(VAR_8);


 for (VAR_15 = 0; VAR_15 < VAR_8->nreltab; VAR_15++) {
  VAR_10 = VAR_8->reltab[VAR_15].rel;
  if (VAR_10 == ((void*)0)) {
   FUNC_6(VAR_8->lf.filename, "lost a reltab");
   return (VAR_2);
  }
  VAR_9 = VAR_10 + VAR_8->reltab[VAR_15].nrel;
  VAR_14 = FUNC_5(VAR_8, VAR_8->reltab[VAR_15].sec);
  if (VAR_14 == 0) {
   FUNC_6(VAR_8->lf.filename, "lost base for reltab");
   return (VAR_2);
  }
  for ( ; VAR_10 < VAR_9; VAR_10++) {
   VAR_16 = FUNC_0(VAR_10->r_info);
   if (VAR_16 >= VAR_8->ddbsymcnt)
    continue;
   VAR_13 = VAR_8->ddbsymtab + VAR_16;

   if (FUNC_1(VAR_13->st_info) != VAR_3)
    continue;
   if ((FUNC_2(VAR_13->st_info) == VAR_4 ||
       FUNC_3(VAR_10->r_info)) == VAR_7)
    FUNC_4(VAR_6, VAR_14, VAR_10, VAR_0,
        VAR_5);
  }
 }


 for (VAR_15 = 0; VAR_15 < VAR_8->nrelatab; VAR_15++) {
  VAR_12 = VAR_8->relatab[VAR_15].rela;
  if (VAR_12 == ((void*)0)) {
   FUNC_6(VAR_8->lf.filename, "lost a relatab!");
   return (VAR_2);
  }
  VAR_11 = VAR_12 + VAR_8->relatab[VAR_15].nrela;
  VAR_14 = FUNC_5(VAR_8, VAR_8->relatab[VAR_15].sec);
  if (VAR_14 == 0) {
   FUNC_6(VAR_8->lf.filename, "lost base for reltab");
   return (VAR_2);
  }
  for ( ; VAR_12 < VAR_11; VAR_12++) {
   VAR_16 = FUNC_0(VAR_12->r_info);
   if (VAR_16 >= VAR_8->ddbsymcnt)
    continue;
   VAR_13 = VAR_8->ddbsymtab + VAR_16;

   if (FUNC_1(VAR_13->st_info) != VAR_3)
    continue;
   if ((FUNC_2(VAR_13->st_info) == VAR_4 ||
       FUNC_3(VAR_12->r_info)) == VAR_7)
    FUNC_4(VAR_6, VAR_14, VAR_12, VAR_1,
        VAR_5);
  }
 }
 return (0);
}
