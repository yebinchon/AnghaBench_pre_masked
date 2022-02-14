
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int member_1; } ;
typedef TYPE_1__ zprop_index_t ;


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
 int FUNC_0 (int ,char*,int ,int ,int ,char*) ;
 int FUNC_1 (int ,char*,int const,int ,int ,char*,char*,TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ,int ,int ,char*,char*) ;
 int FUNC_3 (int ,char*,int *,int ,int ,char*,char*) ;

void
FUNC_4(void)
{
 static zprop_index_t VAR_36[] = {
  { "off", 0},
  { "on", 1},
  { ((void*)0) }
 };

 static zprop_index_t VAR_37[] = {
  { "wait", 128 },
  { "continue", 130 },
  { "panic", 129 },
  { ((void*)0) }
 };


 FUNC_3(VAR_8, "altroot", ((void*)0), VAR_0,
     VAR_6, "<path>", "ALTROOT");
 FUNC_3(VAR_11, "bootfs", ((void*)0), VAR_0,
     VAR_6, "<filesystem>", "BOOTFS");
 FUNC_3(VAR_13, "cachefile", ((void*)0),
     VAR_0, VAR_6, "<file> | none", "CACHEFILE");
 FUNC_3(VAR_16, "comment", ((void*)0),
     VAR_0, VAR_6, "<comment-string>", "COMMENT");


 FUNC_2(VAR_33, "size", 0, VAR_2,
     VAR_6, "<size>", "SIZE");
 FUNC_2(VAR_23, "free", 0, VAR_2,
     VAR_6, "<size>", "FREE");
 FUNC_2(VAR_24, "freeing", 0, VAR_2,
     VAR_6, "<size>", "FREEING");
 FUNC_2(VAR_15, "checkpoint", 0,
     VAR_2, VAR_6, "<size>", "CKPOINT");
 FUNC_2(VAR_27, "leaked", 0, VAR_2,
     VAR_6, "<size>", "LEAKED");
 FUNC_2(VAR_7, "allocated", 0,
     VAR_2, VAR_6, "<size>", "ALLOC");
 FUNC_2(VAR_20, "expandsize", 0,
     VAR_2, VAR_6, "<size>", "EXPANDSZ");
 FUNC_2(VAR_22, "fragmentation", 0,
     VAR_2, VAR_6, "<percent>", "FRAG");
 FUNC_2(VAR_14, "capacity", 0, VAR_2,
     VAR_6, "<size>", "CAP");
 FUNC_2(VAR_25, "guid", 0, VAR_2,
     VAR_6, "<guid>", "GUID");
 FUNC_2(VAR_26, "health", 0, VAR_2,
     VAR_6, "<state>", "HEALTH");
 FUNC_2(VAR_18, "dedupratio", 0,
     VAR_2, VAR_6, "<1.00x or higher if deduped>",
     "DEDUP");


 FUNC_2(VAR_12, "bootsize", 0, VAR_1,
     VAR_6, "<size>", "BOOTSIZE");


 FUNC_2(VAR_35, "version", VAR_5,
     VAR_0, VAR_6, "<version>", "VERSION");
 FUNC_2(VAR_17, "dedupditto", 0,
     VAR_0, VAR_6, "<threshold (min 100)>", "DEDUPDITTO");


 FUNC_1(VAR_19, "delegation", 1,
     VAR_0, VAR_6, "on | off", "DELEGATION",
     VAR_36);
 FUNC_1(VAR_10, "autoreplace", 0,
     VAR_0, VAR_6, "on | off", "REPLACE", VAR_36);
 FUNC_1(VAR_28, "listsnapshots", 0,
     VAR_0, VAR_6, "on | off", "LISTSNAPS",
     VAR_36);
 FUNC_1(VAR_9, "autoexpand", 0,
     VAR_0, VAR_6, "on | off", "EXPAND", VAR_36);
 FUNC_1(VAR_32, "readonly", 0,
     VAR_0, VAR_6, "on | off", "RDONLY", VAR_36);


 FUNC_1(VAR_21, "failmode",
     128, VAR_0, VAR_6,
     "wait | continue | panic", "FAILMODE", VAR_37);


 FUNC_0(VAR_31, "name", VAR_4,
     VAR_2, VAR_6, "NAME");
 FUNC_0(VAR_29, "maxblocksize",
     VAR_3, VAR_2, VAR_6, "MAXBLOCKSIZE");
 FUNC_0(VAR_34, "tname", VAR_4,
     VAR_1, VAR_6, "TNAME");
 FUNC_0(VAR_30, "maxdnodesize",
     VAR_3, VAR_2, VAR_6, "MAXDNODESIZE");
}
