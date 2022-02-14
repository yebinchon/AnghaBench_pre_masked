
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zi_freq; int zi_duration; scalar_t__ zi_cmd; int zi_iotype; int zi_error; void* zi_type; int zi_func; int zi_failfast; int zi_nlanes; int zi_timer; int member_0; } ;
typedef TYPE_1__ zinject_record_t ;
typedef int zfs_handle_t ;
typedef scalar_t__ err_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int * VAR_25 ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int ,int ) ;
 char* VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_12 (char*,int *,int *) ;
 int FUNC_13 (char*,TYPE_1__*,int) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,int,TYPE_1__*,int) ;
 int VAR_29 ;
 int FUNC_17 (char*,char*) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (int ,char*,int) ;
 scalar_t__ FUNC_21 (char*,char**,int) ;
 scalar_t__ FUNC_22 (char*,char*,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_23 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_24 (scalar_t__,char*,char*,int,TYPE_1__*,char*,char*) ;
 int FUNC_25 () ;
 int VAR_30 ;
 scalar_t__ FUNC_26 (int *,int *,int ) ;
 int * FUNC_27 (int *,char*,int ) ;
 scalar_t__ FUNC_28 (int *,int *,int ) ;

int
FUNC_29(int VAR_31, char **VAR_32)
{
 int VAR_33;
 char *VAR_34 = ((void*)0);
 char *VAR_35 = ((void*)0);
 char *VAR_36;
 char *VAR_37 = ((void*)0);
 char *VAR_38 = ((void*)0);
 int VAR_39 = 0;
 int VAR_40 = 0;
 int VAR_41 = 0;
 int VAR_42 = 0;
 int VAR_43 = VAR_20;
 int VAR_44 = VAR_10;
 err_type_t VAR_45 = VAR_7;
 err_type_t VAR_46 = VAR_7;
 zinject_record_t VAR_47 = { 0 };
 char VAR_48[VAR_5];
 char VAR_49[VAR_5];
 zfs_handle_t *VAR_50;
 int VAR_51 = 0;
 int VAR_52 = 0;
 int VAR_53 = 0;
 int VAR_54;
 int VAR_55 = 0;

 if ((VAR_25 = FUNC_8()) == ((void*)0)) {
  (void) FUNC_5(VAR_29, "internal error: failed to "
      "initialize ZFS library\n");
  return (1);
 }

 FUNC_9(VAR_25, VAR_0);

 if ((VAR_30 = FUNC_11(VAR_11, VAR_6)) < 0) {
  (void) FUNC_5(VAR_29, "failed to open ZFS device\n");
  return (1);
 }

 if (VAR_31 == 1) {





  if (FUNC_14() == 0) {
   (void) FUNC_15("No handlers registered.\n");
   (void) FUNC_15("Run 'zinject -h' for usage "
       "information.\n");
  }

  return (0);
 }

 while ((VAR_33 = FUNC_6(VAR_31, VAR_32,
     ":aA:b:d:D:f:Fg:qhIc:t:T:l:mr:s:e:uL:p:")) != -1) {
  switch (VAR_33) {
  case 'a':
   VAR_55 |= VAR_14;
   break;
  case 'A':
   if (FUNC_17(VAR_26, "degrade") == 0) {
    VAR_44 = VAR_8;
   } else if (FUNC_17(VAR_26, "fault") == 0) {
    VAR_44 = VAR_9;
   } else {
    (void) FUNC_5(VAR_29, "invalid action '%s': "
        "must be 'degrade' or 'fault'\n", VAR_26);
    FUNC_25();
    return (1);
   }
   break;
  case 'b':
   VAR_37 = VAR_26;
   break;
  case 'c':
   VAR_35 = VAR_26;
   break;
  case 'd':
   VAR_38 = VAR_26;
   break;
  case 'D':
   VAR_54 = FUNC_12(VAR_26, &VAR_47.zi_timer,
       &VAR_47.zi_nlanes);
   if (VAR_54 != 0) {
    (void) FUNC_5(VAR_29, "invalid i/o delay "
        "value: '%s'\n", VAR_26);
    FUNC_25();
    return (1);
   }
   break;
  case 'e':
   if (FUNC_17(VAR_26, "io") == 0) {
    VAR_41 = VAR_3;
   } else if (FUNC_17(VAR_26, "checksum") == 0) {
    VAR_41 = VAR_2;
   } else if (FUNC_17(VAR_26, "nxio") == 0) {
    VAR_41 = VAR_4;
   } else if (FUNC_17(VAR_26, "dtl") == 0) {
    VAR_41 = VAR_1;
   } else {
    (void) FUNC_5(VAR_29, "invalid error type "
        "'%s': must be 'io', 'checksum' or "
        "'nxio'\n", VAR_26);
    FUNC_25();
    return (1);
   }
   break;
  case 'f':
   VAR_47.zi_freq = FUNC_2(VAR_26);
   if (VAR_47.zi_freq < 1 || VAR_47.zi_freq > 100) {
    (void) FUNC_5(VAR_29, "frequency range must "
        "be in the range (0, 100]\n");
    return (1);
   }
   break;
  case 'F':
   VAR_47.zi_failfast = VAR_0;
   break;
  case 'g':
   VAR_52 = 1;
   VAR_47.zi_duration = (int)FUNC_21(VAR_26, &VAR_36, 10);
   if (VAR_47.zi_duration <= 0 || *VAR_36 != '\0') {
    (void) FUNC_5(VAR_29, "invalid duration '%s': "
        "must be a positive integer\n", VAR_26);
    FUNC_25();
    return (1);
   }

   VAR_47.zi_duration *= -1;
   break;
  case 'h':
   FUNC_25();
   return (0);
  case 'I':

   VAR_51 = 1;
   if (VAR_53 == 0 && VAR_52 == 0)
    VAR_47.zi_duration = 30;
   break;
  case 'l':
   VAR_39 = (int)FUNC_21(VAR_26, &VAR_36, 10);
   if (*VAR_36 != '\0') {
    (void) FUNC_5(VAR_29, "invalid level '%s': "
        "must be an integer\n", VAR_26);
    FUNC_25();
    return (1);
   }
   break;
  case 'm':
   VAR_42 = 1;
   break;
  case 'p':
   (void) FUNC_20(VAR_47.zi_func, VAR_26,
       sizeof (VAR_47.zi_func));
   VAR_47.zi_cmd = VAR_17;
   break;
  case 'q':
   VAR_40 = 1;
   break;
  case 'r':
   VAR_34 = VAR_26;
   break;
  case 's':
   VAR_53 = 1;
   VAR_47.zi_duration = (int)FUNC_21(VAR_26, &VAR_36, 10);
   if (VAR_47.zi_duration <= 0 || *VAR_36 != '\0') {
    (void) FUNC_5(VAR_29, "invalid duration '%s': "
        "must be a positive integer\n", VAR_26);
    FUNC_25();
    return (1);
   }
   break;
  case 'T':
   if (FUNC_17(VAR_26, "read") == 0) {
    VAR_43 = VAR_23;
   } else if (FUNC_17(VAR_26, "write") == 0) {
    VAR_43 = VAR_24;
   } else if (FUNC_17(VAR_26, "free") == 0) {
    VAR_43 = VAR_22;
   } else if (FUNC_17(VAR_26, "claim") == 0) {
    VAR_43 = VAR_21;
   } else if (FUNC_17(VAR_26, "all") == 0) {
    VAR_43 = VAR_20;
   } else {
    (void) FUNC_5(VAR_29, "invalid I/O type "
        "'%s': must be 'read', 'write', 'free', "
        "'claim' or 'all'\n", VAR_26);
    FUNC_25();
    return (1);
   }
   break;
  case 't':
   if ((VAR_45 = FUNC_10(VAR_26)) == VAR_7 &&
       !FUNC_1(VAR_45)) {
    (void) FUNC_5(VAR_29, "invalid type '%s'\n",
        VAR_26);
    FUNC_25();
    return (1);
   }
   break;
  case 'u':
   VAR_55 |= VAR_19;
   break;
  case 'L':
   if ((VAR_46 = FUNC_10(VAR_26)) == VAR_7 &&
       !FUNC_0(VAR_45)) {
    (void) FUNC_5(VAR_29, "invalid label type "
        "'%s'\n", VAR_26);
    FUNC_25();
    return (1);
   }
   break;
  case ':':
   (void) FUNC_5(VAR_29, "option -%c requires an "
       "operand\n", VAR_28);
   FUNC_25();
   return (1);
  case '?':
   (void) FUNC_5(VAR_29, "invalid option '%c'\n",
       VAR_28);
   FUNC_25();
   return (2);
  }
 }

 VAR_31 -= VAR_27;
 VAR_32 += VAR_27;

 if (VAR_47.zi_duration != 0)
  VAR_47.zi_cmd = VAR_15;

 if (VAR_35 != ((void*)0)) {



  if (VAR_37 != ((void*)0) || VAR_34 != ((void*)0) || VAR_45 != VAR_7 ||
      VAR_39 != 0 || VAR_47.zi_cmd != VAR_18) {
   (void) FUNC_5(VAR_29, "cancel (-c) incompatible with "
       "any other options\n");
   FUNC_25();
   return (2);
  }
  if (VAR_31 != 0) {
   (void) FUNC_5(VAR_29, "extraneous argument to '-c'\n");
   FUNC_25();
   return (2);
  }

  if (FUNC_18(VAR_35, "all") == 0) {
   return (FUNC_3());
  } else {
   int VAR_56 = (int)FUNC_21(VAR_35, &VAR_36, 10);
   if (*VAR_36 != '\0') {
    (void) FUNC_5(VAR_29, "invalid handle id '%s':"
        " must be an integer or 'all'\n", VAR_35);
    FUNC_25();
    return (1);
   }
   return (FUNC_4(VAR_56));
  }
 }

 if (VAR_38 != ((void*)0)) {




  if (VAR_37 != ((void*)0) || VAR_34 != ((void*)0) || VAR_45 != VAR_7 ||
      VAR_39 != 0 || VAR_47.zi_cmd != VAR_18) {
   (void) FUNC_5(VAR_29, "device (-d) incompatible with "
       "data error injection\n");
   FUNC_25();
   return (2);
  }

  if (VAR_31 != 1) {
   (void) FUNC_5(VAR_29, "device (-d) injection requires "
       "a single pool name\n");
   FUNC_25();
   return (2);
  }

  (void) FUNC_19(VAR_48, VAR_32[0]);
  VAR_49[0] = '\0';

  if (VAR_41 == VAR_2) {
   (void) FUNC_5(VAR_29, "device error type must be "
       "'io' or 'nxio'\n");
   return (1);
  }

  VAR_47.zi_iotype = VAR_43;
  if (FUNC_22(VAR_48, VAR_38, VAR_46, &VAR_47) != 0)
   return (1);
  if (!VAR_41)
   VAR_41 = VAR_4;

  if (VAR_44 != VAR_10)
   return (FUNC_13(VAR_48, &VAR_47, VAR_44));

 } else if (VAR_37 != ((void*)0)) {
  if (VAR_34 != ((void*)0) || VAR_45 != VAR_7 || VAR_39 != 0 ||
      VAR_47.zi_cmd != VAR_18) {
   (void) FUNC_5(VAR_29, "raw (-b) format with "
       "any other options\n");
   FUNC_25();
   return (2);
  }

  if (VAR_31 != 1) {
   (void) FUNC_5(VAR_29, "raw (-b) format expects a "
       "single pool name\n");
   FUNC_25();
   return (2);
  }

  (void) FUNC_19(VAR_48, VAR_32[0]);
  VAR_49[0] = '\0';

  if (VAR_41 == VAR_4) {
   (void) FUNC_5(VAR_29, "data error type must be "
       "'checksum' or 'io'\n");
   return (1);
  }

  VAR_47.zi_cmd = VAR_13;
  if (FUNC_23(VAR_37, &VAR_47) != 0)
   return (1);
  if (!VAR_41)
   VAR_41 = VAR_3;
 } else if (VAR_47.zi_cmd == VAR_17) {
  if (VAR_37 != ((void*)0) || VAR_34 != ((void*)0) || VAR_45 != VAR_7 ||
      VAR_39 != 0 || VAR_38 != ((void*)0)) {
   (void) FUNC_5(VAR_29, "panic (-p) incompatible with "
       "other options\n");
   FUNC_25();
   return (2);
  }

  if (VAR_31 < 1 || VAR_31 > 2) {
   (void) FUNC_5(VAR_29, "panic (-p) injection requires "
       "a single pool name and an optional id\n");
   FUNC_25();
   return (2);
  }

  (void) FUNC_19(VAR_48, VAR_32[0]);
  if (VAR_32[1] != ((void*)0))
   VAR_47.zi_type = FUNC_2(VAR_32[1]);
  VAR_49[0] = '\0';
 } else if (VAR_47.zi_cmd == VAR_15) {
  if (VAR_51 == 0) {
   (void) FUNC_5(VAR_29, "-s or -g meaningless "
       "without -I (ignore writes)\n");
   FUNC_25();
   return (2);
  } else if (VAR_53 && VAR_52) {
   (void) FUNC_5(VAR_29, "choose a duration either "
       "in seconds (-s) or a number of txgs (-g) "
       "but not both\n");
   FUNC_25();
   return (2);
  } else if (VAR_31 != 1) {
   (void) FUNC_5(VAR_29, "ignore writes (-I) "
       "injection requires a single pool name\n");
   FUNC_25();
   return (2);
  }

  (void) FUNC_19(VAR_48, VAR_32[0]);
  VAR_49[0] = '\0';
 } else if (VAR_45 == VAR_7) {
  if (VAR_55 == 0) {
   (void) FUNC_5(VAR_29, "at least one of '-b', '-d', "
       "'-t', '-a', '-p', '-I' or '-u' "
       "must be specified\n");
   FUNC_25();
   return (2);
  }

  if (VAR_31 == 1 && (VAR_55 & VAR_19)) {
   (void) FUNC_19(VAR_48, VAR_32[0]);
   VAR_49[0] = '\0';
  } else if (VAR_31 != 0) {
   (void) FUNC_5(VAR_29, "extraneous argument for "
       "'-f'\n");
   FUNC_25();
   return (2);
  }

  VAR_55 |= VAR_16;
 } else {
  if (VAR_31 != 1) {
   (void) FUNC_5(VAR_29, "missing object\n");
   FUNC_25();
   return (2);
  }

  if (VAR_41 == VAR_4) {
   (void) FUNC_5(VAR_29, "data error type must be "
       "'checksum' or 'io'\n");
   return (1);
  }

  VAR_47.zi_cmd = VAR_13;
  if (FUNC_24(VAR_45, VAR_32[0], VAR_34, VAR_39, &VAR_47, VAR_48,
      VAR_49) != 0)
   return (1);
  if (!VAR_41)
   VAR_41 = VAR_3;
 }






 if (VAR_49[0] != '\0' && VAR_42) {
  if ((VAR_50 = FUNC_27(VAR_25, VAR_49, VAR_12)) == ((void*)0))
   return (1);

  if (FUNC_28(VAR_50, ((void*)0), 0) != 0)
   return (1);
 }

 VAR_47.zi_error = VAR_41;

 VAR_54 = FUNC_16(VAR_48, VAR_55, &VAR_47, VAR_40);

 if (VAR_49[0] != '\0' && VAR_42)
  VAR_54 = (FUNC_26(VAR_50, ((void*)0), 0) != 0);

 FUNC_7(VAR_25);

 return (VAR_54);
}
