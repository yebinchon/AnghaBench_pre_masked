
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stash_options {char* key_file_string; int master_key_fd_integer; scalar_t__ random_password_flag; scalar_t__ convert_file_flag; int enctype_string; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {scalar_t__ length; int * data; } ;
struct TYPE_5__ {TYPE_1__ saltvalue; int salttype; } ;
typedef TYPE_2__ krb5_salt ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
typedef int hdb_master_key ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char**,char*,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,char*,int *) ;
 scalar_t__ FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int ,int *) ;
 scalar_t__ FUNC_11 (int ,int ,char*,TYPE_2__,int *) ;
 int FUNC_12 (int ,scalar_t__,char*,...) ;
 int FUNC_13 (int ,char*,...) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int VAR_5 ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,int) ;
 size_t FUNC_17 (int,char*,int) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 size_t FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (char*) ;

int
FUNC_21(struct stash_options *VAR_6, int VAR_7, char **VAR_8)
{
    char VAR_9[1024];
    krb5_error_code VAR_10;
    krb5_enctype VAR_11;
    hdb_master_key VAR_12;

    if(!VAR_5) {
 FUNC_13(VAR_3, "stash is only available in local (-l) mode");
 return 0;
    }

    VAR_10 = FUNC_10(VAR_3, VAR_6->enctype_string, &VAR_11);
    if(VAR_10) {
 FUNC_12(VAR_3, VAR_10, "%s", VAR_6->enctype_string);
 return 0;
    }

    if(VAR_6->key_file_string == ((void*)0)) {
 FUNC_1(&VAR_6->key_file_string, "%s/m-key", FUNC_5(VAR_3));
 if (VAR_6->key_file_string == ((void*)0))
     FUNC_2(1, "out of memory");
    }

    VAR_10 = FUNC_7(VAR_3, VAR_6->key_file_string, &VAR_12);
    if(VAR_10 && VAR_10 != VAR_0) {
 FUNC_12(VAR_3, VAR_10, "reading master key from %s",
    VAR_6->key_file_string);
 return 0;
    }

    if (VAR_6->convert_file_flag) {
 if (VAR_10)
     FUNC_12(VAR_3, VAR_10, "reading master key from %s",
        VAR_6->key_file_string);
 return 0;
    } else {
 krb5_keyblock VAR_13;
 krb5_salt VAR_14;
 VAR_14.salttype = VAR_2;

 VAR_14.saltvalue.data = ((void*)0);
 VAR_14.saltvalue.length = 0;
 if(VAR_6->master_key_fd_integer != -1) {
     ssize_t VAR_15;
     VAR_15 = FUNC_17(VAR_6->master_key_fd_integer, VAR_9, sizeof(VAR_9));
     if(VAR_15 == 0)
  FUNC_13(VAR_3, "end of file reading passphrase");
     else if(VAR_15 < 0) {
  FUNC_12(VAR_3, VAR_4, "reading passphrase");
  VAR_15 = 0;
     }
     VAR_9[VAR_15] = '\0';
     VAR_9[FUNC_19(VAR_9, "\r\n")] = '\0';
 } else if (VAR_6->random_password_flag) {
     FUNC_16 (VAR_9, sizeof(VAR_9));
     FUNC_15("Using random master stash password: %s\n", VAR_9);
 } else {
     if(FUNC_0(VAR_9, sizeof(VAR_9), "Master key: ", 1)) {
  FUNC_6(VAR_3, VAR_12);
  return 0;
     }
 }
 VAR_10 = FUNC_11(VAR_3, VAR_11, VAR_9, VAR_14, &VAR_13);
 VAR_10 = FUNC_4(VAR_3, &VAR_13, &VAR_12);
 FUNC_9(VAR_3, &VAR_13);
    }

    {
 char *VAR_16, *VAR_17;
 FUNC_1(&VAR_17, "%s.old", VAR_6->key_file_string);
 FUNC_1(&VAR_16, "%s.new", VAR_6->key_file_string);
 if(VAR_17 == ((void*)0) || VAR_16 == ((void*)0)) {
     VAR_10 = VAR_1;
     goto out;
 }

 if(FUNC_20(VAR_16) < 0 && VAR_4 != VAR_0) {
     VAR_10 = VAR_4;
     goto out;
 }
 FUNC_13(VAR_3, "writing key to \"%s\"", VAR_6->key_file_string);
 VAR_10 = FUNC_8(VAR_3, VAR_16, VAR_12);
 if(VAR_10)
     FUNC_20(VAR_16);
 else {
     FUNC_20(VAR_17);

     if(FUNC_14(VAR_6->key_file_string, VAR_17) < 0 && VAR_4 != VAR_0) {
  VAR_10 = VAR_4;
  FUNC_20(VAR_16);
     } else {

  if(FUNC_18(VAR_16, VAR_6->key_file_string) < 0) {
      VAR_10 = VAR_4;
  }

     }

 }
    out:
 FUNC_3(VAR_17);
 FUNC_3(VAR_16);
 if(VAR_10)
     FUNC_12(VAR_3, VAR_4, "writing master key file");
    }

    FUNC_6(VAR_3, VAR_12);
    return 0;
}
