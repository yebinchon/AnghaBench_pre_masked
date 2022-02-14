
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef TYPE_3__* elf_file_t ;
struct TYPE_18__ {int r_info; } ;
struct TYPE_17__ {int st_info; } ;
struct TYPE_13__ {int filename; } ;
struct TYPE_16__ {int nreltab; scalar_t__ ddbsymcnt; int nrelatab; TYPE_10__ lf; TYPE_4__* ddbsymtab; TYPE_2__* relatab; TYPE_1__* reltab; } ;
struct TYPE_15__ {int nrela; int sec; TYPE_5__* rela; } ;
struct TYPE_14__ {int nrel; int sec; TYPE_5__* rel; } ;
typedef TYPE_4__ Elf_Sym ;
typedef scalar_t__ Elf_Size ;
typedef TYPE_5__ Elf_Rela ;
typedef TYPE_5__ Elf_Rel ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_10__*,scalar_t__,TYPE_5__ const*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char const*) ;
 char* FUNC_7 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_8(elf_file_t VAR_6)
{
 const Elf_Rel *VAR_7;
 const Elf_Rel *VAR_8;
 const Elf_Rela *VAR_9;
 const Elf_Rela *VAR_10;
 const char *VAR_11;
 const Elf_Sym *VAR_12;
 int VAR_13;
 Elf_Size VAR_14;
 Elf_Addr VAR_15;



 for (VAR_13 = 0; VAR_13 < VAR_6->nreltab; VAR_13++) {
  VAR_8 = VAR_6->reltab[VAR_13].rel;
  if (VAR_8 == ((void*)0)) {
   FUNC_5(VAR_6->lf.filename, "lost a reltab!");
   return (VAR_3);
  }
  VAR_7 = VAR_8 + VAR_6->reltab[VAR_13].nrel;
  VAR_15 = FUNC_4(VAR_6, VAR_6->reltab[VAR_13].sec);
  if (VAR_15 == 0) {
   FUNC_5(VAR_6->lf.filename, "lost base for reltab");
   return (VAR_3);
  }
  for ( ; VAR_8 < VAR_7; VAR_8++) {
   VAR_14 = FUNC_0(VAR_8->r_info);
   if (VAR_14 >= VAR_6->ddbsymcnt)
    continue;
   VAR_12 = VAR_6->ddbsymtab + VAR_14;

   if (FUNC_1(VAR_12->st_info) == VAR_4)
    continue;
   if (FUNC_3(&VAR_6->lf, VAR_15, VAR_8, VAR_0,
       VAR_5)) {
    VAR_11 = FUNC_7(VAR_6, VAR_8->r_info);
    FUNC_6("link_elf_obj: symbol %s undefined\n",
        VAR_11);
    return (VAR_2);
   }
  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_6->nrelatab; VAR_13++) {
  VAR_10 = VAR_6->relatab[VAR_13].rela;
  if (VAR_10 == ((void*)0)) {
   FUNC_5(VAR_6->lf.filename, "lost a relatab!");
   return (VAR_3);
  }
  VAR_9 = VAR_10 + VAR_6->relatab[VAR_13].nrela;
  VAR_15 = FUNC_4(VAR_6, VAR_6->relatab[VAR_13].sec);
  if (VAR_15 == 0) {
   FUNC_5(VAR_6->lf.filename,
       "lost base for relatab");
   return (VAR_3);
  }
  for ( ; VAR_10 < VAR_9; VAR_10++) {
   VAR_14 = FUNC_0(VAR_10->r_info);
   if (VAR_14 >= VAR_6->ddbsymcnt)
    continue;
   VAR_12 = VAR_6->ddbsymtab + VAR_14;

   if (FUNC_1(VAR_12->st_info) == VAR_4)
    continue;
   if (FUNC_3(&VAR_6->lf, VAR_15, VAR_10, VAR_1,
       VAR_5)) {
    VAR_11 = FUNC_7(VAR_6, VAR_10->r_info);
    FUNC_6("link_elf_obj: symbol %s undefined\n",
        VAR_11);
    return (VAR_2);
   }
  }
 }






 FUNC_2(VAR_6);

 return (0);
}
