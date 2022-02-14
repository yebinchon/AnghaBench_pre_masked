
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mf_flags; int mf_mount; } ;
typedef TYPE_1__ mntfs ;
typedef int am_node ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(am_node *VAR_3, mntfs *VAR_4)
{
 int VAR_5;

 VAR_5 = (VAR_4->mf_flags & VAR_1) ? VAR_0 : 0;
 return FUNC_0(VAR_4->mf_mount, VAR_2, VAR_5);
}
