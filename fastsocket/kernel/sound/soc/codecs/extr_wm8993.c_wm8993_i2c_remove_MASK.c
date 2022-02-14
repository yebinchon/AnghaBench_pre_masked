
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8993_priv {int codec; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct wm8993_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct wm8993_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2)
{
 struct wm8993_priv *VAR_3 = FUNC_0(VAR_2);

 FUNC_2(&VAR_3->codec);
 FUNC_3(&VAR_1);

 FUNC_4(&VAR_3->codec, VAR_0);
 FUNC_1(VAR_3);

 return 0;
}
