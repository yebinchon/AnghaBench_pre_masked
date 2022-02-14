
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibnd_config {int mkey; int flags; scalar_t__ timeout_ms; int member_0; } ;
struct ibdiag_opt {char* member_0; float member_1; int member_2; char* member_3; char* member_4; } ;
typedef int ibnd_fabric_t ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int,char**,struct ibnd_config*,char*,struct ibdiag_opt const*,int ,char*,int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int ,int *,struct ibnd_config*) ;
 int FUNC_10 (int *,int ,int *) ;
 int * FUNC_11 (scalar_t__,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_12 (int *,scalar_t__) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

int FUNC_14(int VAR_18, char **VAR_19)
{
 struct ibnd_config VAR_20 = { 0 };
 ibnd_fabric_t *VAR_21 = ((void*)0);
 ibnd_fabric_t *VAR_22 = ((void*)0);

 const struct ibdiag_opt VAR_23[] = {
  {"full", 'f', 0, ((void*)0), "show full information (ports' speed and width, vlcap)"},
  {"show", 's', 0, ((void*)0), "show more information"},
  {"list", 'l', 0, ((void*)0), "list of connected nodes"},
  {"grouping", 'g', 0, ((void*)0), "show grouping"},
  {"Hca_list", 'H', 0, ((void*)0), "list of connected CAs"},
  {"Switch_list", 'S', 0, ((void*)0), "list of connected switches"},
  {"Router_list", 'R', 0, ((void*)0), "list of connected routers"},
  {"node-name-map", 1, 1, "<file>", "node name map file"},
  {"cache", 2, 1, "<file>",
   "filename to cache ibnetdiscover data to"},
  {"load-cache", 3, 1, "<file>",
   "filename of ibnetdiscover cache to load"},
  {"diff", 4, 1, "<file>",
   "filename of ibnetdiscover cache to diff"},
  {"diffcheck", 5, 1, "<key(s)>",
   "specify checks to execute for --diff"},
  {"ports", 'p', 0, ((void*)0), "obtain a ports report"},
  {"max_hops", 'm', 0, ((void*)0),
   "report max hops discovered by the library"},
  {"outstanding_smps", 'o', 1, ((void*)0),
   "specify the number of outstanding SMP's which should be "
   "issued during the scan"},
  {0}
 };
 char VAR_24[] = "[topology-file]";

 FUNC_6(VAR_18, VAR_19, &VAR_20, "DGKLs", VAR_23, VAR_16,
       VAR_24, ((void*)0));

 VAR_3 = VAR_17;

 VAR_18 -= VAR_14;
 VAR_19 += VAR_14;

 if (VAR_9)
  VAR_20.timeout_ms = VAR_9;

 VAR_20.flags = VAR_7;

 if (VAR_18 && !(VAR_3 = FUNC_5(VAR_19[0], "w")))
  FUNC_0("can't open file %s for writing", VAR_19[0]);

 VAR_20.mkey = VAR_8;

 VAR_12 = FUNC_13(VAR_13);

 if (VAR_1 &&
     !(VAR_22 = FUNC_11(VAR_1, 0)))
  FUNC_0("loading cached fabric for diff failed\n");

 if (VAR_11) {
  if ((VAR_21 = FUNC_11(VAR_11, 0)) == ((void*)0))
   FUNC_0("loading cached fabric failed\n");
 } else {
  if ((VAR_21 =
       FUNC_9(VAR_5, VAR_6, ((void*)0), &VAR_20)) == ((void*)0))
   FUNC_0("discover failed\n");
 }

 if (VAR_15)
  FUNC_10(VAR_21, VAR_2, ((void*)0));
 else if (VAR_10)
  FUNC_12(VAR_21, VAR_10);
 else if (VAR_22)
  FUNC_2(VAR_22, VAR_21);
 else
  FUNC_3(VAR_4, VAR_21);

 if (VAR_0)
  if (FUNC_7(VAR_21, VAR_0, 0) < 0)
   FUNC_0("caching ibnetdiscover data failed\n");

 FUNC_8(VAR_21);
 if (VAR_22)
  FUNC_8(VAR_22);
 FUNC_1(VAR_12);
 FUNC_4(0);
}
