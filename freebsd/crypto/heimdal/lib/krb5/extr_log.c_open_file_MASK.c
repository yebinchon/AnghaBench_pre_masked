
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_data {char const* filename; char const* mode; int keep_open; int * fd; } ;
typedef int krb5_log_facility ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int,int,int ,int ,struct file_data*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 struct file_data* FUNC_3 (int) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_3, krb5_log_facility *VAR_4, int VAR_5, int VAR_6,
   const char *VAR_7, const char *VAR_8, FILE *VAR_9, int VAR_10)
{
    struct file_data *VAR_11 = FUNC_3(sizeof(*VAR_11));
    if(VAR_11 == ((void*)0)) {
 FUNC_2(VAR_3, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_11->filename = VAR_7;
    VAR_11->mode = VAR_8;
    VAR_11->fd = VAR_9;
    VAR_11->keep_open = VAR_10;

    return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_2, VAR_1, VAR_11);
}
