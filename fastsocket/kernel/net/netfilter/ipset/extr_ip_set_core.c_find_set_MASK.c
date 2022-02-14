
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {int dummy; } ;
typedef size_t ip_set_id_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (char const*) ;
 struct ip_set** VAR_1 ;

__attribute__((used)) static inline struct ip_set *
FUNC_1(const char *VAR_2)
{
 ip_set_id_t VAR_3 = FUNC_0(VAR_2);

 return VAR_3 == VAR_0 ? ((void*)0) : VAR_1[VAR_3];
}
