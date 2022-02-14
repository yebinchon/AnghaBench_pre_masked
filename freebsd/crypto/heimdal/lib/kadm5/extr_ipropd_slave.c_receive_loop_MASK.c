
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef int krb5_storage ;
typedef int krb5_context ;
struct TYPE_5__ {scalar_t__ version; int log_fd; } ;
struct TYPE_6__ {TYPE_1__ log_context; int context; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ int32_t ;
typedef enum kadm_ops { ____Placeholder_kadm_ops } kadm_ops ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int,scalar_t__,scalar_t__,int *) ;
 int FUNC_3 (int ,int,int ,char*) ;
 int FUNC_4 (int ,int,char*,...) ;
 int FUNC_5 (int ,char const*) ;
 char* FUNC_6 (int ,int) ;
 int FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (int *,void*,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,scalar_t__,int ) ;
 int FUNC_10 (int ,char*,long,...) ;
 void* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ,void*,scalar_t__) ;

__attribute__((used)) static void
FUNC_13 (krb5_context VAR_4,
       krb5_storage *VAR_5,
       kadm5_server_context *VAR_6)
{
    int VAR_7;
    off_t VAR_8, VAR_9;
    void *VAR_10;
    int32_t VAR_11, VAR_12;
    ssize_t VAR_13;




    do {
 int32_t VAR_14, VAR_15, VAR_16;
 enum kadm_ops VAR_17;

 if(FUNC_7 (VAR_5, &VAR_11) != 0)
     return;
 FUNC_7 (VAR_5, &VAR_15);
 FUNC_7 (VAR_5, &VAR_16);
 VAR_17 = VAR_16;
 FUNC_7 (VAR_5, &VAR_14);
 if ((uint32_t)VAR_11 <= VAR_6->log_context.version)
     FUNC_9(VAR_5, VAR_14 + 8, VAR_0);
    } while((uint32_t)VAR_11 <= VAR_6->log_context.version);




    VAR_8 = FUNC_9 (VAR_5, -16, VAR_0);
    VAR_9 = FUNC_9 (VAR_5, 0, VAR_1);
    VAR_10 = FUNC_11 (VAR_9 - VAR_8);
    if (VAR_10 == ((void*)0) && (VAR_9 - VAR_8) != 0)
 FUNC_4 (VAR_4, 1, "malloc: no memory");




    FUNC_9 (VAR_5, VAR_8, VAR_2);
    FUNC_8 (VAR_5, VAR_10, VAR_9 - VAR_8);
    VAR_13 = FUNC_12 (VAR_6->log_context.log_fd, VAR_10, VAR_9-VAR_8);
    if (VAR_13 != VAR_9 - VAR_8)
 FUNC_3(VAR_4, 1, VAR_3, "Failed to write log to disk");
    VAR_7 = FUNC_1 (VAR_6->log_context.log_fd);
    if (VAR_7)
 FUNC_3(VAR_4, 1, VAR_3, "Failed to sync log to disk");
    FUNC_0 (VAR_10);





    FUNC_9 (VAR_5, VAR_8, VAR_2);

    for(;;) {
 int32_t VAR_18, VAR_19, VAR_20, VAR_21;
 off_t VAR_22, VAR_23;
 enum kadm_ops VAR_24;

 if(FUNC_7 (VAR_5, &VAR_11) != 0)
     break;
 VAR_7 = FUNC_7 (VAR_5, &VAR_20);
 if (VAR_7) FUNC_4(VAR_4, 1, "entry %ld: too short", (long)VAR_11);
 VAR_7 = FUNC_7 (VAR_5, &VAR_21);
 if (VAR_7) FUNC_4(VAR_4, 1, "entry %ld: too short", (long)VAR_11);
 VAR_24 = VAR_21;
 VAR_7 = FUNC_7 (VAR_5, &VAR_18);
 if (VAR_7) FUNC_4(VAR_4, 1, "entry %ld: too short", (long)VAR_11);
 if (VAR_18 < 0)
     FUNC_4(VAR_4, 1, "log is corrupted, "
        "negative length of entry version %ld: %ld",
        (long)VAR_11, (long)VAR_18);
 VAR_22 = FUNC_9(VAR_5, 0, VAR_0);

 FUNC_10 (VAR_4, "replaying entry %d", (int)VAR_11);

 VAR_7 = FUNC_2 (VAR_6,
    VAR_24, VAR_11, VAR_18, VAR_5);
 if (VAR_7) {
     const char *VAR_25 = FUNC_6(VAR_6->context, VAR_7);
     FUNC_10 (VAR_4,
   "kadm5_log_replay: %ld. Lost entry entry, "
   "Database out of sync ?: %s (%d)",
   (long)VAR_11, VAR_25 ? VAR_25 : "unknown error", VAR_7);
     FUNC_5(VAR_4, VAR_25);
 }

 {




     VAR_23 = FUNC_9(VAR_5, 0, VAR_0);
     if (VAR_22 + VAR_18 != VAR_23)
  FUNC_4(VAR_4, 1,
     "kadm5_log_reply version: %ld didn't read the whole entry",
     (long)VAR_11);
 }

 if (FUNC_7 (VAR_5, &VAR_19) != 0)
     FUNC_4(VAR_4, 1, "entry %ld: postamble too short", (long)VAR_11);
 if(FUNC_7 (VAR_5, &VAR_12) != 0)
     FUNC_4(VAR_4, 1, "entry %ld: postamble too short", (long)VAR_11);

 if (VAR_18 != VAR_19)
     FUNC_4(VAR_4, 1, "entry %ld: len != len2", (long)VAR_11);
 if (VAR_11 != VAR_12)
     FUNC_4(VAR_4, 1, "entry %ld: vers != vers2", (long)VAR_11);
    }





    VAR_6->log_context.version = VAR_11;
}
