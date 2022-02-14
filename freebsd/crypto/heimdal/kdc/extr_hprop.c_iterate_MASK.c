
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prop_data {int dummy; } ;
typedef int krb5_context ;
typedef int HDB ;


 int VAR_0 ;


 int FUNC_0 (int ,int *,int ,int ,struct prop_data*) ;
 int FUNC_1 (int ,int,char*,int) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (struct prop_data*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4 (krb5_context VAR_2,
  const char *VAR_3,
  HDB *VAR_4,
  int VAR_5,
  struct prop_data *VAR_6)
{
    int VAR_7;

    switch(VAR_5) {
    case 128:
 VAR_7 = FUNC_3(VAR_6, VAR_3);
 if (VAR_7)
     FUNC_2(VAR_2, VAR_7, "mit_prop_dump");
 break;
    case 129:
 VAR_7 = FUNC_0(VAR_2, VAR_4, VAR_0, VAR_1, VAR_6);
 if(VAR_7)
     FUNC_2(VAR_2, VAR_7, "hdb_foreach");
 break;
    default:
 FUNC_1(VAR_2, 1, "unknown prop type: %d", VAR_5);
    }
    return VAR_7;
}
