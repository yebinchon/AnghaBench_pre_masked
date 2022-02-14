
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ e_shnum; scalar_t__ e_type; scalar_t__ e_phnum; } ;
struct TYPE_9__ {int p_type; } ;
typedef TYPE_1__ GElf_Phdr ;
typedef TYPE_2__ GElf_Ehdr ;
typedef int Elf ;


 scalar_t__ VAR_0 ;





 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,char const*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,scalar_t__,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_1__*,char**) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_1__*,scalar_t__,char const*) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (char const*,int *) ;

__attribute__((used)) static int
FUNC_9(char const *VAR_7, Elf *VAR_8, GElf_Ehdr *VAR_9)
{
 GElf_Phdr VAR_10;
 uint32_t VAR_11;
 char *VAR_12;
 const char *VAR_13;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
  return (VAR_2);
 if (VAR_9->e_shnum != 0 || VAR_9->e_type != VAR_0)
  return (VAR_2);

 VAR_13 = VAR_12 = ((void*)0);
 if (VAR_6 == VAR_5)
  FUNC_8(VAR_7, ((void*)0));
 else
  FUNC_1();

 for (VAR_11 = 0; VAR_11 < VAR_9->e_phnum; VAR_11++) {
  if (FUNC_3(VAR_8, VAR_11, &VAR_10) != ((void*)0)) {
   if (VAR_10.p_type == VAR_1) {
    FUNC_5(VAR_8, VAR_9, &VAR_10, VAR_11, "note");
    FUNC_4(VAR_8, VAR_9, &VAR_10,
        &VAR_12);
   } else {
    switch(VAR_10.p_type) {
    case 130:
     VAR_13 = "null";
     break;
    case 131:
     VAR_13 = "load";
     break;
    case 135:
     VAR_13 = "dynamic";
     break;
    case 132:
     VAR_13 = "interp";
     break;
    case 128:
     VAR_13 = "shlib";
     break;
    case 129:
     VAR_13 = "phdr";
     break;
    case 134:
     VAR_13 = "eh_frame_hdr";
     break;
    case 133:
     VAR_13 = "stack";
     break;
    default:
     VAR_13 = "segment";
    }
    FUNC_5(VAR_8, VAR_9, &VAR_10, VAR_11, VAR_13);
   }
  }
 }

 if (VAR_6 == VAR_4) {
  if (VAR_12 != ((void*)0)) {
   FUNC_0(VAR_12, VAR_7,
       "core file invoked as");
  } else {
   FUNC_0(VAR_12, VAR_7, "core file");
  }
 } else {
  FUNC_7();
  if (VAR_12 != ((void*)0)) {
   (void) FUNC_6(" (core file invoked as %s)\n\n",
       VAR_12);
  } else {
   (void) FUNC_6(" (core file)\n\n");
  }
 }
 FUNC_2(VAR_12);
 return (VAR_3);
}
