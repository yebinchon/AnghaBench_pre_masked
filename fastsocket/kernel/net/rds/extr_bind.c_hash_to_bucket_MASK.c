
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hlist_head {int dummy; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 struct hlist_head* VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_1(__be32 VAR_2, __be16 VAR_3)
{
 return VAR_1 + (FUNC_0((u32)VAR_2, (u32)VAR_3, 0) &
      (VAR_0 - 1));
}
