
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _heimdal_syslog_data {int priority; } ;
struct TYPE_4__ {int program; } ;
typedef TYPE_1__ krb5_log_facility ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int VAR_5 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ,TYPE_1__*,int,int,int ,int ,struct _heimdal_syslog_data*) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_6 ;
 struct _heimdal_syslog_data* FUNC_4 (int) ;
 int FUNC_5 (int ,int,int) ;
 int VAR_7 ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_8,
     krb5_log_facility *VAR_9, int VAR_10, int VAR_11,
     const char *VAR_12, const char *VAR_13)
{
    struct _heimdal_syslog_data *VAR_14 = FUNC_4(sizeof(*VAR_14));
    int VAR_15;

    if(VAR_14 == ((void*)0)) {
 FUNC_3(VAR_8, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_15 = FUNC_1(VAR_12, VAR_7);
    if(VAR_15 == -1)
 VAR_15 = VAR_2;
    VAR_14->priority = VAR_15;
    VAR_15 = FUNC_1(VAR_13, VAR_7);
    if(VAR_15 == -1)
 VAR_15 = VAR_1;
    VAR_14->priority |= VAR_15;
    FUNC_5(VAR_9->program, VAR_4 | VAR_3, VAR_15);
    return FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11,
       VAR_6, VAR_5, VAR_14);
}
