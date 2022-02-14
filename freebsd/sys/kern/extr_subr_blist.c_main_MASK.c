
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct sbuf {int dummy; } ;
typedef int intmax_t ;
typedef scalar_t__ daddr_t ;
typedef int buf ;
typedef TYPE_1__* blist_t ;
struct TYPE_10__ {scalar_t__ bl_radix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,long long,int) ;
 int FUNC_4 (TYPE_1__*,long long,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__**,int,int,int ) ;
 int FUNC_7 (TYPE_1__*,struct sbuf*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (char*,int,int ) ;
 int FUNC_11 (int ,char*,char const*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (struct sbuf*) ;
 int FUNC_15 (struct sbuf*) ;
 int FUNC_16 (struct sbuf*) ;
 struct sbuf* FUNC_17 () ;
 int FUNC_18 (char*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_19 (char const*,int *,int ) ;

int
FUNC_20(int VAR_6, char **VAR_7)
{
 int VAR_8 = VAR_1 * VAR_0;
 int VAR_9;
 blist_t VAR_10;
 struct sbuf *VAR_11;

 for (VAR_9 = 1; VAR_9 < VAR_6; ++VAR_9) {
  const char *VAR_12 = VAR_7[VAR_9];
  if (*VAR_12 != '-') {
   VAR_8 = FUNC_19(VAR_12, ((void*)0), 0);
   continue;
  }
  VAR_12 += 2;
  FUNC_11(VAR_3, "Bad option: %s\n", VAR_12 - 2);
  FUNC_8(1);
 }
 VAR_10 = FUNC_2(VAR_8, VAR_2);
 FUNC_4(VAR_10, 0, VAR_8);

 for (;;) {
  char VAR_13[1024];
  long long VAR_14 = 0;
  int VAR_15 = 0, VAR_16 = 0;

  FUNC_12("%lld/%lld/%lld> ", (long long)FUNC_1(VAR_10),
      (long long)VAR_8, (long long)VAR_10->bl_radix);
  FUNC_9(VAR_5);
  if (FUNC_10(VAR_13, sizeof(VAR_13), VAR_4) == ((void*)0))
   break;
  switch(VAR_13[0]) {
  case 'r':
   if (FUNC_18(VAR_13 + 1, "%d", &VAR_15) == 1) {
    FUNC_6(&VAR_10, VAR_15, 1, VAR_2);
   } else {
    FUNC_12("?\n");
   }
  case 'p':
   FUNC_5(VAR_10);
   break;
  case 's':
   VAR_11 = FUNC_17();
   FUNC_7(VAR_10, VAR_11);
   FUNC_16(VAR_11);
   FUNC_12("%s", FUNC_14(VAR_11));
   FUNC_15(VAR_11);
   break;
  case 'a':
   if (FUNC_18(VAR_13 + 1, "%d%d", &VAR_15, &VAR_16) == 2) {
    daddr_t VAR_17 = FUNC_0(VAR_10, &VAR_15, VAR_16);
    FUNC_12("    R=%08llx, c=%08d\n",
        (long long)VAR_17, VAR_15);
   } else {
    FUNC_12("?\n");
   }
   break;
  case 'f':
   if (FUNC_18(VAR_13 + 1, "%llx %d", &VAR_14, &VAR_15) == 2) {
    FUNC_4(VAR_10, VAR_14, VAR_15);
   } else {
    FUNC_12("?\n");
   }
   break;
  case 'l':
   if (FUNC_18(VAR_13 + 1, "%llx %d", &VAR_14, &VAR_15) == 2) {
    FUNC_12("    n=%jd\n",
        (intmax_t)FUNC_3(VAR_10, VAR_14, VAR_15));
   } else {
    FUNC_12("?\n");
   }
   break;
  case '?':
  case 'h':
   FUNC_13(
       "p          -print\n"
       "s          -stats\n"
       "a %d %d    -allocate\n"
       "f %x %d    -free\n"
       "l %x %d    -fill\n"
       "r %d       -resize\n"
       "h/?        -help\n"
       "q          -quit"
   );
   break;
  case 'q':
   break;
  default:
   FUNC_12("?\n");
   break;
  }
  if (VAR_13[0] == 'q')
   break;
 }
 return (0);
}
