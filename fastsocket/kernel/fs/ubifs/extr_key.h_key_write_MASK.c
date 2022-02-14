
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int * u32; void** j32; } ;
struct ubifs_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(const struct ubifs_info *VAR_1,
        const union ubifs_key *VAR_2, void *VAR_3)
{
 union ubifs_key *VAR_4 = VAR_3;

 VAR_4->j32[0] = FUNC_0(VAR_2->u32[0]);
 VAR_4->j32[1] = FUNC_0(VAR_2->u32[1]);
 FUNC_1(VAR_3 + 8, 0, VAR_0 - 8);
}
