
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct entry {char* principal; char* key; char* created; char* modified; char* valid_start; char* valid_end; char* pw_end; char* max_life; char* max_renew; char* flags; char* generation; char* extensions; } ;
typedef int s ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_13__ {int extensions; int generation; int flags; int max_renew; int max_life; int pw_end; int valid_end; int valid_start; int modified_by; int created_by; int principal; } ;
struct TYPE_11__ {TYPE_7__ entry; } ;
typedef TYPE_1__ hdb_entry_ex ;
typedef int ent ;
struct TYPE_12__ {scalar_t__ (* hdb_open ) (int ,TYPE_2__*,int,int) ;scalar_t__ (* hdb_store ) (int ,TYPE_2__*,int ,TYPE_1__*) ;int (* hdb_close ) (int ,TYPE_2__*) ;} ;
typedef TYPE_2__ HDB ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,char const*,int,char const*,...) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (int ,char const*) ;
 char* FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,char*,int *) ;
 int FUNC_11 (int ,scalar_t__,char*,...) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (char*,int *) ;
 int FUNC_16 (char*,int *) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (int *,char*) ;
 scalar_t__ FUNC_19 (TYPE_7__*,char*) ;
 int FUNC_20 (int *,char*) ;
 char* FUNC_21 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_22 (int ,TYPE_2__*,int,int) ;
 scalar_t__ FUNC_23 (int ,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_24 (int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_25(const char *VAR_8, int VAR_9)
{
    krb5_error_code VAR_10;
    FILE *VAR_11;
    char VAR_12[8192];
    char *VAR_13;
    int VAR_14;
    int VAR_15 = VAR_2;
    struct entry VAR_16;
    hdb_entry_ex VAR_17;
    HDB *VAR_18 = FUNC_0(VAR_6);

    VAR_11 = FUNC_3(VAR_8, "r");
    if(VAR_11 == ((void*)0)){
 FUNC_11(VAR_4, VAR_5, "fopen(%s)", VAR_8);
 return 1;
    }
    VAR_10 = FUNC_7 (VAR_6);
    if (VAR_10) {
 FUNC_1 (VAR_11);
 FUNC_11(VAR_4, VAR_10, "kadm5_log_truncate");
 return 1;
    }

    if(!VAR_9)
 VAR_15 |= VAR_1 | VAR_3;
    VAR_10 = VAR_18->hdb_open(VAR_4, VAR_18, VAR_15, 0600);
    if(VAR_10){
 FUNC_11(VAR_4, VAR_10, "hdb_open");
 FUNC_1(VAR_11);
 return 1;
    }
    VAR_14 = 0;
    VAR_10 = 0;
    while(FUNC_2(VAR_12, sizeof(VAR_12), VAR_11) != ((void*)0)) {
 VAR_14++;

 VAR_13 = VAR_12;
 while (FUNC_6((unsigned char)*VAR_13))
     VAR_13++;

 VAR_16.principal = VAR_13;
 for(VAR_13 = VAR_12; *VAR_13; VAR_13++){
     if(*VAR_13 == '\\')
  VAR_13++;
     else if(FUNC_6((unsigned char)*VAR_13)) {
  *VAR_13 = 0;
  break;
     }
 }
 VAR_13 = FUNC_21(VAR_13);

 VAR_16.key = VAR_13;
 VAR_13 = FUNC_21(VAR_13);

 VAR_16.created = VAR_13;
 VAR_13 = FUNC_21(VAR_13);

 VAR_16.modified = VAR_13;
 VAR_13 = FUNC_21(VAR_13);

 VAR_16.valid_start = VAR_13;
 VAR_13 = FUNC_21(VAR_13);

 VAR_16.valid_end = VAR_13;
 VAR_13 = FUNC_21(VAR_13);

 VAR_16.pw_end = VAR_13;
 VAR_13 = FUNC_21(VAR_13);

 VAR_16.max_life = VAR_13;
 VAR_13 = FUNC_21(VAR_13);

 VAR_16.max_renew = VAR_13;
 VAR_13 = FUNC_21(VAR_13);

 VAR_16.flags = VAR_13;
 VAR_13 = FUNC_21(VAR_13);

 VAR_16.generation = VAR_13;
 VAR_13 = FUNC_21(VAR_13);

 VAR_16.extensions = VAR_13;
 FUNC_21(VAR_13);

 FUNC_12(&VAR_17, 0, sizeof(VAR_17));
 VAR_10 = FUNC_10(VAR_4, VAR_16.principal, &VAR_17.entry.principal);
 if(VAR_10) {
     const char *VAR_19 = FUNC_9(VAR_4, VAR_10);
     FUNC_4(VAR_7, "%s:%d:%s (%s)\n",
      VAR_8, VAR_14, VAR_19, VAR_16.principal);
     FUNC_8(VAR_4, VAR_19);
     continue;
 }

 if (FUNC_19(&VAR_17.entry, VAR_16.key)) {
     FUNC_4 (VAR_7, "%s:%d:error parsing keys (%s)\n",
       VAR_8, VAR_14, VAR_16.key);
     FUNC_5 (VAR_4, &VAR_17);
     continue;
 }

 if (FUNC_13(&VAR_17.entry.created_by, VAR_16.created) == -1) {
     FUNC_4 (VAR_7, "%s:%d:error parsing created event (%s)\n",
       VAR_8, VAR_14, VAR_16.created);
     FUNC_5 (VAR_4, &VAR_17);
     continue;
 }
 if (FUNC_14 (&VAR_17.entry.modified_by, VAR_16.modified) == -1) {
     FUNC_4 (VAR_7, "%s:%d:error parsing event (%s)\n",
       VAR_8, VAR_14, VAR_16.modified);
     FUNC_5 (VAR_4, &VAR_17);
     continue;
 }
 if (FUNC_20 (&VAR_17.entry.valid_start, VAR_16.valid_start) == -1) {
     FUNC_4 (VAR_7, "%s:%d:error parsing time (%s)\n",
       VAR_8, VAR_14, VAR_16.valid_start);
     FUNC_5 (VAR_4, &VAR_17);
     continue;
 }
 if (FUNC_20 (&VAR_17.entry.valid_end, VAR_16.valid_end) == -1) {
     FUNC_4 (VAR_7, "%s:%d:error parsing time (%s)\n",
       VAR_8, VAR_14, VAR_16.valid_end);
     FUNC_5 (VAR_4, &VAR_17);
     continue;
 }
 if (FUNC_20 (&VAR_17.entry.pw_end, VAR_16.pw_end) == -1) {
     FUNC_4 (VAR_7, "%s:%d:error parsing time (%s)\n",
       VAR_8, VAR_14, VAR_16.pw_end);
     FUNC_5 (VAR_4, &VAR_17);
     continue;
 }

 if (FUNC_18 (&VAR_17.entry.max_life, VAR_16.max_life) == -1) {
     FUNC_4 (VAR_7, "%s:%d:error parsing lifetime (%s)\n",
       VAR_8, VAR_14, VAR_16.max_life);
     FUNC_5 (VAR_4, &VAR_17);
     continue;

 }
 if (FUNC_18 (&VAR_17.entry.max_renew, VAR_16.max_renew) == -1) {
     FUNC_4 (VAR_7, "%s:%d:error parsing lifetime (%s)\n",
       VAR_8, VAR_14, VAR_16.max_renew);
     FUNC_5 (VAR_4, &VAR_17);
     continue;
 }

 if (FUNC_17 (&VAR_17.entry.flags, VAR_16.flags) != 1) {
     FUNC_4 (VAR_7, "%s:%d:error parsing flags (%s)\n",
       VAR_8, VAR_14, VAR_16.flags);
     FUNC_5 (VAR_4, &VAR_17);
     continue;
 }

 if(FUNC_16(VAR_16.generation, &VAR_17.entry.generation) == -1) {
     FUNC_4 (VAR_7, "%s:%d:error parsing generation (%s)\n",
       VAR_8, VAR_14, VAR_16.generation);
     FUNC_5 (VAR_4, &VAR_17);
     continue;
 }

 if(FUNC_15(VAR_16.extensions, &VAR_17.entry.extensions) == -1) {
     FUNC_4 (VAR_7, "%s:%d:error parsing extension (%s)\n",
       VAR_8, VAR_14, VAR_16.extensions);
     FUNC_5 (VAR_4, &VAR_17);
     continue;
 }

 VAR_10 = VAR_18->hdb_store(VAR_4, VAR_18, VAR_0, &VAR_17);
 FUNC_5 (VAR_4, &VAR_17);
 if (VAR_10) {
     FUNC_11(VAR_4, VAR_10, "db_store");
     break;
 }
    }
    VAR_18->hdb_close(VAR_4, VAR_18);
    FUNC_1(VAR_11);
    return VAR_10 != 0;
}
