
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tlsoffset; size_t tlsinitsize; void const* tlsinit; int static_tls_copied; int tlsindex; scalar_t__ tlssize; scalar_t__ marker; } ;
typedef TYPE_1__ Obj_Entry ;
typedef size_t Elf_Addr ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int,int) ;
 char* FUNC_3 (size_t,size_t) ;
 int FUNC_4 (void*,void const*,size_t) ;
 int FUNC_5 (void*,int ,scalar_t__) ;
 int VAR_0 ;
 size_t FUNC_6 (size_t,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t* FUNC_7 (size_t,int) ;

void *
FUNC_8(Obj_Entry *VAR_5, void *VAR_6, size_t VAR_7, size_t VAR_8)
{
    Obj_Entry *VAR_9;
    size_t VAR_10, VAR_11;
    char *VAR_12;
    Elf_Addr *VAR_13, *VAR_14;
    Elf_Addr VAR_15, VAR_16, VAR_17;
    size_t VAR_18;

    VAR_11 = VAR_8;
    if (VAR_3 > VAR_11)
     VAR_11 = VAR_3;
    VAR_10 = FUNC_6(VAR_4, VAR_11) + FUNC_6(VAR_7, VAR_11);

    FUNC_1(VAR_7 >= 2*sizeof(Elf_Addr));
    VAR_12 = FUNC_3(VAR_10, VAR_11);
    VAR_13 = FUNC_7(VAR_2 + 2, sizeof(Elf_Addr));

    VAR_15 = (Elf_Addr)(VAR_12 + FUNC_6(VAR_4, VAR_11));
    ((Elf_Addr*)VAR_15)[0] = VAR_15;
    ((Elf_Addr*)VAR_15)[1] = (Elf_Addr) VAR_13;

    VAR_13[0] = VAR_1;
    VAR_13[1] = VAR_2;

    if (VAR_6) {



 VAR_16 = (Elf_Addr) VAR_6;
 FUNC_4((void *)(VAR_15 - VAR_4),
        (const void *)(VAR_16 - VAR_4),
        VAR_4);





 VAR_14 = ((Elf_Addr**)VAR_16)[1];
 for (VAR_18 = 0; VAR_18 < VAR_14[1]; VAR_18++) {
     if (VAR_14[VAR_18+2] < VAR_16 - VAR_10 || VAR_14[VAR_18+2] > VAR_16) {
  VAR_13[VAR_18+2] = VAR_14[VAR_18+2];
  VAR_14[VAR_18+2] = 0;
     }
 }





 FUNC_2(VAR_6, 2*sizeof(Elf_Addr), sizeof(Elf_Addr));
    } else {
 for (VAR_9 = VAR_5; VAR_9 != ((void*)0); VAR_9 = FUNC_0(VAR_9, VAR_0)) {
  if (VAR_9->marker || VAR_9->tlsoffset == 0)
   continue;
  VAR_17 = VAR_15 - VAR_9->tlsoffset;
  FUNC_5((void*)(VAR_17 + VAR_9->tlsinitsize),
         0, VAR_9->tlssize - VAR_9->tlsinitsize);
  if (VAR_9->tlsinit) {
      FUNC_4((void*) VAR_17, VAR_9->tlsinit, VAR_9->tlsinitsize);
      VAR_9->static_tls_copied = 1;
  }
  VAR_13[VAR_9->tlsindex + 1] = VAR_17;
 }
    }

    return (void*) VAR_15;
}
