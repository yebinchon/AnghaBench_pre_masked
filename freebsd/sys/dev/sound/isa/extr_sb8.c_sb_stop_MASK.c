
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sb_info {int bd_flags; } ;
struct sb_chinfo {scalar_t__ dir; struct sb_info* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sb_info*,int ) ;
 int FUNC_1 (struct sb_info*) ;
 int FUNC_2 (struct sb_info*) ;
 int FUNC_3 (struct sb_info*) ;

__attribute__((used)) static int
FUNC_4(struct sb_chinfo *VAR_5)
{
 struct sb_info *VAR_6 = VAR_5->parent;
     int VAR_7 = (VAR_5->dir == VAR_4)? 1 : 0;

 FUNC_1(VAR_6);
     if (VAR_6->bd_flags & VAR_1)
  FUNC_2(VAR_6);
 else {







  FUNC_2(VAR_6);
 }

 if (VAR_7)
  FUNC_0(VAR_6, VAR_3);
 FUNC_3(VAR_6);
 VAR_6->bd_flags &= ~VAR_0;
 return 0;
}
