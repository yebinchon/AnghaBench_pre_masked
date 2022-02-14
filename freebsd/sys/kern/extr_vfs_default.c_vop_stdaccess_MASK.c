
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_access_args {int a_accmode; int a_td; int a_cred; int a_vp; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_2(struct vop_access_args *VAR_5)
{

 FUNC_0((VAR_5->a_accmode & ~(VAR_2 | VAR_4 | VAR_3 | VAR_0 |
     VAR_1)) == 0, ("invalid bit in accmode"));

 return (FUNC_1(VAR_5->a_vp, VAR_5->a_accmode, VAR_5->a_cred, VAR_5->a_td));
}
