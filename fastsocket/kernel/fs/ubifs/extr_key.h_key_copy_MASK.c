
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int * u64; } ;
struct ubifs_info {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(const struct ubifs_info *VAR_0,
       const union ubifs_key *VAR_1, union ubifs_key *VAR_2)
{
 VAR_2->u64[0] = VAR_1->u64[0];
}
