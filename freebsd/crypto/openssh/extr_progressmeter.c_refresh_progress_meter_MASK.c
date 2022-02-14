
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double off_t ;


 double VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,int) ;
 double VAR_4 ;
 float* VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 char* VAR_8 ;
 int FUNC_1 (char*,int,double) ;
 int FUNC_2 (char*,int,float) ;
 double VAR_9 ;
 double FUNC_3 () ;
 int FUNC_4 (char*,int,char*,...) ;
 scalar_t__ VAR_10 ;
 double VAR_11 ;
 float VAR_12 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int VAR_13 ;
 int VAR_14 ;

void
FUNC_7(void)
{
 char VAR_15[VAR_1 + 1];
 off_t VAR_16;
 double VAR_17, VAR_18;
 int VAR_19;
 off_t VAR_20;
 int VAR_21;
 int VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26;
 int VAR_27;

 VAR_16 = *VAR_5 - (VAR_6 ? VAR_6 : VAR_12);
 VAR_6 = *VAR_5;
 VAR_18 = FUNC_3();
 VAR_20 = VAR_7 - VAR_6;

 if (VAR_20 > 0)
  VAR_17 = VAR_18 - VAR_9;
 else {
  VAR_17 = VAR_18 - VAR_11;

  VAR_16 = VAR_7 - VAR_12;
  VAR_4 = 0;
 }


 if (VAR_17 != 0)
  VAR_21 = (VAR_16 / VAR_17);
 else
  VAR_21 = VAR_16;


 if (VAR_4 != 0) {
  VAR_4 = (VAR_4 * 0.9) +
      (VAR_21 * (1.0 - 0.9));
 } else
  VAR_4 = VAR_21;


 VAR_15[0] = '\0';
 VAR_27 = VAR_14 - 35;
 if (VAR_27 > 0) {
  VAR_26 = FUNC_4(VAR_15, VAR_27 + 1, "\r%s", VAR_8);
  if (VAR_26 < 0)
   VAR_26 = 0;
  if (VAR_26 >= VAR_27 + 1)
   VAR_26 = VAR_27;
  for (VAR_25 = VAR_26; VAR_25 < VAR_27; VAR_25++)
   VAR_15[VAR_25] = ' ';
  VAR_15[VAR_27] = '\0';
 }


 if (VAR_7 == 0 || VAR_6 == VAR_7)
  VAR_19 = 100;
 else
  VAR_19 = ((float)VAR_6 / VAR_7) * 100;
 FUNC_4(VAR_15 + FUNC_6(VAR_15), VAR_14 - FUNC_6(VAR_15),
     " %3d%% ", VAR_19);


 FUNC_2(VAR_15 + FUNC_6(VAR_15), VAR_14 - FUNC_6(VAR_15),
     VAR_6);
 FUNC_5(VAR_15, " ", VAR_14);


 FUNC_1(VAR_15 + FUNC_6(VAR_15), VAR_14 - FUNC_6(VAR_15),
     (off_t)VAR_4);
 FUNC_5(VAR_15, "/s ", VAR_14);


 if (!VAR_16)
  VAR_10 += VAR_17;
 else
  VAR_10 = 0;

 if (VAR_10 >= VAR_2)
  FUNC_5(VAR_15, "- stalled -", VAR_14);
 else if (VAR_4 == 0 && VAR_20)
  FUNC_5(VAR_15, "  --:-- ETA", VAR_14);
 else {
  if (VAR_20 > 0)
   VAR_24 = VAR_20 / VAR_4;
  else
   VAR_24 = VAR_17;

  VAR_22 = VAR_24 / 3600;
  VAR_24 -= VAR_22 * 3600;
  VAR_23 = VAR_24 / 60;
  VAR_24 -= VAR_23 * 60;

  if (VAR_22 != 0)
   FUNC_4(VAR_15 + FUNC_6(VAR_15), VAR_14 - FUNC_6(VAR_15),
       "%d:%02d:%02d", VAR_22, VAR_23, VAR_24);
  else
   FUNC_4(VAR_15 + FUNC_6(VAR_15), VAR_14 - FUNC_6(VAR_15),
       "  %02d:%02d", VAR_23, VAR_24);

  if (VAR_20 > 0)
   FUNC_5(VAR_15, " ETA", VAR_14);
  else
   FUNC_5(VAR_15, "    ", VAR_14);
 }

 FUNC_0(VAR_13, VAR_3, VAR_15, VAR_14 - 1);
 VAR_9 = VAR_18;
}
