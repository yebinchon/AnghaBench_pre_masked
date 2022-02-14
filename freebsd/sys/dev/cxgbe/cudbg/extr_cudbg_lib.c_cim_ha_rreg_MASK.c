
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct adapter *VAR_2, u32 VAR_3, u32 *VAR_4)
{
 int VAR_5 = 0;


 FUNC_2(VAR_2, VAR_0, VAR_3);


 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5)
  goto err;


 *VAR_4 = FUNC_1(VAR_2, VAR_1);

err:
 return VAR_5;
}
