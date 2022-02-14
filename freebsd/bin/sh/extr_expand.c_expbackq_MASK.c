
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union node {int dummy; } node ;
struct worddest {int dummy; } ;
struct backcmd {char* buf; scalar_t__ nleft; scalar_t__ fd; scalar_t__ jp; } ;


 char* VAR_0 ;
 char const VAR_1 ;
 int FUNC_0 (int,char*) ;
 char VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char,int,char*,struct worddest*) ;
 char FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (union node*,struct backcmd*) ;
 int VAR_11 ;
 char* VAR_12 ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 () ;
 char* FUNC_11 () ;
 int FUNC_12 (scalar_t__,char*,int) ;
 char* FUNC_13 () ;
 int * FUNC_14 (char const*,char) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (scalar_t__,int*) ;

__attribute__((used)) static void
FUNC_17(union node *VAR_13, int VAR_14, int VAR_15, struct worddest *VAR_16)
{
 struct backcmd VAR_17;
 int VAR_18;
 char VAR_19[128];
 char *VAR_20;
 char *VAR_21 = VAR_12;
 char VAR_22;
 char const *VAR_23 = VAR_14? VAR_3 : VAR_0;
 int VAR_24 = VAR_15 & (VAR_6 | VAR_5);
 size_t VAR_25;
 const char *VAR_26;
 int VAR_27;

 VAR_8;
 VAR_20 = FUNC_9(VAR_21);
 FUNC_8(VAR_13, &VAR_17);
 FUNC_15(VAR_20, VAR_21);

 VAR_20 = VAR_17.buf;
 VAR_27 = VAR_21 - FUNC_13();
 VAR_25 = 0;
 if (!VAR_14 && VAR_15 & VAR_7)
  VAR_26 = FUNC_10() ? FUNC_11() : " \t\n";
 else
  VAR_26 = "";

 for (;;) {
  if (--VAR_17.nleft < 0) {
   if (VAR_17.fd < 0)
    break;
   while ((VAR_18 = FUNC_12(VAR_17.fd, VAR_19, sizeof VAR_19)) < 0 && VAR_10 == VAR_4)
    ;
   FUNC_4(("expbackq: read returns %d\n", VAR_18));
   if (VAR_18 <= 0)
    break;
   VAR_20 = VAR_19;
   VAR_17.nleft = VAR_18 - 1;
  }
  VAR_22 = *VAR_20++;
  if (VAR_22 == '\0')
   continue;
  if (VAR_25 > 0 && VAR_22 != '\n') {
   FUNC_1('\n', VAR_15, VAR_21, VAR_16);
   VAR_25 = 0;
  }
  if (FUNC_14(VAR_26, VAR_22) != ((void*)0)) {
   if (VAR_22 == '\n')
    VAR_25++;
   else
    FUNC_1(VAR_22, VAR_15, VAR_21, VAR_16);
  } else {
   FUNC_0(2, VAR_21);
   if (VAR_24 && VAR_23[(int)VAR_22] == VAR_1)
    FUNC_5(VAR_2, VAR_21);
   FUNC_5(VAR_22, VAR_21);
  }
 }
 while (VAR_21 > FUNC_13() + VAR_27 && FUNC_2(VAR_21) == '\n')
  FUNC_3(VAR_21);

 if (VAR_17.fd >= 0)
  FUNC_7(VAR_17.fd);
 if (VAR_17.buf)
  FUNC_6(VAR_17.buf);
 if (VAR_17.jp) {
  VAR_20 = FUNC_9(VAR_21);
  VAR_11 = FUNC_16(VAR_17.jp, (int *)((void*)0));
  FUNC_15(VAR_20, VAR_21);
 }
 FUNC_4(("expbackq: done\n"));
 VAR_12 = VAR_21;
 VAR_9;
}
