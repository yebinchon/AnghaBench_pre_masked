
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibnd_config {int mkey; int flags; scalar_t__ timeout_ms; int member_0; } ;
struct ibdiag_opt {char* member_0; char member_1; int member_2; char* member_3; char* member_4; } ;
typedef int ibnd_fabric_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int,char**,struct ibnd_config*,char*,struct ibdiag_opt const*,int ,char*,char const**) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int,int *,struct ibnd_config*) ;
 int FUNC_6 (int *,int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,int*,int) ;
 int FUNC_9 (int ,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int ,int ) ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 void* FUNC_12 (char*,int ,int ) ;

int FUNC_13(int VAR_18, char **VAR_19)
{
 int VAR_20 = 0;
 int VAR_21[3] =
     { VAR_2, VAR_3, VAR_1 };

 struct ibnd_config VAR_22 = { 0 };
 ibnd_fabric_t *VAR_23 = ((void*)0);

 const struct ibdiag_opt VAR_24[] = {
  {"all", 'a', 0, ((void*)0), "show all lids, even invalid entries"},
  {"no_dests", 'n', 0, ((void*)0),
   "do not try to resolve destinations"},
  {"Multicast", 'M', 0, ((void*)0), "show multicast forwarding tables"},
  {"node-name-map", 1, 1, "<file>", "node name map file"},
  {0}
 };
 char VAR_25[] = "[<dest dr_path|lid|guid> [<startlid> [<endlid>]]]";
 const char *VAR_26[] = {
  " -- Unicast examples:",
  "-a\t# same, but dump all lids, even with invalid out ports",
  "-n\t# simple dump format - no destination resolving",
  "10\t# dump lids starting from 10",
  "0x10 0x20\t# dump lid range",
  " -- Multicast examples:",
  "-M\t# dump all non empty mlids of switch with lid 4",
  "-M 0xc010 0xc020\t# same, but with range",
  "-M -n\t# simple dump format",
  ((void*)0),
 };

 FUNC_3(VAR_18, VAR_19, &VAR_22, "KGDLs", VAR_24, VAR_13,
       VAR_25, VAR_26);

 VAR_18 -= VAR_12;
 VAR_19 += VAR_12;

 if (VAR_18 > 0)
  VAR_16 = FUNC_12(VAR_19[0], 0, 0);
 if (VAR_18 > 1)
  VAR_4 = FUNC_12(VAR_19[1], 0, 0);

 VAR_10 = FUNC_10(VAR_11);

 if (VAR_9)
  VAR_22.timeout_ms = VAR_9;

 VAR_22.flags = VAR_7;
 VAR_22.mkey = VAR_8;

 if ((VAR_23 = FUNC_5(VAR_5, VAR_6, ((void*)0),
      &VAR_22)) != ((void*)0)) {

  VAR_15 = FUNC_8(VAR_5, VAR_6, VAR_21, 3);
  if (!VAR_15) {
   FUNC_2(VAR_17,
    "Failed to open '%s' port '%d'\n", VAR_5, VAR_6);
   VAR_20 = -1;
   goto Exit;
  }
  FUNC_11(VAR_15, VAR_8);

  if (VAR_9) {
   FUNC_9(VAR_15, VAR_9);
  }

  FUNC_6(VAR_23, VAR_14, VAR_0, VAR_23);

  FUNC_7(VAR_15);

 } else {
  FUNC_2(VAR_17, "Failed to discover fabric\n");
  VAR_20 = -1;
 }
Exit:
 FUNC_4(VAR_23);

 FUNC_0(VAR_10);
 FUNC_1(VAR_20);
}
