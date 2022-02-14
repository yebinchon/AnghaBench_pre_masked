
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; } ;
typedef TYPE_1__ scope_t ;
typedef TYPE_2__* path_entry_t ;
struct TYPE_11__ {int quoted_includes_only; scalar_t__ type; int * directory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* VAR_6 ;
 int FUNC_6 () ;
 int VAR_7 ;
 int FUNC_7 (TYPE_2__*) ;
 void* FUNC_8 (void*,char*) ;
 int FUNC_9 (int ,char*,char*,...) ;
 int FUNC_10 (int,char**,char*) ;
 int FUNC_11 (char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 void* VAR_11 ;
 int FUNC_12 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int VAR_18 ;
 int FUNC_15 (void*) ;
 int FUNC_16 (TYPE_2__*) ;
 int * VAR_19 ;
 void* VAR_20 ;
 int * VAR_21 ;
 void* VAR_22 ;
 TYPE_1__* FUNC_17 () ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int * VAR_27 ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (void*,char*) ;
 int * FUNC_20 (void*) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_24 () ;

int
FUNC_25(int VAR_30, char *VAR_31[])
{
 int VAR_32;
 int VAR_33;
 char *VAR_34;
 scope_t *VAR_35;

 FUNC_4(&VAR_18);
 FUNC_1(&VAR_24);
 FUNC_4(&VAR_25);
 FUNC_5(&VAR_7);
 FUNC_1(&VAR_23);


 VAR_35 = FUNC_17();
 VAR_35->type = VAR_4;

 VAR_8 = 1;
 VAR_6 = *VAR_31;
 VAR_21 = ((void*)0);
 VAR_10 = ((void*)0);






 while ((VAR_32 = FUNC_10(VAR_30, VAR_31, "d:i:l:n:o:p:r:I:X")) != -1) {
  switch(VAR_32) {
  case 'd':
   FUNC_18("-d: Assembler not built with debugging "
        "information", VAR_3);

   break;
  case 'i':
   VAR_27 = VAR_16;
   break;
  case 'l':

   if ((VAR_10 = FUNC_8(VAR_16, "w")) == ((void*)0)) {
    FUNC_15(VAR_16);
    FUNC_18(((void*)0), VAR_0);
   }
   VAR_11 = VAR_16;
   break;
  case 'n':

   if (FUNC_19(VAR_16, "ostdinc")) {
    FUNC_9(VAR_26, "%s: Unknown option -%c%s\n",
     VAR_6, VAR_32, VAR_16);
    FUNC_23();

   }
   break;
  case 'o':
   if ((VAR_14 = FUNC_8(VAR_16, "w")) == ((void*)0)) {
    FUNC_15(VAR_16);
    FUNC_18(((void*)0), VAR_0);
   }
   VAR_15 = VAR_16;
   break;
  case 'p':

   if ((VAR_19 = FUNC_8(VAR_16, "w")) == ((void*)0)) {
    FUNC_15(VAR_16);
    FUNC_18(((void*)0), VAR_0);
   }
   VAR_20 = VAR_16;
   break;
  case 'r':
   if ((VAR_21 = FUNC_8(VAR_16, "w")) == ((void*)0)) {
    FUNC_15(VAR_16);
    FUNC_18(((void*)0), VAR_0);
   }
   VAR_22 = VAR_16;
   break;
  case 'I':
  {
   path_entry_t VAR_36;

   if (FUNC_19(VAR_16, "-") == 0) {
    if (VAR_8 == 0) {
     FUNC_9(VAR_26, "%s: Warning - '-I-' "
       "specified multiple "
       "times\n", VAR_6);
    }
    VAR_8 = 0;
    for (VAR_36 = FUNC_0(&VAR_24);
         VAR_36 != ((void*)0);
         VAR_36 = FUNC_3(VAR_36,
             VAR_9))





     VAR_36->quoted_includes_only = 1;
   } else {
    VAR_36 =
        (path_entry_t)FUNC_12(sizeof(*VAR_36));
    if (VAR_36 == ((void*)0)) {
     FUNC_15(VAR_16);
     FUNC_18(((void*)0), VAR_2);
    }
    VAR_36->directory = FUNC_20(VAR_16);
    if (VAR_36->directory == ((void*)0)) {
     FUNC_15(VAR_16);
     FUNC_18(((void*)0), VAR_2);
    }
    VAR_36->quoted_includes_only = 0;
    FUNC_2(&VAR_24, VAR_36,
        VAR_9);
   }
   break;
  }
  case 'X':

   break;
  case '?':
  default:
   FUNC_23();

  }
 }
 VAR_30 -= VAR_17;
 VAR_31 += VAR_17;

 if (VAR_30 != 1) {
  FUNC_9(VAR_26, "%s: No input file specifiled\n", VAR_6);
  FUNC_23();

 }

 if (VAR_19 != ((void*)0)
  && (VAR_21 == ((void*)0) || VAR_27 == ((void*)0))) {
  FUNC_9(VAR_26,
   "%s: The -p option requires the -r and -i options.\n",
   VAR_6);
  FUNC_23();

 }
 FUNC_22();
 VAR_34 = *VAR_31;
 FUNC_11(*VAR_31, VAR_5);
 VAR_33 = FUNC_24();
 if (VAR_33 == 0) {
  if (FUNC_0(&VAR_23) == ((void*)0)
   || FUNC_0(&VAR_23)->type != VAR_4) {
   FUNC_18("Unterminated conditional expression", VAR_1);

  }


  FUNC_16(FUNC_0(&VAR_23));






  FUNC_7(FUNC_0(&VAR_23));


  FUNC_6();

  if (VAR_14 != ((void*)0))
   FUNC_13();
  if (VAR_21 != ((void*)0))
   FUNC_21(VAR_21, VAR_19);
  if (VAR_10 != ((void*)0))
   FUNC_14(VAR_34);
 }

 FUNC_18(((void*)0), 0);

 return (0);
}
