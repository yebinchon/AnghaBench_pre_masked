
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int,int) ;

__attribute__((used)) static __u32 FUNC_1(__u32 VAR_2, __be32 VAR_3, __be32 VAR_4,
      __be16 VAR_5, __be16 VAR_6, __u32 VAR_7,
      __u32 VAR_8, __u32 VAR_9)
{
 __u32 VAR_10;


 VAR_2 -= FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, 0, 0) + VAR_7;


 VAR_10 = (VAR_8 - (VAR_2 >> VAR_0)) & ((__u32) - 1 >> VAR_0);
 if (VAR_10 >= VAR_9)
  return (__u32)-1;

 return (VAR_2 -
  FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8 - VAR_10, 1))
  & VAR_1;
}
