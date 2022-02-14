
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dccp_feat_entry {int val; int feat_num; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dccp_feat_entry*) ;

__attribute__((used)) static void FUNC_2(struct dccp_feat_entry *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  FUNC_0(VAR_0->feat_num, &VAR_0->val);
  FUNC_1(VAR_0);
 }
}
