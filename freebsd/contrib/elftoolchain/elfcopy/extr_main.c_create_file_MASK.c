
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_nlink; int st_mode; } ;
struct elfcopy {scalar_t__ itf; scalar_t__ otf; scalar_t__ oec; scalar_t__ oed; int flags; int * ein; int * eout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 scalar_t__ VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct elfcopy*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char const*,int,int*,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct elfcopy*) ;
 int FUNC_7 (struct elfcopy*,int,char const*) ;
 int FUNC_8 (struct elfcopy*,int) ;
 int FUNC_9 (struct elfcopy*,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (struct elfcopy*,int,int) ;
 int FUNC_12 (struct elfcopy*,int,int,char const*) ;
 int FUNC_13 (char**,int*) ;
 void* FUNC_14 (int,int ,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (char const*,struct stat*) ;
 int FUNC_20 (int ,char*,...) ;
 int FUNC_21 (int ,char*,...) ;
 int FUNC_22 (int,int ) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int,struct stat*) ;
 scalar_t__ FUNC_25 (int,int ,int ) ;
 int FUNC_26 (char const*,struct stat*) ;
 int FUNC_27 (char const*,int,...) ;
 scalar_t__ FUNC_28 (char const*,char*) ;
 scalar_t__ FUNC_29 (char*) ;

__attribute__((used)) static void
FUNC_30(struct elfcopy *VAR_15, const char *VAR_16, const char *VAR_17)
{
 struct stat VAR_18;
 char *VAR_19, *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26;

 VAR_19 = ((void*)0);

 if (VAR_16 == ((void*)0))
  FUNC_21(VAR_9, "internal: src == NULL");
 if ((VAR_22 = FUNC_27(VAR_16, VAR_11)) == -1)
  FUNC_20(VAR_9, "open %s failed", VAR_16);

 if (FUNC_24(VAR_22, &VAR_18) == -1)
  FUNC_20(VAR_9, "fstat %s failed", VAR_16);

 if (VAR_17 == ((void*)0))
  FUNC_13(&VAR_19, &VAR_23);
 else
  if ((VAR_23 = FUNC_27(VAR_17, VAR_12|VAR_10, 0755)) == -1)
   FUNC_20(VAR_9, "open %s failed", VAR_17);



 if (FUNC_2(VAR_22)) {
  FUNC_1(VAR_15, VAR_22, VAR_23);
  goto copy_done;
 }


 if (FUNC_25(VAR_22, 0, VAR_14) < 0)
  FUNC_20(VAR_9, "lseek failed");





 if (VAR_15->itf != VAR_8) {






  if (VAR_15->otf != VAR_8) {
   if (VAR_15->oec == VAR_1)
    VAR_15->oec = VAR_0;
   if (VAR_15->oed == VAR_3)
    VAR_15->oed = VAR_2;
  }
  FUNC_13(&VAR_20, &VAR_21);
  if ((VAR_15->eout = FUNC_14(VAR_21, VAR_6, ((void*)0))) == ((void*)0))
   FUNC_21(VAR_9, "elf_begin() failed: %s",
       FUNC_16(-1));
  FUNC_17(VAR_15->eout, VAR_5, VAR_7);
  if (VAR_15->itf == 132)
   FUNC_7(VAR_15, VAR_22, VAR_16);
  else if (VAR_15->itf == 130)
   FUNC_8(VAR_15, VAR_22);
  else if (VAR_15->itf == 128)
   FUNC_9(VAR_15, VAR_22);
  else
   FUNC_21(VAR_9, "Internal: invalid target flavour");
  FUNC_15(VAR_15->eout);


  FUNC_3(VAR_22);
  if ((VAR_22 = FUNC_27(VAR_20, VAR_11)) == -1)
   FUNC_20(VAR_9, "open %s failed", VAR_16);
  FUNC_3(VAR_21);
  if (FUNC_29(VAR_20) < 0)
   FUNC_20(VAR_9, "unlink %s failed", VAR_20);
  FUNC_23(VAR_20);
 }

 if ((VAR_15->ein = FUNC_14(VAR_22, VAR_4, ((void*)0))) == ((void*)0))
  FUNC_21(VAR_9, "elf_begin() failed: %s",
      FUNC_16(-1));

 switch (FUNC_18(VAR_15->ein)) {
 case 133:
  FUNC_21(VAR_9, "file format not recognized");
 case 134:
  if ((VAR_15->eout = FUNC_14(VAR_23, VAR_6, ((void*)0))) == ((void*)0))
   FUNC_21(VAR_9, "elf_begin() failed: %s",
       FUNC_16(-1));


  FUNC_17(VAR_15->eout, VAR_5, VAR_7);




  FUNC_6(VAR_15);
  FUNC_15(VAR_15->eout);




  if (VAR_15->otf != VAR_8) {




   if (VAR_19 != ((void*)0)) {
    if (FUNC_29(VAR_19) < 0)
     FUNC_20(VAR_9, "unlink %s failed",
         VAR_19);
    FUNC_23(VAR_19);
   }
   FUNC_13(&VAR_19, &VAR_24);





   if (FUNC_25(VAR_23, 0, VAR_14) < 0)
    FUNC_20(VAR_9,
        "lseek failed for the output object");




   switch (VAR_15->otf) {
   case 132:
    FUNC_5(VAR_23, VAR_24);
    break;
   case 130:
    FUNC_10(VAR_23, VAR_24);
    break;
   case 128:
    FUNC_12(VAR_15, VAR_23, VAR_24,
        VAR_17 != ((void*)0) ? VAR_17 : VAR_16);
    break;
   case 129:
   case 131:



    FUNC_21(VAR_9, "PE/EFI support not enabled"
        " at compile time");

    break;
   default:
    FUNC_21(VAR_9, "Internal: unsupported"
        " output flavour %d", VAR_15->oec);
   }

   FUNC_3(VAR_23);
   VAR_23 = VAR_24;
  }

  break;

 case 135:

  break;
 default:
  FUNC_21(VAR_9, "file format not supported");
 }

 FUNC_15(VAR_15->ein);


copy_done:


 if (VAR_19 != ((void*)0)) {
  VAR_26 = 0;
  if (VAR_17 == ((void*)0)) {
   VAR_17 = VAR_16;
   if (FUNC_26(VAR_17, &VAR_18) != -1 &&
       (VAR_18.st_nlink > 1 || FUNC_0(VAR_18.st_mode)))
    VAR_26 = 1;
  }

  if (FUNC_4(VAR_19, VAR_17, VAR_23, &VAR_25, VAR_26) < 0)
   FUNC_20(VAR_9, "creation of %s failed", VAR_17);

  FUNC_23(VAR_19);
  VAR_19 = ((void*)0);

  VAR_23 = VAR_25;
 }

 if (FUNC_28(VAR_17, "/dev/null") && FUNC_22(VAR_23, VAR_18.st_mode) == -1)
  FUNC_20(VAR_9, "fchmod %s failed", VAR_17);

 if ((VAR_15->flags & VAR_13) &&
     FUNC_19(VAR_17, &VAR_18) < 0)
  FUNC_20(VAR_9, "setting timestamps failed");

 FUNC_3(VAR_22);
 FUNC_3(VAR_23);
}
