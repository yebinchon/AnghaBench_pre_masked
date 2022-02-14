
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dccp_feat_entry {scalar_t__ is_local; scalar_t__ needs_confirm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline u8 FUNC_0(struct dccp_feat_entry *VAR_4)
{
 if (VAR_4->needs_confirm)
  return VAR_4->is_local ? VAR_2 : VAR_3;
 return VAR_4->is_local ? VAR_0 : VAR_1;
}
