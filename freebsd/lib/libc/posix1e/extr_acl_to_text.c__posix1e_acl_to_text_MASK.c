
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct acl {int acl_cnt; TYPE_1__* acl_entry; } ;
typedef int ssize_t ;
typedef int acl_tag_t ;
typedef TYPE_2__* acl_t ;
typedef int acl_perm_t ;
struct TYPE_5__ {struct acl ats_acl; } ;
struct TYPE_4__ {scalar_t__ ae_tag; int ae_perm; int ae_id; } ;






 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int,char*,int) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (char**,char*,char*,char*,...) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(acl_t VAR_5, ssize_t *VAR_6, int VAR_7)
{
 struct acl *VAR_8;
 char *VAR_9, *VAR_10;
 char VAR_11[VAR_2];
 char VAR_12[VAR_3+1],
    VAR_13[VAR_3+1];
 int VAR_14, VAR_15, VAR_16;
 uid_t VAR_17;
 acl_tag_t VAR_18;
 acl_perm_t VAR_19, VAR_20, VAR_21;

 VAR_9 = FUNC_4("");
 if (VAR_9 == ((void*)0))
  return(((void*)0));

 VAR_8 = &VAR_5->ats_acl;

 VAR_21 = VAR_0;
 for (VAR_14 = 0; VAR_14 < VAR_8->acl_cnt; VAR_14++)
  if (VAR_8->acl_entry[VAR_14].ae_tag == 131)
   VAR_21 = VAR_8->acl_entry[VAR_14].ae_perm;

 for (VAR_14 = 0; VAR_14 < VAR_8->acl_cnt; VAR_14++) {
  VAR_18 = VAR_8->acl_entry[VAR_14].ae_tag;
  VAR_17 = VAR_8->acl_entry[VAR_14].ae_id;
  VAR_19 = VAR_8->acl_entry[VAR_14].ae_perm;

  switch(VAR_18) {
  case 128:
   VAR_15 = FUNC_1(VAR_19,
       VAR_3+1, VAR_12);
   if (VAR_15)
    goto error_label;
   VAR_16 = FUNC_2(&VAR_10, "%suser::%s\n", VAR_9,
       VAR_12);
   if (VAR_16 == -1)
    goto error_label;
   FUNC_3(VAR_9);
   VAR_9 = VAR_10;
   break;

  case 129:
   VAR_15 = FUNC_1(VAR_19,
       VAR_3+1, VAR_12);
   if (VAR_15)
    goto error_label;

   VAR_15 = FUNC_0(VAR_18, VAR_17,
       VAR_2, VAR_11, VAR_7);
   if (VAR_15)
    goto error_label;

   VAR_20 = VAR_19 & VAR_21;
   if (VAR_20 != VAR_19) {
    VAR_15 = FUNC_1(
        VAR_20,
        VAR_3+1,
        VAR_13);
    if (VAR_15)
     goto error_label;
    VAR_16 = FUNC_2(&VAR_10, "%suser:%s:%s\t\t# "
        "effective: %s\n",
        VAR_9, VAR_11, VAR_12,
        VAR_13);
   } else {
    VAR_16 = FUNC_2(&VAR_10, "%suser:%s:%s\n", VAR_9,
        VAR_11, VAR_12);
   }
   if (VAR_16 == -1)
    goto error_label;
   FUNC_3(VAR_9);
   VAR_9 = VAR_10;
   break;

  case 132:
   VAR_15 = FUNC_1(VAR_19,
       VAR_3+1, VAR_12);
   if (VAR_15)
    goto error_label;

   VAR_20 = VAR_19 & VAR_21;
   if (VAR_20 != VAR_19) {
    VAR_15 = FUNC_1(
        VAR_20,
        VAR_3+1,
        VAR_13);
    if (VAR_15)
     goto error_label;
    VAR_16 = FUNC_2(&VAR_10, "%sgroup::%s\t\t# "
        "effective: %s\n",
        VAR_9, VAR_12, VAR_13);
   } else {
    VAR_16 = FUNC_2(&VAR_10, "%sgroup::%s\n", VAR_9,
        VAR_12);
   }
   if (VAR_16 == -1)
    goto error_label;
   FUNC_3(VAR_9);
   VAR_9 = VAR_10;
   break;

  case 133:
   VAR_15 = FUNC_1(VAR_19,
       VAR_3+1, VAR_12);
   if (VAR_15)
    goto error_label;

   VAR_15 = FUNC_0(VAR_18, VAR_17,
       VAR_2, VAR_11, VAR_7);
   if (VAR_15)
    goto error_label;

   VAR_20 = VAR_19 & VAR_21;
   if (VAR_20 != VAR_19) {
    VAR_15 = FUNC_1(
        VAR_20,
        VAR_3+1,
        VAR_13);
    if (VAR_15)
     goto error_label;
    VAR_16 = FUNC_2(&VAR_10, "%sgroup:%s:%s\t\t# "
        "effective: %s\n",
        VAR_9, VAR_11, VAR_12,
        VAR_13);
   } else {
    VAR_16 = FUNC_2(&VAR_10, "%sgroup:%s:%s\n", VAR_9,
        VAR_11, VAR_12);
   }
   if (VAR_16 == -1)
    goto error_label;
   FUNC_3(VAR_9);
   VAR_9 = VAR_10;
   break;

  case 131:
   VAR_15 = FUNC_1(VAR_19,
       VAR_3+1, VAR_12);
   if (VAR_15)
    goto error_label;

   VAR_16 = FUNC_2(&VAR_10, "%smask::%s\n", VAR_9,
       VAR_12);
   if (VAR_16 == -1)
    goto error_label;
   FUNC_3(VAR_9);
   VAR_9 = VAR_10;
   break;

  case 130:
   VAR_15 = FUNC_1(VAR_19,
       VAR_3+1, VAR_12);
   if (VAR_15)
    goto error_label;

   VAR_16 = FUNC_2(&VAR_10, "%sother::%s\n", VAR_9,
       VAR_12);
   if (VAR_16 == -1)
    goto error_label;
   FUNC_3(VAR_9);
   VAR_9 = VAR_10;
   break;

  default:
   VAR_4 = VAR_1;
   goto error_label;
  }
 }

 if (VAR_6) {
  *VAR_6 = FUNC_5(VAR_9);
 }
 return (VAR_9);

error_label:

 if (VAR_9) FUNC_3(VAR_9);
 return (((void*)0));
}
