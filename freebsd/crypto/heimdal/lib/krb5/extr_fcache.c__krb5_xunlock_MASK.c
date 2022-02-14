
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_whence; int l_type; scalar_t__ l_len; scalar_t__ l_start; } ;
typedef int krb5_context ;
typedef int buf ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ,struct flock*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int ,char*) ;
 int FUNC_4 (int,char*,int) ;

int
FUNC_5(krb5_context VAR_5, int VAR_6)
{
    int VAR_7;
    VAR_7 = FUNC_2(VAR_6, VAR_2);

    if (VAR_7 < 0)
 VAR_7 = VAR_4;
    switch (VAR_7) {
    case 0:
 break;
    case 128:
 VAR_7 = 0;
 break;
    default: {
 char VAR_8[128];
 FUNC_4(VAR_7, VAR_8, sizeof(VAR_8));
 FUNC_3(VAR_5, VAR_7,
          FUNC_0("Failed to unlock file: %s", ""), VAR_8);
 break;
    }
    }
    return VAR_7;
}
