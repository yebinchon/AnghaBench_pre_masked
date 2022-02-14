
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int p_dev; } ;
struct aeu_invert_reg_bit {int flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 struct aeu_invert_reg_bit* VAR_3 ;

__attribute__((used)) static struct aeu_invert_reg_bit *
FUNC_1(struct ecore_hwfn *VAR_4,
   struct aeu_invert_reg_bit *VAR_5)
{
 if (!FUNC_0(VAR_4->p_dev))
  return VAR_5;

 if (!(VAR_5->flags & VAR_0))
  return VAR_5;

 return &VAR_3[(VAR_5->flags & VAR_1) >>
      VAR_2];
}
