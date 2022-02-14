
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_kern_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct mount *VAR_6, int VAR_7, int VAR_8)
{

 if (VAR_6 == ((void*)0) || ((VAR_7 & VAR_3) &&
     (!(VAR_6->mnt_kern_flag & VAR_5) ||
     ((VAR_8 & VAR_0) &&
     (VAR_6->mnt_kern_flag & VAR_4))))) {
  VAR_7 &= ~VAR_3;
  VAR_7 |= VAR_1;
 }
 VAR_7 |= VAR_2;
 return (VAR_7);
}
