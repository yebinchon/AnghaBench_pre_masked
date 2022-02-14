
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned long sysclk_rate; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static unsigned int FUNC_1(struct xgbe_prv_data *VAR_0,
          unsigned int VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;

 FUNC_0("-->xgbe_usec_to_riwt\n");

 VAR_2 = VAR_0->sysclk_rate;







 VAR_3 = (VAR_1 * (VAR_2 / 1000000)) / 256;

 FUNC_0("<--xgbe_usec_to_riwt\n");

 return VAR_3;
}
