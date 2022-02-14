
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ena_admin_feature_rss_flow_hash_input {int supported_input_sort; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline uint16_t FUNC_0(const struct ena_admin_feature_rss_flow_hash_input *VAR_2)
{
 return (VAR_2->supported_input_sort & VAR_0) >> VAR_1;
}
