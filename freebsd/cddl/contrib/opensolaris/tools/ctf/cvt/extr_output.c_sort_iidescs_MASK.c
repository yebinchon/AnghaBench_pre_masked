
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int tdata_t ;
struct TYPE_24__ {int ii_flags; } ;
typedef TYPE_1__ iidesc_t ;
struct TYPE_25__ {int iim_fuzzy; char* iim_file; char* iim_name; void* iim_bind; } ;
typedef TYPE_2__ iidesc_match_t ;
struct TYPE_26__ {int iib_nobjts; int iib_nfuncs; int iib_maxtypeid; TYPE_1__** iib_funcs; TYPE_1__** iib_objts; } ;
typedef TYPE_3__ iiburst_t ;
struct TYPE_29__ {scalar_t__ d_buf; } ;
struct TYPE_28__ {int sh_size; int sh_entsize; int sh_link; } ;
struct TYPE_27__ {int st_name; int st_info; } ;
typedef TYPE_4__ GElf_Sym ;
typedef TYPE_5__ GElf_Shdr ;
typedef int Elf_Scn ;
typedef TYPE_6__ Elf_Data ;
typedef int Elf ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;



 int FUNC_2 (TYPE_4__*,char*,TYPE_6__*,int,TYPE_6__*,TYPE_4__*,char**) ;
 TYPE_1__* FUNC_3 (int *,TYPE_4__*,TYPE_1__*,char*,char*) ;
 int FUNC_4 (int,char*,char*,char*) ;
 TYPE_6__* FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (char const*,char*,int) ;
 TYPE_1__* FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *,char const*,char*) ;
 int FUNC_10 (int *,TYPE_5__*) ;
 int * FUNC_11 (TYPE_6__*,int,TYPE_4__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*,char*) ;
 TYPE_3__* FUNC_13 (int *,int) ;
 int FUNC_14 (TYPE_3__*) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (char*,char const*) ;

__attribute__((used)) static iiburst_t *
FUNC_18(Elf *VAR_1, const char *VAR_2, tdata_t *VAR_3, int VAR_4,
    int VAR_5)
{
 iiburst_t *VAR_6;
 Elf_Scn *VAR_7;
 GElf_Shdr VAR_8;
 Elf_Data *VAR_9, *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;
 iidesc_match_t VAR_14;

 VAR_14.iim_fuzzy = VAR_4;
 VAR_14.iim_file = ((void*)0);

 if ((VAR_12 = FUNC_9(VAR_1, VAR_2,
     VAR_5 ? ".dynsym" : ".symtab")) < 0)
  FUNC_17("%s: Can't open symbol table\n", VAR_2);
 VAR_7 = FUNC_6(VAR_1, VAR_12);
 VAR_9 = FUNC_5(VAR_7, ((void*)0));
 FUNC_10(VAR_7, &VAR_8);
 VAR_13 = VAR_8.sh_size / VAR_8.sh_entsize;

 VAR_7 = FUNC_6(VAR_1, VAR_8.sh_link);
 VAR_10 = FUNC_5(VAR_7, ((void*)0));

 VAR_6 = FUNC_13(VAR_3, VAR_13);

 for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
  GElf_Sym VAR_15;
  char *VAR_16;
  iidesc_t **VAR_17;
  GElf_Sym VAR_18;
  iidesc_match_t VAR_19;
  int *VAR_20;
  iidesc_t *VAR_21;

  if (FUNC_11(VAR_9, VAR_11, &VAR_15) == ((void*)0))
   FUNC_7(VAR_2, "Couldn't read symbol %d", VAR_11);

  VAR_14.iim_name = (char *)VAR_10->d_buf + VAR_15.st_name;
  VAR_14.iim_bind = FUNC_0(VAR_15.st_info);

  switch (FUNC_1(VAR_15.st_info)) {
  case 130:
   VAR_16 = FUNC_15(VAR_14.iim_name, '/');
   VAR_14.iim_file = VAR_16 == ((void*)0) ? VAR_14.iim_name : VAR_16 + 1;
   continue;
  case 128:
   VAR_17 = VAR_6->iib_objts;
   VAR_20 = &VAR_6->iib_nobjts;
   break;
  case 129:
   VAR_17 = VAR_6->iib_funcs;
   VAR_20 = &VAR_6->iib_nfuncs;
   break;
  default:
   continue;
  }

  if (FUNC_12(&VAR_15, VAR_14.iim_name))
   continue;

  VAR_21 = FUNC_8(VAR_3, &VAR_14);

  if (VAR_21 != ((void*)0)) {
   VAR_17[*VAR_20] = VAR_21;
   VAR_21->ii_flags |= VAR_0;
   (*VAR_20)++;
   continue;
  }

  if (!FUNC_2(&VAR_15, VAR_14.iim_file, VAR_9, VAR_13, VAR_10,
      &VAR_18, &VAR_19.iim_file)) {
   (*VAR_20)++;
   continue;
  }

  VAR_19.iim_fuzzy = VAR_4;
  VAR_19.iim_name = (char *)VAR_10->d_buf + VAR_18.st_name;
  VAR_19.iim_bind = FUNC_0(VAR_18.st_info);

  FUNC_4(3, "Weak symbol %s resolved to %s\n", VAR_14.iim_name,
      VAR_19.iim_name);

  VAR_21 = FUNC_8(VAR_3, &VAR_19);

  if (VAR_21 != ((void*)0)) {
   VAR_17[*VAR_20] = FUNC_3(VAR_3, &VAR_15,
       VAR_21, VAR_14.iim_name, VAR_14.iim_file);
   VAR_17[*VAR_20]->ii_flags |= VAR_0;
  }

  (*VAR_20)++;
 }
 FUNC_14(VAR_6);
 FUNC_16(VAR_3, VAR_6->iib_maxtypeid);

 return (VAR_6);
}
