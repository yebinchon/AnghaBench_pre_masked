
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int node; } ;
struct tas {int mtx; TYPE_1__ codec; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 struct tas* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct tas*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tas*,int ,int,int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2)
{
 struct tas *VAR_3 = FUNC_1(VAR_2);
 u8 VAR_4 = VAR_0;

 FUNC_0(&VAR_3->codec);
 FUNC_4(VAR_3->codec.node);


 FUNC_5(VAR_3, VAR_1, 1, &VAR_4);

 FUNC_3(&VAR_3->mtx);
 FUNC_2(VAR_3);
 return 0;
}
