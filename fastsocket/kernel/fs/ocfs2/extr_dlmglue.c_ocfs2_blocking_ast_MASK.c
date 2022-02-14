
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int l_flags; int l_event; int l_lock; int l_type; int l_level; int l_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int,int ,int ) ;
 int FUNC_2 (struct ocfs2_lock_res*,int) ;
 struct ocfs2_super* FUNC_3 (struct ocfs2_lock_res*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ocfs2_super*,struct ocfs2_lock_res*) ;
 int FUNC_6 (struct ocfs2_super*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void *VAR_2, int VAR_3)
{
 struct ocfs2_lock_res *VAR_4 = VAR_2;
 struct ocfs2_super *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;
 unsigned long VAR_7;

 FUNC_0(VAR_3 <= VAR_0);

 FUNC_1(0, "BAST fired for lockres %s, blocking %d, level %d type %s\n",
      VAR_4->l_name, VAR_3, VAR_4->l_level,
      FUNC_4(VAR_4->l_type));





 if (VAR_4->l_flags & VAR_1)
  return;

 FUNC_7(&VAR_4->l_lock, VAR_7);
 VAR_6 = FUNC_2(VAR_4, VAR_3);
 if (VAR_6)
  FUNC_5(VAR_5, VAR_4);
 FUNC_8(&VAR_4->l_lock, VAR_7);

 FUNC_9(&VAR_4->l_event);

 FUNC_6(VAR_5);
}
