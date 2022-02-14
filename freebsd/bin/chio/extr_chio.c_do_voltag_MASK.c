
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int16_t ;
struct TYPE_2__ {void* cv_serial; scalar_t__ cv_volid; } ;
struct changer_set_voltag_request {int csvr_flags; TYPE_1__ csvr_voltag; void* csvr_addr; int csvr_type; } ;
typedef int csvr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (struct changer_set_voltag_request*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int ,char*,char*,char const*) ;
 int FUNC_4 (int,char**,char*) ;
 char* FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int ,struct changer_set_voltag_request*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*) ;
 int VAR_9 ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char const*) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_10, int VAR_11, char **VAR_12)
{
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16;
 struct changer_set_voltag_request VAR_17;

 FUNC_1(&VAR_17, sizeof(VAR_17));

 VAR_7 = VAR_8 = 1;
 while ((VAR_16 = FUNC_4(VAR_11, VAR_12, "fca")) != -1) {
  switch (VAR_16) {
  case 'f':
   VAR_13 = 1;
   break;
  case 'c':
   VAR_14 = 1;
   break;
  case 'a':
   VAR_15 = 1;
   break;
  default:
   FUNC_10("%s: bad option", VAR_10);
   goto usage;
  }
 }

 VAR_11 -= VAR_7;
 VAR_12 += VAR_7;

 if (VAR_11 < 2) {
  FUNC_10("%s: missing element specification", VAR_10);
  goto usage;
 }

 VAR_17.csvr_type = FUNC_7(VAR_12[0]);
 VAR_17.csvr_addr = (u_int16_t)FUNC_0(VAR_12[1]);

 if (!VAR_14) {
  if (VAR_11 < 3 || VAR_11 > 4) {
   FUNC_10("%s: missing argument", VAR_10);
   goto usage;
  }

  if (VAR_13)
   VAR_17.csvr_flags = VAR_3;
  else
   VAR_17.csvr_flags = VAR_4;

  if (FUNC_9(VAR_12[2]) > sizeof(VAR_17.csvr_voltag.cv_volid)) {
   FUNC_10("%s: volume label too long", VAR_10);
   goto usage;
  }

  FUNC_8((char *)VAR_17.csvr_voltag.cv_volid, VAR_12[2],
         sizeof(VAR_17.csvr_voltag.cv_volid));

  if (VAR_11 == 4) {
   VAR_17.csvr_voltag.cv_serial = (u_int16_t)FUNC_0(VAR_12[3]);
  }
 } else {
  if (VAR_11 != 2) {
   FUNC_10("%s: unexpected argument", VAR_10);
   goto usage;
  }
  VAR_17.csvr_flags = VAR_2;
 }

 if (VAR_15) {
  VAR_17.csvr_flags |= VAR_1;
 }

 if (FUNC_6(VAR_5, VAR_0, &VAR_17))
  FUNC_2(1, "%s: CHIOSETVOLTAG", VAR_6);

 return 0;
 usage:
 (void) FUNC_3(VAR_9,
         "usage: %s %s [-fca] <element> [<voltag> [<vsn>] ]\n",
         FUNC_5(), VAR_10);
 return 1;
}
