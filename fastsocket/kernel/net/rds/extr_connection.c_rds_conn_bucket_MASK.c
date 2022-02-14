
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
typedef int __be32 ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int *,int ,int ,int ,int ) ;
 struct hlist_head* VAR_1 ;

__attribute__((used)) static struct hlist_head *FUNC_2(__be32 VAR_2, __be32 VAR_3)
{

 unsigned long VAR_4 = FUNC_1(((void*)0),
       FUNC_0(VAR_2), 0,
       FUNC_0(VAR_3), 0);
 return &VAR_1[VAR_4 & VAR_0];
}
