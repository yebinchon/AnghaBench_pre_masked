
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ena_admin_feature_rss_flow_hash_function {int supported_func; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_0(const struct ena_admin_feature_rss_flow_hash_function *VAR_1)
{
 return VAR_1->supported_func & VAR_0;
}
