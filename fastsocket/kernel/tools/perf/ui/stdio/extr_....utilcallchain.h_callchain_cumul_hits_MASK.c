
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct callchain_node {scalar_t__ children_hit; scalar_t__ hit; } ;



__attribute__((used)) static inline u64 FUNC_0(struct callchain_node *VAR_0)
{
 return VAR_0->hit + VAR_0->children_hit;
}
