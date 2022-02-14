
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_whence; int l_type; scalar_t__ l_len; scalar_t__ l_start; } ;
typedef int krb5_context ;
typedef scalar_t__ krb5_boolean ;
typedef int buf ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ,struct flock*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int ,char const*,...) ;
 int FUNC_4 (int,char*,int) ;

int
FUNC_5(krb5_context VAR_8, int VAR_9, krb5_boolean VAR_10,
     const char *VAR_11)
{
    int VAR_12;
    VAR_12 = FUNC_2(VAR_9, VAR_10 ? VAR_4 : VAR_5);

    if(VAR_12 < 0)
 VAR_12 = VAR_7;
    if(VAR_12 == VAR_0)
 VAR_12 = 129;

    switch (VAR_12) {
    case 0:
 break;
    case 128:
 VAR_12 = 0;
 break;
    case 129:
 FUNC_3(VAR_8, VAR_12,
          FUNC_0("timed out locking cache file %s", "file"),
          VAR_11);
 break;
    default: {
 char VAR_13[128];
 FUNC_4(VAR_12, VAR_13, sizeof(VAR_13));
 FUNC_3(VAR_8, VAR_12,
          FUNC_0("error locking cache file %s: %s",
      "file, error"), VAR_11, VAR_13);
 break;
    }
    }
    return VAR_12;
}
