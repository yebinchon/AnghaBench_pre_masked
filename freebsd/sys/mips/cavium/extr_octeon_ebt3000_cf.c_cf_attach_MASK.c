
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cf_priv {int cf_bq; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct cf_priv*) ;
 TYPE_1__* FUNC_2 () ;
 struct cf_priv* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,struct cf_priv*,int ,int *) ;

__attribute__((used)) static int FUNC_6 (device_t VAR_4)
{
 struct cf_priv *VAR_5;
 int VAR_6;

     if (FUNC_2()->board_type == VAR_0)
  return (VAR_1);

 VAR_5 = FUNC_3(VAR_4);
 VAR_5->dev = VAR_4;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 != 0) {
  FUNC_4(VAR_4, "cf_cmd_identify failed: %d\n", VAR_6);
  return (VAR_6);
 }

 FUNC_5(VAR_3, VAR_5, VAR_2, ((void*)0));
 FUNC_0(&VAR_5->cf_bq);

        return 0;
}
