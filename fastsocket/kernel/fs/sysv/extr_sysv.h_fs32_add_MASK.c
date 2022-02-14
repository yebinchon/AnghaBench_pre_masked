
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {scalar_t__ s_bytesex; } ;
typedef scalar_t__ __u32 ;
typedef int __le32 ;
typedef int __fs32 ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline __fs32 FUNC_3(struct sysv_sb_info *VAR_2, __fs32 *VAR_3, int VAR_4)
{
 if (VAR_2->s_bytesex == VAR_1)
  *(__u32*)VAR_3 = FUNC_0(FUNC_0(*(__u32*)VAR_3)+VAR_4);
 else if (VAR_2->s_bytesex == VAR_0)
  FUNC_2((__le32 *)VAR_3, VAR_4);
 else
  FUNC_1((__be32 *)VAR_3, VAR_4);
 return *VAR_3;
}
