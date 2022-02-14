
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {void** j32; } ;
typedef int uint32_t ;
struct ubifs_info {int (* key_hash ) (int ,int ) ;} ;
struct qstr {int len; int name; } ;
typedef int ino_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(const struct ubifs_info *VAR_4, void *VAR_5,
           ino_t VAR_6, const struct qstr *VAR_7)
{
 union ubifs_key *VAR_8 = VAR_5;
 uint32_t VAR_9 = VAR_4->key_hash(VAR_7->name, VAR_7->len);

 FUNC_3(!(VAR_9 & ~VAR_3));
 VAR_8->j32[0] = FUNC_0(VAR_6);
 VAR_8->j32[1] = FUNC_0(VAR_9 |
      (VAR_0 << VAR_2));
 FUNC_1(VAR_5 + 8, 0, VAR_1 - 8);
}
