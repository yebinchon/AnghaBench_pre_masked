
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct the_nilfs {scalar_t__* ns_sbwtime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(struct the_nilfs *VAR_1)
{
 u64 VAR_2 = FUNC_0();
 return VAR_2 < VAR_1->ns_sbwtime[0] ||
   VAR_2 > VAR_1->ns_sbwtime[0] + VAR_0;
}
