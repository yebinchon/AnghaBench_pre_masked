
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int starttime_str ;
typedef int pwend_str ;
typedef int krb5_kdc_configuration ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_boolean ;
struct TYPE_6__ {scalar_t__ initial; int server; scalar_t__ invalid; scalar_t__ locked_out; int change_pw; int client; } ;
struct TYPE_8__ {scalar_t__* valid_start; scalar_t__* valid_end; scalar_t__* pw_end; TYPE_1__ flags; } ;
struct TYPE_7__ {TYPE_3__ entry; } ;
typedef TYPE_2__ hdb_entry_ex ;
typedef TYPE_3__ hdb_entry ;
typedef int endtime_str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,int ,char*,char const*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,scalar_t__,char*,int,int ) ;

krb5_error_code
FUNC_2(krb5_context VAR_8,
  krb5_kdc_configuration *VAR_9,
  hdb_entry_ex *VAR_10, const char *VAR_11,
  hdb_entry_ex *VAR_12, const char *VAR_13,
  krb5_boolean VAR_14)
{
    if(VAR_10 != ((void*)0)) {
 hdb_entry *VAR_15 = &VAR_10->entry;


 if (VAR_15->flags.locked_out) {
     FUNC_0(VAR_8, VAR_9, 0,
      "Client (%s) is locked out", VAR_11);
     return VAR_3;
 }

 if (VAR_15->flags.invalid) {
     FUNC_0(VAR_8, VAR_9, 0,
      "Client (%s) has invalid bit set", VAR_11);
     return VAR_3;
 }

 if(!VAR_15->flags.client){
     FUNC_0(VAR_8, VAR_9, 0,
      "Principal may not act as client -- %s", VAR_11);
     return VAR_3;
 }

 if (VAR_15->valid_start && *VAR_15->valid_start > VAR_7) {
     char VAR_16[100];
     FUNC_1(VAR_8, *VAR_15->valid_start,
        VAR_16, sizeof(VAR_16), VAR_6);
     FUNC_0(VAR_8, VAR_9, 0,
      "Client not yet valid until %s -- %s",
      VAR_16, VAR_11);
     return VAR_0;
 }

 if (VAR_15->valid_end && *VAR_15->valid_end < VAR_7) {
     char VAR_17[100];
     FUNC_1(VAR_8, *VAR_15->valid_end,
        VAR_17, sizeof(VAR_17), VAR_6);
     FUNC_0(VAR_8, VAR_9, 0,
      "Client expired at %s -- %s",
      VAR_17, VAR_11);
     return VAR_2;
 }

 if (VAR_15->pw_end && *VAR_15->pw_end < VAR_7
     && (VAR_12 == ((void*)0) || !VAR_12->entry.flags.change_pw)) {
     char VAR_18[100];
     FUNC_1(VAR_8, *VAR_15->pw_end,
        VAR_18, sizeof(VAR_18), VAR_6);
     FUNC_0(VAR_8, VAR_9, 0,
      "Client's key has expired at %s -- %s",
      VAR_18, VAR_11);
     return VAR_1;
 }
    }



    if (VAR_12 != ((void*)0)) {
 hdb_entry *VAR_19 = &VAR_12->entry;

 if (VAR_19->flags.locked_out) {
     FUNC_0(VAR_8, VAR_9, 0,
      "Client server locked out -- %s", VAR_13);
     return VAR_3;
 }
 if (VAR_19->flags.invalid) {
     FUNC_0(VAR_8, VAR_9, 0,
      "Server has invalid flag set -- %s", VAR_13);
     return VAR_3;
 }

 if(!VAR_19->flags.server){
     FUNC_0(VAR_8, VAR_9, 0,
      "Principal may not act as server -- %s", VAR_13);
     return VAR_3;
 }

 if(!VAR_14 && VAR_19->flags.initial) {
     FUNC_0(VAR_8, VAR_9, 0,
      "AS-REQ is required for server -- %s", VAR_13);
     return VAR_3;
 }

 if (VAR_19->valid_start && *VAR_19->valid_start > VAR_7) {
     char VAR_20[100];
     FUNC_1(VAR_8, *VAR_19->valid_start,
        VAR_20, sizeof(VAR_20), VAR_6);
     FUNC_0(VAR_8, VAR_9, 0,
      "Server not yet valid until %s -- %s",
      VAR_20, VAR_13);
     return VAR_5;
 }

 if (VAR_19->valid_end && *VAR_19->valid_end < VAR_7) {
     char VAR_21[100];
     FUNC_1(VAR_8, *VAR_19->valid_end,
        VAR_21, sizeof(VAR_21), VAR_6);
     FUNC_0(VAR_8, VAR_9, 0,
      "Server expired at %s -- %s",
      VAR_21, VAR_13);
     return VAR_4;
 }

 if (VAR_19->pw_end && *VAR_19->pw_end < VAR_7) {
     char VAR_22[100];
     FUNC_1(VAR_8, *VAR_19->pw_end,
        VAR_22, sizeof(VAR_22), VAR_6);
     FUNC_0(VAR_8, VAR_9, 0,
      "Server's key has expired at -- %s",
      VAR_22, VAR_13);
     return VAR_1;
 }
    }
    return 0;
}
