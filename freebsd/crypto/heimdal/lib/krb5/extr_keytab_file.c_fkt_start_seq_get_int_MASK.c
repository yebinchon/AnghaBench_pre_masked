
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fkt_data {int filename; } ;
struct TYPE_5__ {int * sp; int fd; } ;
typedef TYPE_1__ krb5_kt_cursor ;
typedef TYPE_2__* krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int int8_t ;
struct TYPE_6__ {int version; struct fkt_data* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int*) ;
 int FUNC_6 (int ,scalar_t__,int ,...) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *,int) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static krb5_error_code
FUNC_14(krb5_context VAR_4,
        krb5_keytab VAR_5,
        int VAR_6,
        int VAR_7,
        krb5_kt_cursor *VAR_8)
{
    int8_t VAR_9, VAR_10;
    krb5_error_code VAR_11;
    struct fkt_data *VAR_12 = VAR_5->data;

    VAR_8->fd = FUNC_10 (VAR_12->filename, VAR_6);
    if (VAR_8->fd < 0) {
 VAR_11 = VAR_3;
 FUNC_6(VAR_4, VAR_11,
          FUNC_0("keytab %s open failed: %s", ""),
          VAR_12->filename, FUNC_13(VAR_11));
 return VAR_11;
    }
    FUNC_11(VAR_8->fd);
    VAR_11 = FUNC_1(VAR_4, VAR_8->fd, VAR_7, VAR_12->filename);
    if (VAR_11) {
 FUNC_3(VAR_8->fd);
 return VAR_11;
    }
    VAR_8->sp = FUNC_8(VAR_8->fd);
    if (VAR_8->sp == ((void*)0)) {
 FUNC_2(VAR_4, VAR_8->fd);
 FUNC_3(VAR_8->fd);
 FUNC_6(VAR_4, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    FUNC_9(VAR_8->sp, VAR_2);
    VAR_11 = FUNC_5(VAR_8->sp, &VAR_9);
    if(VAR_11) {
 FUNC_7(VAR_8->sp);
 FUNC_2(VAR_4, VAR_8->fd);
 FUNC_3(VAR_8->fd);
 FUNC_4(VAR_4);
 return VAR_11;
    }
    if(VAR_9 != 5) {
 FUNC_7(VAR_8->sp);
 FUNC_2(VAR_4, VAR_8->fd);
 FUNC_3(VAR_8->fd);
 FUNC_4 (VAR_4);
 return VAR_1;
    }
    VAR_11 = FUNC_5(VAR_8->sp, &VAR_10);
    if (VAR_11) {
 FUNC_7(VAR_8->sp);
 FUNC_2(VAR_4, VAR_8->fd);
 FUNC_3(VAR_8->fd);
 FUNC_4(VAR_4);
 return VAR_11;
    }
    VAR_5->version = VAR_10;
    FUNC_12(VAR_4, VAR_8->sp, VAR_5->version);
    return 0;
}
