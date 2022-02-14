
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {scalar_t__ type; } ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (char const*,struct sshkey*,int*,int*,int,int,char const*,struct sshbuf*) ;
 int FUNC_4 (int,char*,char const*) ;
 int FUNC_5 (int,char*,char const*,int ) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,int ,int ,int) ;
 int FUNC_9 (char const*,int ) ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int ,int *,int ,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct sshbuf*) ;
 struct sshbuf* FUNC_14 () ;
 int FUNC_15 (struct sshkey*) ;
 int FUNC_16 (int,struct sshbuf*) ;
 int FUNC_17 (int,scalar_t__,int *,struct sshkey**,int *) ;
 int VAR_11 ;
 int FUNC_18 (char*,char*) ;
 int * FUNC_19 (char const*,char) ;
 int FUNC_20 () ;

int
FUNC_21(int VAR_12, char **VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 int VAR_20 = -1, VAR_21 = -1;
 int VAR_22 = 0, VAR_23 = 0;
 const char *VAR_24 = ((void*)0), *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);
 struct sshkey *VAR_27 = ((void*)0);
 struct sshbuf *VAR_28 = ((void*)0);

 FUNC_11(VAR_11, ((void*)0), VAR_7, 0);
 while ((VAR_14 = FUNC_6(VAR_12, VAR_13, "hcdrvD:f:K:k:i:")) != -1) {
  switch (VAR_14) {
  case 'h':
   FUNC_20();
   return 0;
  case 'c':
   VAR_17 = 1;
   break;
  case 'd':
   VAR_18 = 1;
   break;
  case 'r':
   VAR_19 = 1;
   break;
  case 'v':
   VAR_8 = 1;
   break;

  case 'D':
   if (FUNC_18(VAR_9, "s2c") == 0)
    VAR_21 = VAR_3;
   else if (FUNC_18(VAR_9, "c2s") == 0)
    VAR_21 = VAR_0;
   else
    FUNC_1("Invalid direction (-D)");
   break;
  case 'f':
   VAR_26 = VAR_9;
   break;
  case 'K':
   VAR_24 = VAR_9;
   break;
  case 'k':
   VAR_25 = VAR_9;
   break;
  case 'i':
   VAR_20 = FUNC_0(VAR_9);
   if (VAR_20 < 0)
    FUNC_1("Invalid packet index");
   break;
  default:
   FUNC_1("unsupported flag");
  }
 }
 VAR_12 -= VAR_10;
 VAR_13 += VAR_10;

 FUNC_8(VAR_13[0], VAR_8 ? VAR_5 : VAR_6,
     VAR_4, 1);


 if ((VAR_17 + VAR_18 + VAR_19) != 1)
  FUNC_1("Must select one mode: -c, -d or -r");

 if (VAR_24 == ((void*)0) || !FUNC_7(VAR_24) || FUNC_19(VAR_24, ',') != ((void*)0))
  FUNC_1("Missing or invalid kex type (-K flag)");

 if (VAR_25 == ((void*)0))
  FUNC_1("Missing private key (-k flag)");
 if ((VAR_15 = FUNC_9(VAR_25, VAR_2)) == -1)
  FUNC_4(1, "open %s", VAR_25);
 if ((VAR_16 = FUNC_17(VAR_15, VAR_1, ((void*)0),
     &VAR_27, ((void*)0))) != 0)
  FUNC_5(1, "Unable to load key %s: %s", VAR_25, FUNC_12(VAR_16));
 FUNC_2(VAR_15);


 if (VAR_27 == ((void*)0) || VAR_27->type == VAR_1)
  FUNC_1("Invalid key file (-k flag)");


 if (VAR_19) {
  if (VAR_20 == -1 || VAR_21 == -1 || VAR_26 == ((void*)0))
   FUNC_1("Replace (-r) mode must specify direction "
       "(-D) packet index (-i) and data path (-f)");
  if ((VAR_15 = FUNC_9(VAR_26, VAR_2)) == -1)
   FUNC_4(1, "open %s", VAR_26);
  VAR_28 = FUNC_14();
  if ((VAR_16 = FUNC_16(VAR_15, VAR_28)) != 0)
   FUNC_5(1, "read %s: %s", VAR_26, FUNC_12(VAR_16));
  FUNC_2(VAR_15);
 }


 if (VAR_18) {
  if (VAR_20 == -1 || VAR_21 == -1 || VAR_26 == ((void*)0))
   FUNC_1("Dump (-d) mode must specify direction "
       "(-D), packet index (-i) and data path (-f)");
 }



 FUNC_3(VAR_24, VAR_27, &VAR_23, &VAR_22,
     VAR_21, VAR_20,
     VAR_18 ? VAR_26 : ((void*)0),
     VAR_19 ? VAR_28 : ((void*)0));
 FUNC_15(VAR_27);
 FUNC_13(VAR_28);

 if (VAR_17) {
  FUNC_10("S2C: %d\n", VAR_22);
  FUNC_10("C2S: %d\n", VAR_23);
 }

 return 0;
}
