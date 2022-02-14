
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mlink {int dform; char* dsec; char* arch; char* name; char* fsec; int gzip; int file; } ;
typedef enum form { ____Placeholder_form } form ;
struct TYPE_4__ {char* fts_path; int fts_info; int fts_level; char* fts_name; int fts_statp; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct mlink*) ;
 int FUNC_1 (int *) ;
 int VAR_12 ;
 int * FUNC_2 (char* const*,int,int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 struct mlink* FUNC_5 (int,int) ;
 int FUNC_6 (struct mlink*,int ) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*,char*,...) ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (int ,char const*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;
 char* FUNC_14 (char*,char) ;
 char* FUNC_15 (char*,int ) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_16(void)
{
 char VAR_15[VAR_9];
 FTS *VAR_16;
 FTSENT *VAR_17;
 struct mlink *VAR_18;
 int VAR_19;
 enum form VAR_20;
 char *VAR_21, *VAR_22, *VAR_23, *VAR_24;
 const char *VAR_25;
 const char *VAR_26[2];

 VAR_26[0] = ".";
 VAR_26[1] = ((void*)0);

 VAR_16 = FUNC_2((char * const *)VAR_26, VAR_4 | VAR_3,
     VAR_12);
 if (VAR_16 == ((void*)0)) {
  VAR_11 = (int)VAR_7;
  FUNC_8("", "&fts_open");
  return 0;
 }

 VAR_21 = VAR_22 = ((void*)0);
 VAR_20 = VAR_1;

 while ((VAR_17 = FUNC_3(VAR_16)) != ((void*)0)) {
  VAR_25 = VAR_17->fts_path + 2;
  switch (VAR_17->fts_info) {





  case 128:
   if (FUNC_7(VAR_25, VAR_15) == ((void*)0)) {
    if (VAR_14)
     FUNC_8(VAR_25, "&realpath");
    continue;
   }
   if (FUNC_15(VAR_15, VAR_10) != VAR_15



   ) {
    if (VAR_14) FUNC_8("",
        "%s: outside base directory", VAR_15);
    continue;
   }

   if (FUNC_9(VAR_25, VAR_17->fts_statp) == -1) {
    if (VAR_14)
     FUNC_8(VAR_25, "&stat");
    continue;
   }






  case 129:
   if ( ! FUNC_10(VAR_25, VAR_8))
    continue;
   if ( ! VAR_13 && VAR_17->fts_level < 2) {
    if (VAR_14)
     FUNC_8(VAR_25, "Extraneous file");
    continue;
   }
   VAR_19 = 0;
   VAR_23 = ((void*)0);
   while (VAR_23 == ((void*)0)) {
    VAR_23 = FUNC_14(VAR_17->fts_name, '.');
    if (VAR_23 == ((void*)0) || FUNC_10(VAR_23+1, "gz"))
     break;
    VAR_19 = 1;
    *VAR_23 = '\0';
    VAR_23 = ((void*)0);
   }
   if (VAR_23 == ((void*)0)) {
    if ( ! VAR_13) {
     if (VAR_14)
      FUNC_8(VAR_25,
          "No filename suffix");
     continue;
    }
   } else if ( ! FUNC_10(++VAR_23, "html")) {
    if (VAR_14)
     FUNC_8(VAR_25, "Skip html");
    continue;
   } else if ( ! FUNC_10(VAR_23, "ps")) {
    if (VAR_14)
     FUNC_8(VAR_25, "Skip ps");
    continue;
   } else if ( ! FUNC_10(VAR_23, "pdf")) {
    if (VAR_14)
     FUNC_8(VAR_25, "Skip pdf");
    continue;
   } else if ( ! VAR_13 &&
       ((VAR_20 == VAR_2 &&
         FUNC_13(VAR_23, VAR_21, FUNC_12(VAR_21))) ||
        (VAR_20 == VAR_0 && FUNC_10(VAR_23, "0")))) {
    if (VAR_14)
     FUNC_8(VAR_25, "Wrong filename suffix");
    continue;
   } else
    VAR_23[-1] = '\0';

   VAR_18 = FUNC_5(1, sizeof(struct mlink));
   if (FUNC_11(VAR_18->file, VAR_25,
       sizeof(VAR_18->file)) >=
       sizeof(VAR_18->file)) {
    FUNC_8(VAR_25, "Filename too long");
    FUNC_0(VAR_18);
    continue;
   }
   VAR_18->dform = VAR_20;
   VAR_18->dsec = VAR_21;
   VAR_18->arch = VAR_22;
   VAR_18->name = VAR_17->fts_name;
   VAR_18->fsec = VAR_23;
   VAR_18->gzip = VAR_19;
   FUNC_6(VAR_18, VAR_17->fts_statp);
   continue;

  case 131:
  case 130:
   break;

  default:
   if (VAR_14)
    FUNC_8(VAR_25, "Not a regular file");
   continue;
  }

  switch (VAR_17->fts_level) {
  case 0:

   break;
  case 1:





   VAR_24 = VAR_17->fts_name;
   if (VAR_17->fts_info == 130) {
    VAR_20 = VAR_1;
    VAR_21 = ((void*)0);
    break;
   }

   if ( ! FUNC_13(VAR_24, "man", 3)) {
    VAR_20 = VAR_2;
    VAR_21 = VAR_24 + 3;
   } else if ( ! FUNC_13(VAR_24, "cat", 3)) {
    VAR_20 = VAR_0;
    VAR_21 = VAR_24 + 3;
   } else {
    VAR_20 = VAR_1;
    VAR_21 = ((void*)0);
   }

   if (VAR_21 != ((void*)0) || VAR_13)
    break;

   if (VAR_14)
    FUNC_8(VAR_25, "Unknown directory part");
   FUNC_4(VAR_16, VAR_17, VAR_5);
   break;
  case 2:




   if (VAR_17->fts_info != 130 && VAR_21 != ((void*)0))
    VAR_22 = VAR_17->fts_name;
   else
    VAR_22 = ((void*)0);
   break;
  default:
   if (VAR_17->fts_info == 130 || VAR_13)
    break;
   if (VAR_14)
    FUNC_8(VAR_25, "Extraneous directory part");
   FUNC_4(VAR_16, VAR_17, VAR_5);
   break;
  }
 }

 FUNC_1(VAR_16);
 return 1;
}
