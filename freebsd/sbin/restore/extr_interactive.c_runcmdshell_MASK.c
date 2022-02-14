
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entry {int e_flags; int e_ino; } ;
struct TYPE_2__ {void* gl_stat; void* gl_lstat; int gl_closedir; int gl_readdir; int gl_opendir; int gl_flags; } ;
struct arglist {scalar_t__ freeglob; TYPE_1__ glob; scalar_t__ argcnt; } ;
typedef int name ;
typedef int ino_t ;
typedef int curdir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*,char*,char*,int,struct arglist*) ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 struct entry* FUNC_9 (char*) ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int VAR_17 ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,int ) ;
 int FUNC_18 (char*,int ,int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;

void
FUNC_19(void)
{
 struct entry *VAR_20;
 ino_t VAR_21;
 struct arglist VAR_22;
 char VAR_23[VAR_4];
 char VAR_24[VAR_4];
 char VAR_25[VAR_0];

 VAR_22.freeglob = 0;
 VAR_22.argcnt = 0;
 VAR_22.glob.gl_flags = VAR_2;
 VAR_22.glob.gl_opendir = VAR_15;
 VAR_22.glob.gl_readdir = VAR_9;
 VAR_22.glob.gl_closedir = VAR_14;
 VAR_22.glob.gl_lstat = VAR_10;
 VAR_22.glob.gl_stat = VAR_10;
 FUNC_0("/", VAR_23, sizeof(VAR_23));
loop:
 if (FUNC_14(VAR_13) != 0) {
  if (VAR_22.freeglob != 0) {
   VAR_22.freeglob = 0;
   VAR_22.argcnt = 0;
   FUNC_7(&VAR_22.glob);
  }
  VAR_12 = ((void*)0);
  VAR_19 = 0;
 }
 VAR_16 = 1;
 FUNC_6(VAR_23, VAR_25, VAR_24, sizeof(VAR_24), &VAR_22);
 switch (VAR_25[0]) {



 case 'a':
  if (FUNC_17(VAR_25, "add", FUNC_16(VAR_25)) != 0)
   goto bad;
  VAR_21 = FUNC_4(VAR_24);
  if (VAR_21 == 0)
   break;
  if (VAR_11)
   FUNC_10(VAR_24);
  FUNC_18(VAR_24, VAR_21, VAR_6);
  break;



 case 'c':
  if (FUNC_17(VAR_25, "cd", FUNC_16(VAR_25)) != 0)
   goto bad;
  VAR_21 = FUNC_4(VAR_24);
  if (VAR_21 == 0)
   break;
  if (FUNC_8(VAR_21) == VAR_3) {
   FUNC_5(VAR_17, "%s: not a directory\n", VAR_24);
   break;
  }
  (void) FUNC_15(VAR_23, VAR_24);
  break;



 case 'd':
  if (FUNC_17(VAR_25, "delete", FUNC_16(VAR_25)) != 0)
   goto bad;
  VAR_20 = FUNC_9(VAR_24);
  if (VAR_20 == ((void*)0) || (VAR_20->e_flags & VAR_5) == 0) {
   FUNC_5(VAR_17, "%s: not on extraction list\n", VAR_24);
   break;
  }
  FUNC_18(VAR_24, VAR_20->e_ino, VAR_7);
  break;



 case 'e':
  if (FUNC_17(VAR_25, "extract", FUNC_16(VAR_25)) != 0)
   goto bad;
  FUNC_2();
  FUNC_3();
  FUNC_13(0);
  if (VAR_8)
   FUNC_1();
  VAR_19 = 0;
  break;



 case 'h':
  if (FUNC_17(VAR_25, "help", FUNC_16(VAR_25)) != 0)
   goto bad;
 case '?':
  FUNC_5(VAR_17, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
   "Available commands are:\n",
   "\tls [arg] - list directory\n",
   "\tcd arg - change directory\n",
   "\tpwd - print current directory\n",
   "\tadd [arg] - add `arg' to list of",
   " files to be extracted\n",
   "\tdelete [arg] - delete `arg' from",
   " list of files to be extracted\n",
   "\textract - extract requested files\n",
   "\tsetmodes - set modes of requested directories\n",
   "\tquit - immediately exit program\n",
   "\twhat - list dump header information\n",
   "\tverbose - toggle verbose flag",
   " (useful with ``ls'')\n",
   "\thelp or `?' - print this list\n",
   "If no `arg' is supplied, the current",
   " directory is used\n");
  break;



 case 'l':
  if (FUNC_17(VAR_25, "ls", FUNC_16(VAR_25)) != 0)
   goto bad;
  FUNC_12(VAR_24, VAR_23);
  break;



 case 'p':
  if (FUNC_17(VAR_25, "pwd", FUNC_16(VAR_25)) != 0)
   goto bad;
  if (VAR_23[1] == '\0')
   FUNC_5(VAR_17, "/\n");
  else
   FUNC_5(VAR_17, "%s\n", &VAR_23[1]);
  break;



 case 'q':
  if (FUNC_17(VAR_25, "quit", FUNC_16(VAR_25)) != 0)
   goto bad;
  return;
 case 'x':
  if (FUNC_17(VAR_25, "xit", FUNC_16(VAR_25)) != 0)
   goto bad;
  return;



 case 'v':
  if (FUNC_17(VAR_25, "verbose", FUNC_16(VAR_25)) != 0)
   goto bad;
  if (VAR_18) {
   FUNC_5(VAR_17, "verbose mode off\n");
   VAR_18 = 0;
   break;
  }
  FUNC_5(VAR_17, "verbose mode on\n");
  VAR_18++;
  break;



 case 's':
  if (FUNC_17(VAR_25, "setmodes", FUNC_16(VAR_25)) != 0)
   goto bad;
  FUNC_13(VAR_1);
  break;



 case 'w':
  if (FUNC_17(VAR_25, "what", FUNC_16(VAR_25)) != 0)
   goto bad;
  FUNC_11();
  break;



 case 'D':
  if (FUNC_17(VAR_25, "Debug", FUNC_16(VAR_25)) != 0)
   goto bad;
  if (VAR_8) {
   FUNC_5(VAR_17, "debugging mode off\n");
   VAR_8 = 0;
   break;
  }
  FUNC_5(VAR_17, "debugging mode on\n");
  VAR_8++;
  break;



 default:
 bad:
  FUNC_5(VAR_17, "%s: unknown command; type ? for help\n", VAR_25);
  break;
 }
 goto loop;
}
