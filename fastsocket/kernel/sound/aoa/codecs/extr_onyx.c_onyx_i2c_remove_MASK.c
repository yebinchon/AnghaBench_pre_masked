
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node; } ;
struct onyx {struct onyx* codec_info; TYPE_1__ codec; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct onyx* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,struct onyx*) ;
 int FUNC_3 (struct onyx*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct onyx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->codec);
 FUNC_4(VAR_1->codec.node);
 if (VAR_1->codec_info)
  FUNC_3(VAR_1->codec_info);
 FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_1);
 return 0;
}
