
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int* u32; } ;
typedef int uint32_t ;
struct ubifs_info {int dummy; } ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(const struct ubifs_info *VAR_3,
          union ubifs_key *VAR_4, ino_t VAR_5,
          uint32_t VAR_6)
{
 FUNC_0(!(VAR_6 & ~VAR_2));
 VAR_4->u32[0] = VAR_5;
 VAR_4->u32[1] = VAR_6 | (VAR_0 << VAR_1);
}
