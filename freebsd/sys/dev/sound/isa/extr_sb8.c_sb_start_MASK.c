
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sb_info {int bd_flags; } ;
struct sb_chinfo {scalar_t__ dir; int blksz; int fmt; struct sb_info* parent; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sb_info*,int) ;
 int FUNC_2 (struct sb_info*,int,int) ;
 int FUNC_3 (struct sb_info*) ;
 int FUNC_4 (struct sb_info*,int,int) ;
 int FUNC_5 (struct sb_info*) ;

__attribute__((used)) static int
FUNC_6(struct sb_chinfo *VAR_4)
{
 struct sb_info *VAR_5 = VAR_4->parent;
     int VAR_6 = (VAR_4->dir == VAR_3)? 1 : 0;
     int VAR_7 = (FUNC_0(VAR_4->fmt) > 1)? 1 : 0;
 int VAR_8 = VAR_4->blksz;
 u_char VAR_9;

 VAR_8--;

 FUNC_3(VAR_5);
 if (VAR_6)
  FUNC_1(VAR_5, VAR_2);

 if (VAR_5->bd_flags & VAR_1)
  VAR_9 = VAR_6? 0x90 : 0x98;
 else
  VAR_9 = VAR_6? 0x1c : 0x2c;

 FUNC_4(VAR_5, 0x0e, VAR_7? 2 : 0);
 FUNC_2(VAR_5, 0x48, VAR_8);
        FUNC_1(VAR_5, VAR_9);

 VAR_5->bd_flags |= VAR_0;
 FUNC_5(VAR_5);
 return 0;
}
