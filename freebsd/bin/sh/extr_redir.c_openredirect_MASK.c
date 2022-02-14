
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t dupfd; } ;
struct TYPE_3__ {int fd; int type; char* expfname; } ;
union node {TYPE_2__ ndup; TYPE_1__ nfile; } ;
struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_9 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,struct stat*) ;
 int FUNC_6 (char const*,int,...) ;
 int FUNC_7 (union node*) ;
 int FUNC_8 (char const*,struct stat*) ;
 char* FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(union node *VAR_10, char VAR_11[10])
{
 struct stat VAR_12;
 int VAR_13 = VAR_10->nfile.fd;
 const char *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_11[VAR_13] = 0;
 switch (VAR_10->nfile.type) {
 case 134:
  VAR_14 = VAR_10->nfile.expfname;
  if ((VAR_15 = FUNC_6(VAR_14, VAR_5)) < 0)
   FUNC_4("cannot open %s: %s", VAR_14, FUNC_9(VAR_9));
  break;
 case 132:
  VAR_14 = VAR_10->nfile.expfname;
  if ((VAR_15 = FUNC_6(VAR_14, VAR_6|VAR_3, 0666)) < 0)
   FUNC_4("cannot create %s: %s", VAR_14, FUNC_9(VAR_9));
  break;
 case 130:
  if (VAR_0) {
   VAR_14 = VAR_10->nfile.expfname;
   if (FUNC_8(VAR_14, &VAR_12) == -1) {
    if ((VAR_15 = FUNC_6(VAR_14, VAR_8|VAR_3|VAR_4, 0666)) < 0)
     FUNC_4("cannot create %s: %s", VAR_14, FUNC_9(VAR_9));
   } else if (!FUNC_0(VAR_12.st_mode)) {
    if ((VAR_15 = FUNC_6(VAR_14, VAR_8, 0666)) < 0)
     FUNC_4("cannot create %s: %s", VAR_14, FUNC_9(VAR_9));
    if (FUNC_5(VAR_15, &VAR_12) != -1 && FUNC_0(VAR_12.st_mode)) {
     FUNC_2(VAR_15);
     FUNC_4("cannot create %s: %s", VAR_14,
         FUNC_9(VAR_1));
    }
   } else
    FUNC_4("cannot create %s: %s", VAR_14,
        FUNC_9(VAR_1));
   break;
  }

 case 135:
  VAR_14 = VAR_10->nfile.expfname;
  if ((VAR_15 = FUNC_6(VAR_14, VAR_8|VAR_3|VAR_7, 0666)) < 0)
   FUNC_4("cannot create %s: %s", VAR_14, FUNC_9(VAR_9));
  break;
 case 136:
  VAR_14 = VAR_10->nfile.expfname;
  if ((VAR_15 = FUNC_6(VAR_14, VAR_8|VAR_3|VAR_2, 0666)) < 0)
   FUNC_4("cannot create %s: %s", VAR_14, FUNC_9(VAR_9));
  break;
 case 129:
 case 133:
  if (VAR_10->ndup.dupfd >= 0) {
   if (VAR_11[VAR_10->ndup.dupfd])
    VAR_11[VAR_13] = 1;
   else {
    if (FUNC_3(VAR_10->ndup.dupfd, VAR_13) < 0)
     FUNC_4("%d: %s", VAR_10->ndup.dupfd,
       FUNC_9(VAR_9));
   }
  } else {
   FUNC_2(VAR_13);
  }
  return;
 case 131:
 case 128:
  VAR_15 = FUNC_7(VAR_10);
  break;
 default:
  FUNC_1();
 }
 if (VAR_15 != VAR_13) {
  if (FUNC_3(VAR_15, VAR_13) == -1) {
   VAR_16 = VAR_9;
   FUNC_2(VAR_15);
   FUNC_4("%d: %s", VAR_13, FUNC_9(VAR_16));
  }
  FUNC_2(VAR_15);
 }
}
