
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int es_nvlangroups; int es_nports; } ;
struct cfg {char* controlfile; scalar_t__ fd; int mode; TYPE_1__ info; int unit; TYPE_1__ conf; int verbose; int mediatypes; } ;
typedef int cfg ;
struct TYPE_4__ {char* name; int mode; int args; int (* f ) (struct cfg*,int,char**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 int FUNC_0 (struct cfg*,int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,TYPE_1__*) ;
 int FUNC_6 (struct cfg*,int const) ;
 scalar_t__ FUNC_7 (char*,int ) ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (struct cfg*) ;
 int FUNC_9 (char*,char*,int,char*) ;
 int FUNC_10 (struct cfg*,char*) ;
 int FUNC_11 (struct cfg*,char*) ;
 int FUNC_12 (char*,char*,int *) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (struct cfg*,int,char**) ;
 int FUNC_15 (struct cfg*,char**) ;

int
FUNC_16(int VAR_9, char *VAR_10[])
{
 int VAR_11;
 struct cfg VAR_12;
 int VAR_13;

 FUNC_0(&VAR_12, sizeof(VAR_12));
 VAR_12.controlfile = "/dev/etherswitch0";
 while ((VAR_11 = FUNC_4(VAR_9, VAR_10, "f:mv?")) != -1)
  switch(VAR_11) {
  case 'f':
   VAR_12.controlfile = VAR_7;
   break;
  case 'm':
   VAR_12.mediatypes++;
   break;
  case 'v':
   VAR_12.verbose++;
   break;
  case '?':

  default:
   FUNC_15(&VAR_12, VAR_10);
  }
 VAR_9 -= VAR_8;
 VAR_10 += VAR_8;
 VAR_12.fd = FUNC_7(VAR_12.controlfile, VAR_5);
 if (VAR_12.fd < 0)
  FUNC_2(VAR_1, "Can't open control file: %s", VAR_12.controlfile);
 if (FUNC_5(VAR_12.fd, VAR_4, &VAR_12.info) != 0)
  FUNC_2(VAR_0, "ioctl(IOETHERSWITCHGETINFO)");
 if (FUNC_5(VAR_12.fd, VAR_3, &VAR_12.conf) != 0)
  FUNC_2(VAR_0, "ioctl(IOETHERSWITCHGETCONF)");
 if (VAR_9 == 0) {
  FUNC_8(&VAR_12);
  return (0);
 }
 VAR_12.mode = 132;
 while (VAR_9 > 0) {
  switch(VAR_12.mode) {
  case 132:
   if (FUNC_13(VAR_10[0], "info") == 0) {
    FUNC_8(&VAR_12);
   } else if (FUNC_12(VAR_10[0], "port%d", &VAR_12.unit) == 1) {
    if (VAR_12.unit < 0 || VAR_12.unit >= VAR_12.info.es_nports)
     FUNC_3(VAR_2, "port unit must be between 0 and %d", VAR_12.info.es_nports - 1);
    FUNC_6(&VAR_12, 130);
   } else if (FUNC_12(VAR_10[0], "vlangroup%d", &VAR_12.unit) == 1) {
    if (VAR_12.unit < 0 || VAR_12.unit >= VAR_12.info.es_nvlangroups)
     FUNC_3(VAR_2,
         "vlangroup unit must be between 0 and %d",
         VAR_12.info.es_nvlangroups - 1);
    FUNC_6(&VAR_12, 128);
   } else if (FUNC_13(VAR_10[0], "config") == 0) {
    FUNC_6(&VAR_12, 133);
   } else if (FUNC_13(VAR_10[0], "phy") == 0) {
    FUNC_6(&VAR_12, 131);
   } else if (FUNC_13(VAR_10[0], "reg") == 0) {
    FUNC_6(&VAR_12, 129);
   } else if (FUNC_13(VAR_10[0], "help") == 0) {
    FUNC_15(&VAR_12, VAR_10);
   } else if (FUNC_13(VAR_10[0], "atu") == 0) {
    FUNC_6(&VAR_12, 134);
   } else {
    FUNC_3(VAR_2, "Unknown command \"%s\"", VAR_10[0]);
   }
   break;
  case 130:
  case 133:
  case 128:
  case 134:
   for(VAR_13=0; VAR_6[VAR_13].name != ((void*)0); VAR_13++) {
    int VAR_14;
    if (VAR_12.mode == VAR_6[VAR_13].mode &&
        FUNC_13(VAR_10[0], VAR_6[VAR_13].name) == 0) {
     if ((VAR_6[VAR_13].args != -1) &&
         (VAR_9 < (VAR_6[VAR_13].args + 1))) {
      FUNC_9("%s needs %d argument%s\n",
          VAR_6[VAR_13].name, VAR_6[VAR_13].args,
          (VAR_6[VAR_13].args==1)?"":",");
      break;
     }

     VAR_14 = (VAR_6[VAR_13].f)(&VAR_12, VAR_9, VAR_10);


     if (VAR_14 == -1) {
      VAR_9 = 0;
      break;
     }


     if (VAR_14 == 0)
      VAR_14 = VAR_6[VAR_13].args;

     VAR_9 -= VAR_14;
     VAR_10 += VAR_14;
     break;
    }
   }
   if (VAR_6[VAR_13].name == ((void*)0)) {
    FUNC_6(&VAR_12, 132);
    continue;
   }
   break;
  case 129:
   if (FUNC_11(&VAR_12, VAR_10[0]) != 0) {
    FUNC_6(&VAR_12, 132);
    continue;
   }
   break;
  case 131:
   if (FUNC_10(&VAR_12, VAR_10[0]) != 0) {
    FUNC_6(&VAR_12, 132);
    continue;
   }
   break;
  }
  VAR_9--;
  VAR_10++;
 }

 FUNC_6(&VAR_12, 132);
 FUNC_1(VAR_12.fd);
 return (0);
}
