
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct avtab_key {int target_class; int target_type; int source_type; } ;



__attribute__((used)) static inline int FUNC_0(struct avtab_key *VAR_0, u16 VAR_1)
{
 return ((VAR_0->target_class + (VAR_0->target_type << 2) +
   (VAR_0->source_type << 9)) & VAR_1);
}
