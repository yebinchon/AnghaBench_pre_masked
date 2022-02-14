
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int ,int,int*) ;

void
FUNC_6(FILE *VAR_9, short VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;

 if (VAR_11 == 0) {
  FUNC_2("0", VAR_9);
  return;
 }

 switch (VAR_10) {
 case 132:
 case 128:
  if (!FUNC_5(VAR_9, VAR_5, VAR_11, &VAR_13))
   FUNC_0(VAR_9, "%#x", VAR_13);
  else if (VAR_13 != 0)
   FUNC_0(VAR_9, "|%#x", VAR_13);
  break;
 case 129:
  if (!FUNC_5(VAR_9, VAR_8, VAR_11, &VAR_13))
   FUNC_0(VAR_9, "%#x", VAR_13);
  else if (VAR_13 != 0)
   FUNC_0(VAR_9, "|%#x", VAR_13);
  break;
 case 134:
 case 133:
  if (!FUNC_5(VAR_9, VAR_4, VAR_11, &VAR_13))
   FUNC_0(VAR_9, "%#x", VAR_13);
  else if (VAR_13 != 0)
   FUNC_0(VAR_9, "|%#x", VAR_13);
  break;
 case 131:
  if (!FUNC_5(VAR_9, VAR_6, VAR_11, &VAR_13))
   FUNC_0(VAR_9, "%#x", VAR_13);
  else if (VAR_13 != 0)
   FUNC_0(VAR_9, "|%#x", VAR_13);
  break;
 case 130: {
  unsigned int VAR_14, VAR_15;

  VAR_14 = VAR_11 & VAR_0;
  VAR_15 = VAR_11 & VAR_1;

  if (VAR_11 & VAR_3) {
   FUNC_2("NOTE_TRIGGER", VAR_9);
   if (VAR_11 == VAR_3)
    return;
   FUNC_1('|', VAR_9);
  }
  if (VAR_14 != VAR_2 || VAR_11 & VAR_3) {
   FUNC_0(VAR_9, "%s|%#x",
       FUNC_3(VAR_7, VAR_14), VAR_15);
  } else {
   FUNC_4(VAR_9, VAR_15, VAR_12);
  }
  break;
 }
 default:
  FUNC_4(VAR_9, VAR_11, VAR_12);
  break;
 }
}
