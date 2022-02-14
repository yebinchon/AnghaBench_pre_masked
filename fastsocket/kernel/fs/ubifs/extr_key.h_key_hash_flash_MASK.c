
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int * j32; } ;
typedef int uint32_t ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline uint32_t FUNC_1(const struct ubifs_info *VAR_1, const void *VAR_2)
{
 const union ubifs_key *VAR_3 = VAR_2;

 return FUNC_0(VAR_3->j32[1]) & VAR_0;
}
