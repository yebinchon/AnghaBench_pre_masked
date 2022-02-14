
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_slot_info {scalar_t__ si_extended; } ;


 int FUNC_0 (struct ocfs2_slot_info*) ;
 int FUNC_1 (struct ocfs2_slot_info*) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_slot_info *VAR_0)
{




 if (VAR_0->si_extended)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}
