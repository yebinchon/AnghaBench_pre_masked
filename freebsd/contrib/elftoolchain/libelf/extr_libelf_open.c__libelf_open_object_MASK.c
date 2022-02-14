
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct stat {scalar_t__ st_size; int st_mode; } ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;
typedef int mode_t ;
struct TYPE_7__ {int e_fd; unsigned int e_flags; scalar_t__ e_kind; scalar_t__ e_cmd; int e_byteorder; } ;
typedef scalar_t__ Elf_Cmd ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_8 (void*,size_t,int) ;
 void* FUNC_9 (int,size_t*) ;
 int FUNC_10 (int) ;
 int VAR_14 ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_15 ;
 int FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (int,struct stat*) ;
 void* FUNC_14 (size_t) ;
 void* FUNC_15 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_16 (void*,size_t) ;
 scalar_t__ FUNC_17 (int,void*,size_t) ;

Elf *
FUNC_18(int VAR_16, Elf_Cmd VAR_17, int VAR_18)
{
 Elf *VAR_19;
 void *VAR_20;
 mode_t VAR_21;
 size_t VAR_22;
 struct stat VAR_23;
 unsigned int VAR_24;

 FUNC_10(VAR_17 == VAR_2 || VAR_17 == VAR_1 || VAR_17 == VAR_3);

 if (FUNC_13(VAR_16, &VAR_23) < 0) {
  FUNC_1(VAR_6, VAR_15);
  return (((void*)0));
 }

 VAR_21 = VAR_23.st_mode;
 VAR_22 = (size_t) VAR_23.st_size;




 if (!FUNC_4(VAR_21) && !FUNC_2(VAR_21) && !FUNC_3(VAR_21) &&
     !FUNC_5(VAR_21)) {
  FUNC_1(VAR_0, 0);
  return (((void*)0));
 }




 if (VAR_17 == VAR_3) {
  if ((VAR_19 = FUNC_6()) != ((void*)0)) {
   FUNC_7(VAR_19, VAR_5);
   VAR_19->e_byteorder = FUNC_0(VAR_14);
   VAR_19->e_fd = VAR_16;
   VAR_19->e_cmd = VAR_17;
   if (!FUNC_4(VAR_21))
    VAR_19->e_flags |= VAR_9;
  }

  return (VAR_19);
 }





 VAR_20 = ((void*)0);
 VAR_24 = 0;
 if (FUNC_4(VAR_21)) {




  if (VAR_22 == 0) {
   FUNC_1(VAR_0, 0);
   return (((void*)0));
  }
  if (VAR_20 == ((void*)0)) {
   if ((VAR_20 = FUNC_14(VAR_22)) == ((void*)0)) {
    FUNC_1(VAR_13, 0);
    return (((void*)0));
   }

   if (FUNC_17(VAR_16, VAR_20, VAR_22) != (ssize_t) VAR_22) {
    FUNC_1(VAR_6, VAR_15);
    FUNC_12(VAR_20);
    return (((void*)0));
   }

   VAR_24 = VAR_7;
  }
 } else if ((VAR_20 = FUNC_9(VAR_16, &VAR_22)) != ((void*)0))
  VAR_24 = VAR_7 | VAR_9;
 else
  return (((void*)0));

 if ((VAR_19 = FUNC_8(VAR_20, VAR_22, VAR_18)) == ((void*)0)) {
  FUNC_10((VAR_24 & VAR_7) ||
      (VAR_24 & VAR_8));
  if (VAR_24 & VAR_7)
   FUNC_12(VAR_20);




  return (((void*)0));
 }


 if (VAR_17 == VAR_1 && VAR_19->e_kind == VAR_4) {
  (void) FUNC_11(VAR_19);
  FUNC_1(VAR_0, 0);
  return (((void*)0));
 }

 VAR_19->e_flags |= VAR_24;
 VAR_19->e_fd = VAR_16;
 VAR_19->e_cmd = VAR_17;

 return (VAR_19);
}
