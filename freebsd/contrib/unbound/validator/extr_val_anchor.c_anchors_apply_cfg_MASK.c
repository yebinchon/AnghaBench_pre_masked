
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_anchors {int lock; struct trust_anchor* dlv_anchor; } ;
struct trust_anchor {int dummy; } ;
struct config_strlist {scalar_t__* str; struct config_strlist* next; } ;
struct config_file {scalar_t__* dlv_anchor_file; scalar_t__* chrootdir; struct config_strlist* auto_trust_anchor_file_list; struct config_strlist* dlv_anchor_list; struct config_strlist* trust_anchor_list; struct config_strlist* trusted_keys_file_list; struct config_strlist* trust_anchor_file_list; struct config_strlist* domain_insecure; scalar_t__ insecure_lan_zones; } ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct val_anchors*,char const*) ;
 int FUNC_1 (struct val_anchors*,int *,char*) ;
 struct trust_anchor* FUNC_2 (struct val_anchors*,int *,char*,int) ;
 struct trust_anchor* FUNC_3 (struct val_anchors*,int *,scalar_t__*) ;
 int FUNC_4 (struct val_anchors*) ;
 char** VAR_1 ;
 int FUNC_5 (struct val_anchors*) ;
 int FUNC_6 (struct val_anchors*,char*) ;
 int FUNC_7 (struct val_anchors*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (scalar_t__*) ;
 scalar_t__ FUNC_14 (char*,scalar_t__*,int ) ;
 scalar_t__ VAR_2 ;

int
FUNC_15(struct val_anchors* VAR_3, struct config_file* VAR_4)
{
 struct config_strlist* VAR_5;
 const char** VAR_6;
 char* VAR_7;
 sldns_buffer* VAR_8 = FUNC_12(65535);
 if(VAR_4->insecure_lan_zones) {
  for(VAR_6 = VAR_1; *VAR_6; VAR_6++) {
   if(!FUNC_0(VAR_3, *VAR_6)) {
    FUNC_10("error in insecure-lan-zones: %s", *VAR_6);
    FUNC_11(VAR_8);
    return 0;
   }
  }
 }
 for(VAR_5 = VAR_4->domain_insecure; VAR_5; VAR_5 = VAR_5->next) {
  if(!VAR_5->str || VAR_5->str[0] == 0)
   continue;
  if(!FUNC_0(VAR_3, VAR_5->str)) {
   FUNC_10("error in domain-insecure: %s", VAR_5->str);
   FUNC_11(VAR_8);
   return 0;
  }
 }
 for(VAR_5 = VAR_4->trust_anchor_file_list; VAR_5; VAR_5 = VAR_5->next) {
  if(!VAR_5->str || VAR_5->str[0] == 0)
   continue;
  VAR_7 = VAR_5->str;
  if(VAR_4->chrootdir && VAR_4->chrootdir[0] && FUNC_14(VAR_7,
   VAR_4->chrootdir, FUNC_13(VAR_4->chrootdir)) == 0)
   VAR_7 += FUNC_13(VAR_4->chrootdir);
  if(!FUNC_2(VAR_3, VAR_8, VAR_7, 0)) {
   FUNC_10("error reading trust-anchor-file: %s", VAR_5->str);
   FUNC_11(VAR_8);
   return 0;
  }
 }
 for(VAR_5 = VAR_4->trusted_keys_file_list; VAR_5; VAR_5 = VAR_5->next) {
  if(!VAR_5->str || VAR_5->str[0] == 0)
   continue;
  VAR_7 = VAR_5->str;
  if(VAR_4->chrootdir && VAR_4->chrootdir[0] && FUNC_14(VAR_7,
   VAR_4->chrootdir, FUNC_13(VAR_4->chrootdir)) == 0)
   VAR_7 += FUNC_13(VAR_4->chrootdir);
  if(!FUNC_1(VAR_3, VAR_8, VAR_7)) {
   FUNC_10("error reading trusted-keys-file: %s", VAR_5->str);
   FUNC_11(VAR_8);
   return 0;
  }
 }
 for(VAR_5 = VAR_4->trust_anchor_list; VAR_5; VAR_5 = VAR_5->next) {
  if(!VAR_5->str || VAR_5->str[0] == 0)
   continue;
  if(!FUNC_3(VAR_3, VAR_8, VAR_5->str)) {
   FUNC_10("error in trust-anchor: \"%s\"", VAR_5->str);
   FUNC_11(VAR_8);
   return 0;
  }
 }
 if(VAR_4->dlv_anchor_file && VAR_4->dlv_anchor_file[0] != 0) {
  struct trust_anchor* VAR_9;
  VAR_7 = VAR_4->dlv_anchor_file;
  if(VAR_4->chrootdir && VAR_4->chrootdir[0] && FUNC_14(VAR_7,
   VAR_4->chrootdir, FUNC_13(VAR_4->chrootdir)) == 0)
   VAR_7 += FUNC_13(VAR_4->chrootdir);
  if(!(VAR_9 = FUNC_2(VAR_3, VAR_8,
   VAR_7, 1))) {
   FUNC_10("error reading dlv-anchor-file: %s",
    VAR_4->dlv_anchor_file);
   FUNC_11(VAR_8);
   return 0;
  }
  FUNC_8(&VAR_3->lock);
  VAR_3->dlv_anchor = VAR_9;
  FUNC_9(&VAR_3->lock);
 }
 for(VAR_5 = VAR_4->dlv_anchor_list; VAR_5; VAR_5 = VAR_5->next) {
  struct trust_anchor* VAR_10;
  if(!VAR_5->str || VAR_5->str[0] == 0)
   continue;
  if(!(VAR_10 = FUNC_3(
   VAR_3, VAR_8, VAR_5->str))) {
   FUNC_10("error in dlv-anchor: \"%s\"", VAR_5->str);
   FUNC_11(VAR_8);
   return 0;
  }
  FUNC_8(&VAR_3->lock);
  VAR_3->dlv_anchor = VAR_10;
  FUNC_9(&VAR_3->lock);
 }


 for(VAR_5 = VAR_4->auto_trust_anchor_file_list; VAR_5; VAR_5 = VAR_5->next) {
  if(!VAR_5->str || VAR_5->str[0] == 0)
   continue;
  VAR_7 = VAR_5->str;
  if(VAR_4->chrootdir && VAR_4->chrootdir[0] && FUNC_14(VAR_7,
   VAR_4->chrootdir, FUNC_13(VAR_4->chrootdir)) == 0)
   VAR_7 += FUNC_13(VAR_4->chrootdir);
  if(!FUNC_6(VAR_3, VAR_7)) {
   FUNC_10("error reading auto-trust-anchor-file: %s",
    VAR_5->str);
   FUNC_11(VAR_8);
   return 0;
  }
 }

 FUNC_4(VAR_3);
 FUNC_7(VAR_3);
 FUNC_11(VAR_8);
 if(VAR_2 >= VAR_0) FUNC_5(VAR_3);
 return 1;
}
