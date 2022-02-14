
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
struct cpio {char* buff; int buff_size; int uid_override; int gid_override; char** argv; int argc; char mode; char compress; int bytes_per_block; char* filename; int option_null; int option_append; int option_atime_restore; int add_filter; char* argument; char* format; int option_follow_links; int option_link; int option_numeric_uid_gid; char* passphrase; int quiet; int option_rename; int option_list; int return_value; int ppbuff; int destdir; int uname_cache; int gname_cache; int * matching; scalar_t__ dot; scalar_t__ verbose; int extract_flags; int * gname_override; int * uname_override; } ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int * FUNC_5 () ;
 int FUNC_6 (struct cpio*) ;
 int VAR_14 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int,int ,char*,...) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 () ;
 int FUNC_14 (struct cpio*,int ,int) ;
 int FUNC_15 (struct cpio*) ;
 int FUNC_16 (struct cpio*) ;
 int FUNC_17 (struct cpio*) ;
 int FUNC_18 (struct cpio*,char*) ;
 char* FUNC_19 (char*,int*,int*) ;
 int FUNC_20 (int ) ;
 int * FUNC_21 (int ,char*) ;
 int FUNC_22 (int ,struct sigaction*,int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (char*,char**,int) ;
 int FUNC_25 () ;
 int FUNC_26 () ;

int
FUNC_27(int VAR_15, char *VAR_16[])
{
 static char VAR_17[16384];
 struct cpio VAR_18;
 struct cpio *VAR_19;
 const char *VAR_20;
 char *VAR_21;
 int VAR_22, VAR_23;
 int VAR_24, VAR_25;

 VAR_19 = &VAR_18;
 FUNC_14(VAR_19, 0, sizeof(*VAR_19));
 VAR_19->buff = VAR_17;
 VAR_19->buff_size = sizeof(VAR_17);
 FUNC_11(*VAR_16, "bsdcpio");






 VAR_19->uid_override = -1;
 VAR_19->gid_override = -1;
 VAR_19->argv = VAR_16;
 VAR_19->argc = VAR_15;
 VAR_19->mode = '\0';
 VAR_19->verbose = 0;
 VAR_19->compress = '\0';
 VAR_19->extract_flags = VAR_2;
 VAR_19->extract_flags |= VAR_3;
 VAR_19->extract_flags |= VAR_8;
 VAR_19->extract_flags |= VAR_7;
 VAR_19->extract_flags |= VAR_6;
 VAR_19->extract_flags |= VAR_5;
 VAR_19->extract_flags |= VAR_1;
 VAR_19->extract_flags |= VAR_0;

 if (FUNC_9() == 0)
  VAR_19->extract_flags |= VAR_4;

 VAR_19->bytes_per_block = 512;
 VAR_19->filename = ((void*)0);

 VAR_19->matching = FUNC_5();
 if (VAR_19->matching == ((void*)0))
  FUNC_10(1, 0, "Out of memory");

 while ((VAR_24 = FUNC_6(VAR_19)) != -1) {
  switch (VAR_24) {
  case '0':
   VAR_19->option_null = 1;
   break;
  case 'A':
   VAR_19->option_append = 1;
   break;
  case 'a':
   VAR_19->option_atime_restore = 1;
   break;
  case 'B':
   VAR_19->bytes_per_block = 5120;
   break;
  case 141:
   VAR_19->add_filter = VAR_24;
   break;
  case 'C':
   VAR_14 = 0;
   VAR_21 = ((void*)0);
   VAR_25 = (int)FUNC_24(VAR_19->argument, &VAR_21, 10);
   if (VAR_14 || VAR_25 <= 0 || *(VAR_19->argument) == '\0' ||
       VAR_21 == ((void*)0) || *VAR_21 != '\0') {
    FUNC_10(1, 0, "Invalid blocksize: %s",
        VAR_19->argument);
   }
   VAR_19->bytes_per_block = VAR_25;
   break;
  case 'c':
   VAR_19->format = "odc";
   break;
  case 'd':
   VAR_19->extract_flags &= ~VAR_2;
   break;
  case 'E':
   if (FUNC_4(
       VAR_19->matching, VAR_19->argument,
       VAR_19->option_null) != VAR_10)
    FUNC_10(1, 0, "Error : %s",
        FUNC_0(VAR_19->matching));
   break;
  case 'F':
   VAR_19->filename = VAR_19->argument;
   break;
  case 'f':
   if (FUNC_1(VAR_19->matching,
       VAR_19->argument) != VAR_10)
    FUNC_10(1, 0, "Error : %s",
        FUNC_0(VAR_19->matching));
   break;
  case 140:
   VAR_19->compress = VAR_24;
   break;
  case 'H':
   VAR_19->format = VAR_19->argument;
   break;
  case 'h':
   FUNC_13();
   break;
  case 'I':
   VAR_19->filename = VAR_19->argument;
   break;
  case 'i':
   if (VAR_19->mode != '\0')
    FUNC_10(1, 0,
        "Cannot use both -i and -%c", VAR_19->mode);
   VAR_19->mode = VAR_24;
   break;
  case 'J':
   VAR_19->compress = VAR_24;
   break;
  case 'j':
   VAR_19->compress = VAR_24;
   break;
  case 139:
   VAR_19->extract_flags &= ~VAR_8;
   VAR_19->extract_flags &= ~VAR_7;
   VAR_19->extract_flags &= ~VAR_6;
   break;
  case 'L':
   VAR_19->option_follow_links = 1;
   break;
  case 'l':
   VAR_19->option_link = 1;
   break;
  case 138:
  case 137:
  case 136:
  case 135:
  case 128:
   VAR_19->compress = VAR_24;
   break;
  case 'm':
   VAR_19->extract_flags |= VAR_9;
   break;
  case 'n':
   VAR_19->option_numeric_uid_gid = 1;
   break;
  case 134:
   VAR_19->extract_flags &= ~VAR_4;
   break;
  case 'O':
   VAR_19->filename = VAR_19->argument;
   break;
  case 'o':
   if (VAR_19->mode != '\0')
    FUNC_10(1, 0,
        "Cannot use both -o and -%c", VAR_19->mode);
   VAR_19->mode = VAR_24;
   break;
  case 'p':
   if (VAR_19->mode != '\0')
    FUNC_10(1, 0,
        "Cannot use both -p and -%c", VAR_19->mode);
   VAR_19->mode = VAR_24;
   VAR_19->extract_flags &= ~VAR_7;
   VAR_19->extract_flags &= ~VAR_6;
   break;
  case 133:
   VAR_19->passphrase = VAR_19->argument;
   break;
  case 132:
   VAR_19->extract_flags |= VAR_4;
   break;
  case 131:
   VAR_19->quiet = 1;
   break;
  case 'R':


   VAR_20 = FUNC_19(VAR_19->argument, &VAR_22, &VAR_23);
   if (VAR_20) {
    FUNC_12(-1, "%s", VAR_20);
    FUNC_25();
   }
   if (VAR_22 != -1) {
    VAR_19->uid_override = VAR_22;
    VAR_19->uname_override = ((void*)0);
   }
   if (VAR_23 != -1) {
    VAR_19->gid_override = VAR_23;
    VAR_19->gname_override = ((void*)0);
   }
   break;
  case 'r':
   VAR_19->option_rename = 1;
   break;
  case 't':
   VAR_19->option_list = 1;
   break;
  case 'u':
   VAR_19->extract_flags
       &= ~VAR_3;
   break;
  case 130:
   VAR_19->add_filter = VAR_24;
   break;
  case 'v':
   VAR_19->verbose++;
   break;
  case 'V':
   VAR_19->dot++;
   break;
  case 129:
   FUNC_26();
   break;
  case 'y':
   VAR_19->compress = VAR_24;
   break;
  case 'Z':
   VAR_19->compress = VAR_24;
   break;
  case 'z':
   VAR_19->compress = VAR_24;
   break;
  default:
   FUNC_25();
  }
 }





 if (VAR_19->option_list && VAR_19->mode == '\0')
  VAR_19->mode = 'i';

 if (VAR_19->option_list && VAR_19->mode != 'i')
  FUNC_10(1, 0, "Option -t requires -i");

 if (VAR_19->option_numeric_uid_gid && !VAR_19->option_list)
  FUNC_10(1, 0, "Option -n requires -it");

 if (VAR_19->format != ((void*)0) && VAR_19->mode != 'o')
  FUNC_10(1, 0, "Option --format requires -o");

 if (VAR_19->option_link && VAR_19->mode != 'p')
  FUNC_10(1, 0, "Option -l requires -p");

 if (VAR_19->dot && VAR_19->verbose)
  VAR_19->dot = 0;


 switch (VAR_19->mode) {
 case 'o':


  if (VAR_19->format == ((void*)0))
   VAR_19->format = "odc";

  FUNC_17(VAR_19);
  break;
 case 'i':
  while (*VAR_19->argv != ((void*)0)) {
   if (FUNC_3(VAR_19->matching,
       *VAR_19->argv) != VAR_10)
    FUNC_10(1, 0, "Error : %s",
        FUNC_0(VAR_19->matching));
   --VAR_19->argc;
   ++VAR_19->argv;
  }
  if (VAR_19->option_list)
   FUNC_16(VAR_19);
  else
   FUNC_15(VAR_19);
  break;
 case 'p':
  if (*VAR_19->argv == ((void*)0) || **VAR_19->argv == '\0')
   FUNC_10(1, 0,
       "-p mode requires a target directory");
  FUNC_18(VAR_19, *VAR_19->argv);
  break;
 default:
  FUNC_10(1, 0,
      "Must specify at least one of -i, -o, or -p");
 }

 FUNC_2(VAR_19->matching);
 FUNC_8(VAR_19->gname_cache);
 FUNC_8(VAR_19->uname_cache);
 FUNC_7(VAR_19->destdir);
 FUNC_20(VAR_19->ppbuff);
 return (VAR_19->return_value);
}
