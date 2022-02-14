
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
typedef int off_t ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef scalar_t__ int32_t ;
typedef enum kadm_ops { ____Placeholder_kadm_ops } kadm_ops ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,char*,...) ;
 int FUNC_2 (int *,int,int ) ;

kadm5_ret_t
FUNC_3 (krb5_context VAR_3,
      krb5_storage *VAR_4,
      uint32_t *VAR_5,
      time_t *VAR_6,
      enum kadm_ops *VAR_7,
      uint32_t *VAR_8)
{
    krb5_error_code VAR_9;
    off_t VAR_10, VAR_11;
    int32_t VAR_12;

    VAR_11 = FUNC_2(VAR_4, 0, VAR_1);

    FUNC_2(VAR_4, -8, VAR_1);
    VAR_9 = FUNC_0 (VAR_4, &VAR_12);
    if (VAR_9)
 goto end_of_storage;
    *VAR_8 = VAR_12;
    VAR_9 = FUNC_0 (VAR_4, &VAR_12);
    if (VAR_9)
 goto end_of_storage;
    *VAR_5 = VAR_12;
    VAR_10 = 24 + *VAR_8;
    FUNC_2(VAR_4, -VAR_10, VAR_1);
    VAR_9 = FUNC_0 (VAR_4, &VAR_12);
    if (VAR_9)
 goto end_of_storage;
    if ((uint32_t)VAR_12 != *VAR_5) {
 FUNC_2(VAR_4, VAR_11, VAR_2);
 FUNC_1(VAR_3, VAR_0,
          "kadm5_log_previous: log entry "
          "have consistency failure, version number wrong "
          "(tmp %lu ver %lu)",
          (unsigned long)VAR_12,
          (unsigned long)*VAR_5);
 return VAR_0;
    }
    VAR_9 = FUNC_0 (VAR_4, &VAR_12);
    if (VAR_9)
 goto end_of_storage;
    *VAR_6 = VAR_12;
    VAR_9 = FUNC_0 (VAR_4, &VAR_12);
    if (VAR_9)
 goto end_of_storage;
    *VAR_7 = VAR_12;
    VAR_9 = FUNC_0 (VAR_4, &VAR_12);
    if (VAR_9)
 goto end_of_storage;
    if ((uint32_t)VAR_12 != *VAR_8) {
 FUNC_2(VAR_4, VAR_11, VAR_2);
 FUNC_1(VAR_3, VAR_0,
          "kadm5_log_previous: log entry "
          "have consistency failure, length wrong");
 return VAR_0;
    }
    return 0;

 end_of_storage:
    FUNC_2(VAR_4, VAR_11, VAR_2);
    FUNC_1(VAR_3, VAR_9, "kadm5_log_previous: end of storage "
      "reached before end");
    return VAR_9;
}
