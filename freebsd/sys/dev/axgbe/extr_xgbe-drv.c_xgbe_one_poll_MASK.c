
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_channel {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct xgbe_channel*,int) ;
 int FUNC_2 (struct xgbe_channel*) ;

__attribute__((used)) static int FUNC_3(struct xgbe_channel *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 FUNC_0("-->xgbe_one_poll: budget=%d\n", VAR_1);


 FUNC_2(VAR_0);


 VAR_2 = FUNC_1(VAR_0, VAR_1);

 FUNC_0("<--xgbe_one_poll: received = %d\n", VAR_2);

 return VAR_2;
}
