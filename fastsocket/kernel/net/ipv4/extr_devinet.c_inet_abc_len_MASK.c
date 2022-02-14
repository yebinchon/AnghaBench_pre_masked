
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static __inline__ int FUNC_5(__be32 VAR_0)
{
 int VAR_1 = -1;

 if (FUNC_3(VAR_0))
  VAR_1 = 0;
 else {
  __u32 VAR_2 = FUNC_4(VAR_0);

  if (FUNC_0(VAR_2))
   VAR_1 = 8;
  else if (FUNC_1(VAR_2))
   VAR_1 = 16;
  else if (FUNC_2(VAR_2))
   VAR_1 = 24;
 }

 return VAR_1;
}
