
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 char* FUNC_3 () ;
 char* FUNC_4 (char*) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 () ;
 int VAR_12 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 char* VAR_13 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int *,char*,int ,int ,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 long FUNC_10 (char*,char**,int ) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (char*,char**,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(int VAR_17, char *VAR_18)
{
 char *VAR_19;
 long VAR_20;

 switch (VAR_17) {
 case 'z':
  FUNC_8(VAR_18);
  break;
 case 'h':
  FUNC_5();
  break;
 case 'V':
  FUNC_2(VAR_16, "%s %s\n", VAR_13, FUNC_3());
  FUNC_1(0);
 case 'e':
  FUNC_7(1);
  break;
 case 'v':
  VAR_12++;
  break;
 case 'd':
  VAR_11++;
  FUNC_7(1);
  FUNC_13(VAR_11 - 1);
  break;
 case 'C':
  VAR_5 = VAR_18;
  break;
 case 'P':
  VAR_6 = FUNC_11(VAR_18, 0, 0);
  if (VAR_6 < 0)
   FUNC_0("cannot resolve CA port %d", VAR_6);
  break;
 case 'D':
  VAR_7 = VAR_0;
  break;
 case 'L':
  VAR_7 = VAR_2;
  break;
 case 'G':
  VAR_7 = VAR_1;
  break;
 case 't':
  VAR_4 = 0;
  VAR_20 = FUNC_10(VAR_18, &VAR_19, 0);
  if (VAR_4 || (VAR_19 && *VAR_19 != '\0') || VAR_20 <= 0 ||
      VAR_20 > VAR_3)
   FUNC_0("Invalid timeout \"%s\".  Timeout requires a "
    "positive integer value < %d.", VAR_18, VAR_3);
  else {
   FUNC_6((int)VAR_20);
   VAR_10 = (int)VAR_20;
  }
  break;
 case 's':

  if (FUNC_9(VAR_5, VAR_6, &VAR_15, VAR_18,
    VAR_2, 0, ((void*)0)) < 0)
   FUNC_0("cannot resolve SM destination port %s",
    VAR_18);
  VAR_9 = &VAR_15;
  break;
 case 'K':
  VAR_14 = 1;
  break;
 case 'y':
  VAR_4 = 0;
  VAR_8 = FUNC_12(VAR_18, &VAR_19, 0);
  if (VAR_4 || *VAR_19 != '\0') {
   VAR_4 = 0;
   VAR_8 = FUNC_12(FUNC_4("M_Key: "), &VAR_19, 0);
   if (VAR_4 || *VAR_19 != '\0') {
    FUNC_0("Bad M_Key");
   }
                }
                break;
 default:
  return -1;
 }

 return 0;
}
