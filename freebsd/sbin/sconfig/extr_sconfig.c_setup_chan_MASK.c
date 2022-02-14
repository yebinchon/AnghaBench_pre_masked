
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,int ,...) ;
 scalar_t__ FUNC_3 () ;
 long FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int VAR_41 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 void* FUNC_8 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_9 (int VAR_42, int VAR_43, char **VAR_44)
{
 int VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51, VAR_52, VAR_53, VAR_54, VAR_55;
 int VAR_56, VAR_57, VAR_58, VAR_59, VAR_60, VAR_61, VAR_62, VAR_63;
 int VAR_64, VAR_65, VAR_66, VAR_67, VAR_68;
 int VAR_69;
 long VAR_70, VAR_71, VAR_72, VAR_73;

 for (VAR_45=0; VAR_45<VAR_43; ++VAR_45) {
  if (VAR_44[VAR_45][0] >= '0' && VAR_44[VAR_45][0] <= '9') {
   VAR_70 = FUNC_8 (VAR_44[VAR_45], 0, 10);
   FUNC_2 (VAR_42, VAR_12, &VAR_70);
  } else if (FUNC_6 ("extclock", VAR_44[VAR_45]) == 0) {
   VAR_70 = 0;
   FUNC_2 (VAR_42, VAR_12, &VAR_70);
  } else if (FUNC_7 ("cfg=", VAR_44[VAR_45], 4) == 0) {
   if (FUNC_7 ("a", VAR_44[VAR_45]+4, 1) == 0)
    FUNC_2 (VAR_42, VAR_14, "a");
   else if (FUNC_7 ("b", VAR_44[VAR_45]+4, 1) == 0)
    FUNC_2 (VAR_42, VAR_14, "b");
   else if (FUNC_7 ("c", VAR_44[VAR_45]+4, 1) == 0)
    FUNC_2 (VAR_42, VAR_14, "c");
   else if (FUNC_7 ("d", VAR_44[VAR_45]+4, 1) == 0)
    FUNC_2 (VAR_42, VAR_14, "d");
   else {
    FUNC_1 (VAR_41, "invalid cfg\n");
    FUNC_0 (-1);
   }
  } else if (FUNC_6 ("idle", VAR_44[VAR_45]) == 0)
   FUNC_2 (VAR_42, VAR_33, "\0\0\0\0\0\0\0");
  else if (FUNC_6 ("async", VAR_44[VAR_45]) == 0) {
   VAR_46 = VAR_7;
   if (FUNC_2 (VAR_42, VAR_27, &VAR_46) >= 0)
    FUNC_2 (VAR_42, VAR_33, "async\0\0");
  } else if (FUNC_6 ("sync", VAR_44[VAR_45]) == 0) {
   VAR_46 = VAR_10;
   if (FUNC_2 (VAR_42, VAR_27, &VAR_46) >= 0)
    FUNC_2 (VAR_42, VAR_33, "sync\0\0\0");
  } else if (FUNC_6 ("cisco", VAR_44[VAR_45]) == 0) {
   VAR_46 = VAR_10;
   FUNC_2 (VAR_42, VAR_27, &VAR_46);
   FUNC_2 (VAR_42, VAR_33, "cisco\0\0");
  } else if (FUNC_6 ("rbrg", VAR_44[VAR_45]) == 0) {
   VAR_46 = VAR_10;
   FUNC_2 (VAR_42, VAR_27, &VAR_46);
   FUNC_2 (VAR_42, VAR_33, "rbrg\0\0\0");
  } else if (FUNC_6 ("raw", VAR_44[VAR_45]) == 0) {
   VAR_46 = VAR_10;
   FUNC_2 (VAR_42, VAR_27, &VAR_46);
   FUNC_2 (VAR_42, VAR_33, "raw\0\0\0\0");
  } else if (FUNC_6 ("packet", VAR_44[VAR_45]) == 0) {
   VAR_46 = VAR_10;
   FUNC_2 (VAR_42, VAR_27, &VAR_46);
   FUNC_2 (VAR_42, VAR_33, "packet\0");
  } else if (FUNC_6 ("ppp", VAR_44[VAR_45]) == 0) {

   if (FUNC_3 ()) {
    VAR_46 = VAR_10;
    FUNC_2 (VAR_42, VAR_27, &VAR_46);
    FUNC_2 (VAR_42, VAR_33, "ppp\0\0\0\0");
   }
  } else if (FUNC_7 ("keepalive=", VAR_44[VAR_45], 10) == 0) {
   VAR_58 = (FUNC_6 ("on", VAR_44[VAR_45] + 10) == 0);
   FUNC_2 (VAR_42, VAR_24, &VAR_58);
  } else if (FUNC_6 ("fr", VAR_44[VAR_45]) == 0) {
   VAR_46 = VAR_10;
   FUNC_2 (VAR_42, VAR_27, &VAR_46);
   FUNC_2 (VAR_42, VAR_33, "fr\0\0\0\0\0");
  } else if (FUNC_6 ("zaptel", VAR_44[VAR_45]) == 0) {
   VAR_46 = VAR_10;
   FUNC_2 (VAR_42, VAR_27, &VAR_46);
   FUNC_2 (VAR_42, VAR_33, "zaptel\0");
  } else if (FUNC_7 ("debug=", VAR_44[VAR_45], 6) == 0) {
   VAR_59 = FUNC_8 (VAR_44[VAR_45]+6, 0, 10);
   VAR_69 = FUNC_2 (VAR_42, VAR_8, &VAR_46) >= 0;
   if (!VAR_69 || VAR_46 != VAR_7) {
    if (VAR_59 == 0) {
     FUNC_5(0);
    } else {
     FUNC_2 (VAR_42, VAR_17, &VAR_59);
     FUNC_5(1);
    }
   } else {
    FUNC_2 (VAR_42, VAR_17, &VAR_59);
   }
  } else if (FUNC_7 ("loop=", VAR_44[VAR_45], 5) == 0) {
   VAR_47 = (FUNC_6 ("on", VAR_44[VAR_45] + 5) == 0);
   FUNC_2 (VAR_42, VAR_26, &VAR_47);
  } else if (FUNC_7 ("rloop=", VAR_44[VAR_45], 6) == 0) {
   VAR_67 = (FUNC_6 ("on", VAR_44[VAR_45] + 6) == 0);
   FUNC_2 (VAR_42, VAR_34, &VAR_67);
  } else if (FUNC_7 ("dpll=", VAR_44[VAR_45], 5) == 0) {
   VAR_49 = (FUNC_6 ("on", VAR_44[VAR_45] + 5) == 0);
   FUNC_2 (VAR_42, VAR_19, &VAR_49);
  } else if (FUNC_7 ("nrzi=", VAR_44[VAR_45], 5) == 0) {
   VAR_48 = (FUNC_6 ("on", VAR_44[VAR_45] + 5) == 0);
   FUNC_2 (VAR_42, VAR_30, &VAR_48);
  } else if (FUNC_7 ("invclk=", VAR_44[VAR_45], 7) == 0) {
   VAR_50 = (FUNC_6 ("on", VAR_44[VAR_45] + 7) == 0);
   FUNC_2 (VAR_42, VAR_21, &VAR_50);
  } else if (FUNC_7 ("invrclk=", VAR_44[VAR_45], 8) == 0) {
   VAR_62 = (FUNC_6 ("on", VAR_44[VAR_45] + 8) == 0);
   FUNC_2 (VAR_42, VAR_22, &VAR_62);
  } else if (FUNC_7 ("invtclk=", VAR_44[VAR_45], 8) == 0) {
   VAR_63 = (FUNC_6 ("on", VAR_44[VAR_45] + 8) == 0);
   FUNC_2 (VAR_42, VAR_23, &VAR_63);
  } else if (FUNC_7 ("higain=", VAR_44[VAR_45], 7) == 0) {
   VAR_56 = (FUNC_6 ("on", VAR_44[VAR_45] + 7) == 0);
   FUNC_2 (VAR_42, VAR_20, &VAR_56);
  } else if (FUNC_7 ("phony=", VAR_44[VAR_45], 6) == 0) {
   VAR_51 = (FUNC_6 ("on", VAR_44[VAR_45] + 6) == 0);
   FUNC_2 (VAR_42, VAR_31, &VAR_51);
  } else if (FUNC_7 ("unfram=", VAR_44[VAR_45], 7) == 0) {
   VAR_54 = (FUNC_6 ("on", VAR_44[VAR_45] + 7) == 0);
   FUNC_2 (VAR_42, VAR_39, &VAR_54);
  } else if (FUNC_7 ("scrambler=", VAR_44[VAR_45], 10) == 0) {
   VAR_66 = (FUNC_6 ("on", VAR_44[VAR_45] + 10) == 0);
   FUNC_2 (VAR_42, VAR_36, &VAR_66);
  } else if (FUNC_7 ("monitor=", VAR_44[VAR_45], 8) == 0) {
   VAR_64 = (FUNC_6 ("on", VAR_44[VAR_45] + 8) == 0);
   FUNC_2 (VAR_42, VAR_28, &VAR_64);
  } else if (FUNC_7 ("use16=", VAR_44[VAR_45], 6) == 0) {
   VAR_52 = (FUNC_6 ("on", VAR_44[VAR_45] + 6) == 0);
   FUNC_2 (VAR_42, VAR_40, &VAR_52);
  } else if (FUNC_7 ("crc4=", VAR_44[VAR_45], 5) == 0) {
   VAR_53 = (FUNC_6 ("on", VAR_44[VAR_45] + 5) == 0);
   FUNC_2 (VAR_42, VAR_16, &VAR_53);
  } else if (FUNC_7 ("ami=", VAR_44[VAR_45], 4) == 0) {
   VAR_55 = (FUNC_6 ("on", VAR_44[VAR_45] + 4) == 0);
   FUNC_2 (VAR_42, VAR_25, &VAR_55);
  } else if (FUNC_7 ("mtu=", VAR_44[VAR_45], 4) == 0) {
   VAR_72 = FUNC_8 (VAR_44[VAR_45] + 4, 0, 10);
   FUNC_2 (VAR_42, VAR_29, &VAR_72);
  } else if (FUNC_7 ("rqlen=", VAR_44[VAR_45], 6) == 0) {
   VAR_73 = FUNC_8 (VAR_44[VAR_45] + 6, 0, 10);
   FUNC_2 (VAR_42, VAR_35, &VAR_73);
  } else if (FUNC_6 ("syn=int", VAR_44[VAR_45]) == 0) {
   VAR_57 = VAR_0;
   FUNC_2 (VAR_42, VAR_15, &VAR_57);
  } else if (FUNC_6 ("syn=rcv", VAR_44[VAR_45]) == 0) {
   VAR_57 = VAR_1;
   FUNC_2 (VAR_42, VAR_15, &VAR_57);
  } else if (FUNC_6 ("syn=rcv0", VAR_44[VAR_45]) == 0) {
   VAR_57 = VAR_2;
   FUNC_2 (VAR_42, VAR_15, &VAR_57);
  } else if (FUNC_6 ("syn=rcv1", VAR_44[VAR_45]) == 0) {
   VAR_57 = VAR_3;
   FUNC_2 (VAR_42, VAR_15, &VAR_57);
  } else if (FUNC_6 ("syn=rcv2", VAR_44[VAR_45]) == 0) {
   VAR_57 = VAR_4;
   FUNC_2 (VAR_42, VAR_15, &VAR_57);
  } else if (FUNC_6 ("syn=rcv3", VAR_44[VAR_45]) == 0) {
   VAR_57 = VAR_5;
   FUNC_2 (VAR_42, VAR_15, &VAR_57);
  } else if (FUNC_7 ("ts=", VAR_44[VAR_45], 3) == 0) {
   VAR_71 = FUNC_4 (VAR_44[VAR_45] + 3);
   FUNC_2 (VAR_42, VAR_38, &VAR_71);
  } else if (FUNC_7 ("pass=", VAR_44[VAR_45], 5) == 0) {
   VAR_71 = FUNC_4 (VAR_44[VAR_45] + 5);
   FUNC_2 (VAR_42, VAR_37, &VAR_71);
  } else if (FUNC_7 ("dlci", VAR_44[VAR_45], 4) == 0) {
   VAR_61 = FUNC_8 (VAR_44[VAR_45]+4, 0, 10);
   FUNC_2 (VAR_42, VAR_6, &VAR_61);
  } else if (FUNC_7 ("dir=", VAR_44[VAR_45], 4) == 0) {
   VAR_65 = FUNC_8 (VAR_44[VAR_45]+4, 0, 10);
   FUNC_2 (VAR_42, VAR_18, &VAR_65);
  } else if (FUNC_7 ("port=", VAR_44[VAR_45], 5) == 0) {
   if (FUNC_7 ("rs232", VAR_44[VAR_45]+5, 5) == 0) {
    VAR_60 = 0;
    FUNC_2 (VAR_42, VAR_32, &VAR_60);
   } else if (FUNC_7 ("v35", VAR_44[VAR_45]+5, 3) == 0) {
    VAR_60 = 1;
    FUNC_2 (VAR_42, VAR_32, &VAR_60);
   } else if (FUNC_7 ("rs449", VAR_44[VAR_45]+5, 5) == 0) {
    VAR_60 = 2;
    FUNC_2 (VAR_42, VAR_32, &VAR_60);
   } else
    FUNC_1 (VAR_41, "invalid port type\n");
    FUNC_0 (-1);

  } else if (FUNC_6 ("reset", VAR_44[VAR_45]) == 0) {
   FUNC_2 (VAR_42, VAR_11, 0);
  } else if (FUNC_6 ("hwreset", VAR_44[VAR_45]) == 0) {
   FUNC_2 (VAR_42, VAR_9, 0);

  } else if (FUNC_7 ("cablen=", VAR_44[VAR_45], 7) == 0) {
   VAR_47 = (FUNC_6 ("on", VAR_44[VAR_45] + 7) == 0);
   FUNC_2 (VAR_42, VAR_13, &VAR_68);
  }
 }
}
