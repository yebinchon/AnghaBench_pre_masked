
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sldns_file_parse_state {int default_ttl; int origin_len; int origin; } ;
struct config_file {scalar_t__* chrootdir; } ;
struct auth_zone {scalar_t__* zonefile; int namelen; int name; int data; scalar_t__ zone_is_slave; } ;
typedef int state ;
typedef int rr ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct auth_zone*,int *,int *,int,struct sldns_file_parse_state*,char*,int ,struct config_file*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,char*,...) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct sldns_file_parse_state*,int ,int) ;
 int FUNC_8 (int *,int *) ;
 char* FUNC_9 (int ,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__*) ;
 scalar_t__ FUNC_12 (char*,scalar_t__*,int ) ;
 int FUNC_13 (int *,int ,int *) ;
 int FUNC_14 (scalar_t__,char*,char*,char*) ;
 scalar_t__ VAR_6 ;

int
FUNC_15(struct auth_zone* VAR_7, struct config_file* VAR_8)
{
 uint8_t VAR_9[VAR_1];
 struct sldns_file_parse_state VAR_10;
 char* VAR_11;
 FILE* VAR_12;
 if(!VAR_7 || !VAR_7->zonefile || VAR_7->zonefile[0]==0)
  return 1;

 VAR_11 = VAR_7->zonefile;
 if(VAR_8->chrootdir && VAR_8->chrootdir[0] && FUNC_12(VAR_11,
  VAR_8->chrootdir, FUNC_11(VAR_8->chrootdir)) == 0)
  VAR_11 += FUNC_11(VAR_8->chrootdir);
 if(VAR_6 >= VAR_2) {
  char VAR_13[255+1];
  FUNC_1(VAR_7->name, VAR_13);
  FUNC_14(VAR_2, "read zonefile %s for %s", VAR_11, VAR_13);
 }
 VAR_12 = FUNC_3(VAR_11, "r");
 if(!VAR_12) {
  char* VAR_14 = FUNC_9(VAR_7->name, VAR_7->namelen);
  if(VAR_7->zone_is_slave && VAR_5 == VAR_0) {

   FUNC_14(VAR_2, "no zonefile %s for %s",
    VAR_11, VAR_14?VAR_14:"error");
   FUNC_4(VAR_14);
   return 1;
  }
  FUNC_5("cannot open zonefile %s for %s: %s",
   VAR_11, VAR_14?VAR_14:"error", FUNC_10(VAR_5));
  FUNC_4(VAR_14);
  return 0;
 }


 FUNC_13(&VAR_7->data, VAR_4, ((void*)0));
 FUNC_8(&VAR_7->data, &VAR_3);

 FUNC_7(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.default_ttl = 3600;

 if(VAR_7->namelen <= sizeof(VAR_10.origin)) {
  FUNC_6(VAR_10.origin, VAR_7->name, VAR_7->namelen);
  VAR_10.origin_len = VAR_7->namelen;
 }

 if(!FUNC_0(VAR_7, VAR_12, VAR_9, sizeof(VAR_9), &VAR_10, VAR_11, 0, VAR_8)) {
  char* VAR_15 = FUNC_9(VAR_7->name, VAR_7->namelen);
  FUNC_5("error parsing zonefile %s for %s",
   VAR_11, VAR_15?VAR_15:"error");
  FUNC_4(VAR_15);
  FUNC_2(VAR_12);
  return 0;
 }
 FUNC_2(VAR_12);
 return 1;
}
