
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hs20_osu_client {char* ca_fname; int http; void* result_file; void* ifname; void* summary_file; void* osu_ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hs20_osu_client*) ;
 int FUNC_1 (struct hs20_osu_client*,char*,char*) ;
 int FUNC_2 (struct hs20_osu_client*,char*,char*) ;
 int FUNC_3 (struct hs20_osu_client*,char*,char*) ;
 int FUNC_4 (struct hs20_osu_client*,char*,char*) ;
 int FUNC_5 (struct hs20_osu_client*,char*) ;
 int FUNC_6 (struct hs20_osu_client*,char*,char*) ;
 int FUNC_7 (struct hs20_osu_client*,char*) ;
 int FUNC_8 (struct hs20_osu_client*,char*,char*) ;
 scalar_t__ FUNC_9 (struct hs20_osu_client*,char*) ;
 int FUNC_10 (struct hs20_osu_client*,char*,int,int,int *) ;
 int FUNC_11 (struct hs20_osu_client*,char*,char*,char*) ;
 int FUNC_12 (struct hs20_osu_client*,char*) ;
 int FUNC_13 (struct hs20_osu_client*,char*) ;
 int FUNC_14 (struct hs20_osu_client*,int,char const*) ;
 int FUNC_15 (struct hs20_osu_client*,char*) ;
 int FUNC_16 (struct hs20_osu_client*,char*,char*,char*) ;
 int FUNC_17 (struct hs20_osu_client*,char*,char*,char*,int) ;
 int FUNC_18 (struct hs20_osu_client*) ;
 int FUNC_19 (struct hs20_osu_client*,char*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int,char**,char*) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int ,char*) ;
 scalar_t__ FUNC_24 (struct hs20_osu_client*) ;
 int FUNC_25 (char*,int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_26 (int ) ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_27 (char*,char*) ;
 int FUNC_28 (void*) ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 (char const*) ;
 int FUNC_32 (int,char*,...) ;
 int FUNC_33 (struct hs20_osu_client*,char*) ;

int FUNC_34(int VAR_8, char *VAR_9[])
{
 struct hs20_osu_client VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 const char *VAR_14 = ((void*)0);
 const char *VAR_15 = ((void*)0);
 extern char *VAR_16;
 extern int VAR_17;
 extern int VAR_18;
 extern int VAR_19;

 if (FUNC_24(&VAR_10) < 0)
  return -1;

 for (;;) {
  VAR_11 = FUNC_21(VAR_8, VAR_9, "df:hKNo:O:qr:s:S:tw:x:");
  if (VAR_11 < 0)
   break;
  switch (VAR_11) {
  case 'd':
   if (VAR_17 > 0)
    VAR_17--;
   break;
  case 'f':
   VAR_15 = VAR_4;
   break;
  case 'K':
   VAR_18++;
   break;
  case 'N':
   VAR_13 = 1;
   break;
  case 'o':
   VAR_10.osu_ssid = VAR_4;
   break;
  case 'O':
   VAR_14 = VAR_4;
   break;
  case 'q':
   VAR_17++;
   break;
  case 'r':
   VAR_10.result_file = VAR_4;
   break;
  case 's':
   VAR_10.summary_file = VAR_4;
   break;
  case 'S':
   VAR_10.ifname = VAR_4;
   break;
  case 't':
   VAR_19++;
   break;
  case 'w':
   VAR_16 = VAR_4;
   break;
  case 'x':
   VAR_6 = VAR_4;
   break;
  case 'h':
  default:
   FUNC_29();
   FUNC_20(0);
   break;
  }
 }

 if (VAR_8 - VAR_5 < 1) {
  FUNC_29();
  FUNC_20(0);
 }

 FUNC_31(VAR_15);


 FUNC_26(VAR_7);


 if (VAR_10.result_file)
  FUNC_28(VAR_10.result_file);
 FUNC_32(VAR_0, "===[hs20-osu-client START - command: %s ]======"
     "================", VAR_9[VAR_5]);
 FUNC_0(&VAR_10);

 if (FUNC_27(VAR_9[VAR_5], "to_tnds") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  FUNC_17(&VAR_10, VAR_9[VAR_5 + 1], VAR_9[VAR_5 + 2],
       VAR_8 > VAR_5 + 3 ? VAR_9[VAR_5 + 3] : ((void*)0),
       0);
 } else if (FUNC_27(VAR_9[VAR_5], "to_tnds2") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  FUNC_17(&VAR_10, VAR_9[VAR_5 + 1], VAR_9[VAR_5 + 2],
       VAR_8 > VAR_5 + 3 ? VAR_9[VAR_5 + 3] : ((void*)0),
       1);
 } else if (FUNC_27(VAR_9[VAR_5], "from_tnds") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  FUNC_4(&VAR_10, VAR_9[VAR_5 + 1], VAR_9[VAR_5 + 2]);
 } else if (FUNC_27(VAR_9[VAR_5], "sub_rem") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  VAR_12 = FUNC_16(&VAR_10, VAR_9[VAR_5 + 1],
      VAR_8 > VAR_5 + 2 ? VAR_9[VAR_5 + 2] : ((void*)0),
      VAR_8 > VAR_5 + 3 ? VAR_9[VAR_5 + 3] : ((void*)0));
 } else if (FUNC_27(VAR_9[VAR_5], "pol_upd") == 0) {
  VAR_12 = FUNC_11(&VAR_10,
      VAR_8 > VAR_5 + 1 ? VAR_9[VAR_5 + 1] : ((void*)0),
      VAR_8 > VAR_5 + 2 ? VAR_9[VAR_5 + 2] : ((void*)0),
      VAR_8 > VAR_5 + 3 ? VAR_9[VAR_5 + 3] : ((void*)0));
 } else if (FUNC_27(VAR_9[VAR_5], "prov") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  VAR_10.ca_fname = VAR_9[VAR_5 + 2];
  FUNC_32(VAR_0, "Calling cmd_prov from main");
  FUNC_12(&VAR_10, VAR_9[VAR_5 + 1]);
 } else if (FUNC_27(VAR_9[VAR_5], "sim_prov") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  VAR_10.ca_fname = VAR_9[VAR_5 + 2];
  FUNC_15(&VAR_10, VAR_9[VAR_5 + 1]);
 } else if (FUNC_27(VAR_9[VAR_5], "dl_osu_ca") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  FUNC_2(&VAR_10, VAR_9[VAR_5 + 1], VAR_9[VAR_5 + 2]);
 } else if (FUNC_27(VAR_9[VAR_5], "dl_polupd_ca") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  FUNC_3(&VAR_10, VAR_9[VAR_5 + 1], VAR_9[VAR_5 + 2]);
 } else if (FUNC_27(VAR_9[VAR_5], "dl_aaa_ca") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  FUNC_1(&VAR_10, VAR_9[VAR_5 + 1], VAR_9[VAR_5 + 2]);
 } else if (FUNC_27(VAR_9[VAR_5], "osu_select") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  VAR_10.ca_fname = VAR_8 > VAR_5 + 2 ? VAR_9[VAR_5 + 2] : ((void*)0);
  FUNC_10(&VAR_10, VAR_9[VAR_5 + 1], 2, 1, ((void*)0));
 } else if (FUNC_27(VAR_9[VAR_5], "signup") == 0) {
  VAR_10.ca_fname = VAR_8 > VAR_5 + 1 ? VAR_9[VAR_5 + 1] : ((void*)0);
  VAR_12 = FUNC_14(&VAR_10, VAR_13, VAR_14);
 } else if (FUNC_27(VAR_9[VAR_5], "set_pps") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  FUNC_13(&VAR_10, VAR_9[VAR_5 + 1]);
 } else if (FUNC_27(VAR_9[VAR_5], "get_fqdn") == 0) {
  if (VAR_8 - VAR_5 < 1) {
   FUNC_29();
   FUNC_20(0);
  }
  VAR_12 = FUNC_5(&VAR_10, VAR_9[VAR_5 + 1]);
 } else if (FUNC_27(VAR_9[VAR_5], "oma_dm_prov") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  VAR_10.ca_fname = VAR_9[VAR_5 + 2];
  FUNC_7(&VAR_10, VAR_9[VAR_5 + 1]);
 } else if (FUNC_27(VAR_9[VAR_5], "oma_dm_sim_prov") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  VAR_10.ca_fname = VAR_9[VAR_5 + 2];
  if (FUNC_9(&VAR_10, VAR_9[VAR_5 + 1]) < 0) {
   FUNC_33(&VAR_10, "Failed to complete OMA DM SIM provisioning");
   return -1;
  }
 } else if (FUNC_27(VAR_9[VAR_5], "oma_dm_add") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  FUNC_6(&VAR_10, VAR_9[VAR_5 + 1], VAR_9[VAR_5 + 2]);
 } else if (FUNC_27(VAR_9[VAR_5], "oma_dm_replace") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  FUNC_8(&VAR_10, VAR_9[VAR_5 + 1], VAR_9[VAR_5 + 2]);
 } else if (FUNC_27(VAR_9[VAR_5], "est_csr") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }
  FUNC_25("Cert", VAR_3);
  FUNC_19(&VAR_10, VAR_9[VAR_5 + 1]);
 } else if (FUNC_27(VAR_9[VAR_5], "browser") == 0) {
  int VAR_20;

  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }

  FUNC_32(VAR_1, "Launch web browser to URL %s",
      VAR_9[VAR_5 + 1]);
  VAR_20 = FUNC_22(VAR_9[VAR_5 + 1]);
  FUNC_32(VAR_1, "Web browser result: %d", VAR_20);
 } else if (FUNC_27(VAR_9[VAR_5], "parse_cert") == 0) {
  if (VAR_8 - VAR_5 < 2) {
   FUNC_29();
   FUNC_20(0);
  }

  VAR_17 = VAR_2;
  FUNC_23(VAR_10.http, VAR_9[VAR_5 + 1]);
  VAR_17 = VAR_1;
 } else {
  FUNC_32(VAR_1, "Unknown command '%s'", VAR_9[VAR_5]);
 }

 FUNC_18(&VAR_10);
 FUNC_32(VAR_0,
     "===[hs20-osu-client END ]======================");

 FUNC_30();

 return VAR_12;
}
