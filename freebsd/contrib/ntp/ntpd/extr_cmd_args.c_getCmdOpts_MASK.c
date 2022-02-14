
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* FUNC_1 (int ) ;
 long VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (int ) ;
 char** FUNC_3 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 void* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 void* VAR_35 ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int,int) ;
 scalar_t__ VAR_36 ;
 char* VAR_37 ;
 int VAR_38 ;
 char** VAR_39 ;
 int VAR_40 ;
 char* FUNC_6 (char*,size_t) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 void* VAR_41 ;
 int FUNC_9 (int ,char*,long) ;
 int FUNC_10 (char*) ;
 char* VAR_42 ;
 long VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int FUNC_11 (int ,int) ;
 void* VAR_46 ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_47 ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int ,int,double,int *) ;
 int FUNC_15 (char const*,scalar_t__,int) ;
 int FUNC_16 (char const*,char*,double*) ;
 int FUNC_17 (int ,char*) ;
 int VAR_48 ;
 scalar_t__ FUNC_18 (char const*) ;
 char* FUNC_19 (char*,char) ;
 char* VAR_49 ;

void
FUNC_20(
 int VAR_50,
 char ** VAR_51
 )
{
 extern const char *VAR_52;
 int VAR_53;




 VAR_53 = 0;

 if (VAR_44 && VAR_45) {
  if (FUNC_0( VAR_8 ))
   VAR_45 = 0;
  else if (FUNC_0( VAR_9 ))
   VAR_44 = 0;
 } else if (!VAR_44 && !VAR_45) {
  FUNC_12(VAR_12, "Neither IPv4 nor IPv6 networking detected, fatal.");
  FUNC_8(1);
 } else if (FUNC_0( VAR_8 ) && !VAR_44)
  FUNC_12(VAR_13, "-4/--ipv4 ignored, IPv4 networking not found.");
 else if (FUNC_0( VAR_9 ) && !VAR_45)
  FUNC_12(VAR_13, "-6/--ipv6 ignored, IPv6 networking not found.");

 if (FUNC_0( VAR_1 ))
  FUNC_14(VAR_20, 1, 0., ((void*)0));
 else if (FUNC_0( VAR_0 ))
  FUNC_14(VAR_20, 0, 0., ((void*)0));

 if (FUNC_0( VAR_2 ))
  FUNC_14(VAR_21, 1, 0., ((void*)0));

 if (FUNC_0( VAR_3 )) {
  VAR_52 = FUNC_1( VAR_3 );



 }

 if (FUNC_0( VAR_5 ))
  FUNC_17(VAR_27, FUNC_1( VAR_5 ));

 if (FUNC_0( VAR_17 ))
  VAR_35 = VAR_30;

 if (FUNC_0( VAR_7 ))
  VAR_41 = VAR_30;
 if (FUNC_0( VAR_11 ))
  FUNC_10(FUNC_1( VAR_11 ));

 if (FUNC_0( VAR_18 ))
  FUNC_17(VAR_28, FUNC_1( VAR_18 ));

 if (FUNC_0( VAR_23 ))
  VAR_46 = VAR_30;

 if (FUNC_0( VAR_19 ))
  do {
   double VAR_54;
   const char *VAR_55 = FUNC_1( VAR_19 );

   if (FUNC_16(VAR_55, "%lf", &VAR_54) != 1) {
    FUNC_12(VAR_12,
     "command line broadcast delay value %s undecodable",
     VAR_55);
   } else {
    FUNC_14(VAR_22, 0, VAR_54, ((void*)0));
   }
  } while (0);

 if (FUNC_0( VAR_26 ))
  FUNC_17(VAR_29, FUNC_1( VAR_26 ));

 if (FUNC_0( VAR_31 )) {
  int VAR_56 = FUNC_2( VAR_31 );
  const char** VAR_57 = FUNC_3( VAR_31 );

  do {
   u_long VAR_58;
   const char* VAR_59 = *VAR_57++;

   VAR_58 = (int)FUNC_4(VAR_59);
   if (VAR_58 == 0 || VAR_58 > VAR_15) {
    FUNC_12(VAR_12,
        "command line trusted key %s is invalid",
        VAR_59);
   } else {
    FUNC_5(VAR_58, 1);
   }
  } while (--VAR_56 > 0);
 }
 if (FUNC_0( VAR_34 )) {
  int VAR_60;
  const char ** VAR_61;
  const char * VAR_62;

  VAR_60 = FUNC_2( VAR_34 );
  VAR_61 = FUNC_3( VAR_34 );

  do {
   VAR_62 = *VAR_61++;
   FUNC_15(VAR_62, FUNC_18(VAR_62) + 1, VAR_24);
  } while (--VAR_60 > 0);
 }

 if (FUNC_0( VAR_6 )) {
  int VAR_63 = FUNC_2( VAR_6 );
  const char** VAR_64 = FUNC_3( VAR_6 );

  do {
   const char* VAR_65 = *VAR_64++;

   FUNC_15(VAR_65, FUNC_18(VAR_65)+1,
       (u_short) (VAR_24 | VAR_4));
  } while (--VAR_63 > 0);
 }

 if (FUNC_0( VAR_25 ))
  FUNC_11(VAR_14, 600);

 if (FUNC_0( VAR_32 )) {
  long VAR_66 = VAR_16;

  if (VAR_66 >= 0)
   VAR_43 = VAR_66;
  else {
   FUNC_9(VAR_48,
    "command line interface update interval %ld must not be negative\n",
    VAR_66);
   FUNC_12(VAR_12,
    "command line interface update interval %ld must not be negative",
    VAR_66);
   VAR_53++;
  }
 }



 if (VAR_50 > 0) {
  VAR_38 = VAR_50;
  VAR_39 = VAR_51;
 }


 if (VAR_53)
  FUNC_13(&VAR_47, 2);
}
