
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_kern_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mount*,int) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_4, int VAR_5)
{

 if (VAR_5 == VAR_3) {
  FUNC_0(VAR_4);
  VAR_4->mnt_kern_flag |= VAR_0 | VAR_1;
  FUNC_1(VAR_4);
 } else if (VAR_5 == VAR_2) {
  FUNC_2(VAR_4, 1);
 }
 return (0);
}
