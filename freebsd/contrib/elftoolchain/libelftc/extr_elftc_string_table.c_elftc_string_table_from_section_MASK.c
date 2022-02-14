
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ d_size; char* d_buf; } ;
struct TYPE_5__ {scalar_t__ sh_type; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int Elftc_String_Table ;
typedef int Elf_Scn ;
typedef TYPE_2__ Elf_Data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 int VAR_2 ;
 int * FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (char const*) ;

Elftc_String_Table *
FUNC_6(Elf_Scn *VAR_3, size_t VAR_4)
{
 Elf_Data *VAR_5;
 GElf_Shdr VAR_6;
 const char *VAR_7, *VAR_8;
 Elftc_String_Table *VAR_9;
 size_t VAR_10;


 if (FUNC_4(VAR_3, &VAR_6) == ((void*)0) ||
     VAR_6.sh_type != VAR_1) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }

 if ((VAR_5 = FUNC_0(VAR_3, ((void*)0))) == ((void*)0) ||
     VAR_5->d_size == 0) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }

 if ((VAR_9 = FUNC_1(VAR_4)) == ((void*)0))
  return (((void*)0));

 VAR_7 = VAR_5->d_buf;




 if (*VAR_7 != '\0') {
  VAR_2 = VAR_0;
  goto fail;
 }

 VAR_8 = VAR_7 + VAR_5->d_size;





 for (VAR_7 += 1; VAR_7 < VAR_8; VAR_7 += VAR_10) {
  if (FUNC_3(VAR_9, VAR_7) == 0)
   goto fail;

  VAR_10 = FUNC_5(VAR_7) + 1;
 }

 return (VAR_9);

fail:
 if (VAR_9)
  (void) FUNC_2(VAR_9);

 return (((void*)0));
}
