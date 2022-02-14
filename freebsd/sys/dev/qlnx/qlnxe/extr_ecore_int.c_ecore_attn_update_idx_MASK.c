
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ecore_sb_attn_info {scalar_t__ index; TYPE_1__* sb_attn; } ;
struct ecore_hwfn {int p_dev; } ;
struct TYPE_2__ {int sb_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct ecore_hwfn *VAR_1,
     struct ecore_sb_attn_info *VAR_2)
{
 u16 VAR_3 = 0, VAR_4;

 FUNC_1(VAR_1->p_dev);

 VAR_4 = FUNC_0(VAR_2->sb_attn->sb_index);
 if (VAR_2->index != VAR_4) {
  VAR_2->index = VAR_4;
  VAR_3 = VAR_0;
 }

 FUNC_1(VAR_1->p_dev);

 return VAR_3;
}
