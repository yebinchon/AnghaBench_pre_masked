
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct ocfs2_super *VAR_6, int VAR_7)
{
 if (!FUNC_0(VAR_6->sb, VAR_4)
     && (VAR_7 == VAR_5
  || VAR_7 == VAR_2))
  return 0;
 if (!FUNC_0(VAR_6->sb, VAR_3)
     && (VAR_7 == VAR_0
  || VAR_7 == VAR_1))
  return 0;
 return 1;
}
