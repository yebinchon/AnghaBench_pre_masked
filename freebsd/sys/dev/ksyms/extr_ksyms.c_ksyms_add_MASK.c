
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct toffsets {size_t to_resid; size_t to_symoff; size_t to_stroff; scalar_t__ to_stridx; struct ksyms_softc* to_sc; } ;
struct ksyms_softc {int dummy; } ;
struct TYPE_11__ {scalar_t__ value; } ;
typedef TYPE_1__ linker_symval_t ;
typedef TYPE_2__* linker_file_t ;
typedef char* caddr_t ;
typedef int c_linker_sym_t ;
struct TYPE_13__ {uintptr_t st_value; int st_name; } ;
struct TYPE_12__ {int id; } ;
typedef TYPE_3__ Elf_Sym ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_2__*,char**) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,TYPE_1__*) ;
 size_t FUNC_2 (TYPE_2__*,TYPE_3__ const**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__ const*,char*,size_t) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct ksyms_softc*,char*,size_t,size_t) ;
 char* FUNC_6 (int ,int ,int ) ;
 size_t FUNC_7 (int ,size_t) ;

__attribute__((used)) static int
FUNC_8(linker_file_t VAR_6, void *VAR_7)
{
 char *VAR_8;
 struct ksyms_softc *VAR_9;
 struct toffsets *VAR_10;
 const Elf_Sym *VAR_11;
 Elf_Sym *VAR_12;
 caddr_t VAR_13;
 size_t VAR_14, VAR_15, VAR_16, VAR_17;
 linker_symval_t VAR_18;
 int VAR_19, VAR_20, VAR_21;
 bool VAR_22;

 VAR_8 = FUNC_6(VAR_5, VAR_3, VAR_4);
 VAR_10 = VAR_7;
 VAR_9 = VAR_10->to_sc;

 VAR_1;
 VAR_15 = FUNC_2(VAR_6, &VAR_11);
 VAR_16 = FUNC_0(VAR_6, &VAR_13);
 VAR_17 = VAR_15 * sizeof(Elf_Sym);




 VAR_22 = VAR_6->id > 1;


 while (VAR_17 > 0) {
  VAR_14 = FUNC_7(VAR_5, VAR_17);
  FUNC_3(VAR_11, VAR_8, VAR_14);






  VAR_12 = (Elf_Sym *) VAR_8;
  VAR_21 = VAR_14 / sizeof(Elf_Sym);
  for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
   VAR_12[VAR_20].st_name += VAR_10->to_stridx;
   if (VAR_22 && FUNC_1(VAR_6,
       (c_linker_sym_t)&VAR_11[VAR_20], &VAR_18) == 0) {
    VAR_12[VAR_20].st_value = (uintptr_t)VAR_18.value;
   }
  }

  if (VAR_14 > VAR_10->to_resid) {
   VAR_2;
   FUNC_4(VAR_8, VAR_3);
   return (VAR_0);
  }
  VAR_10->to_resid -= VAR_14;
  VAR_19 = FUNC_5(VAR_9, VAR_8, VAR_10->to_symoff, VAR_14);
  VAR_10->to_symoff += VAR_14;
  if (VAR_19 != 0) {
   VAR_2;
   FUNC_4(VAR_8, VAR_3);
   return (VAR_19);
  }

  VAR_11 += VAR_21;
  VAR_17 -= VAR_14;
 }
 FUNC_4(VAR_8, VAR_3);
 VAR_2;

 if (VAR_16 > VAR_10->to_resid)
  return (VAR_0);
 VAR_10->to_resid -= VAR_16;
 VAR_19 = FUNC_5(VAR_9, VAR_13, VAR_10->to_stroff, VAR_16);
 VAR_10->to_stroff += VAR_16;
 VAR_10->to_stridx += VAR_16;

 return (VAR_19);
}
