
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct make_dev_args {int mda_flags; int mda_mode; int mda_gid; int mda_uid; int * mda_devsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct make_dev_args*) ;
 int FUNC_1 (struct make_dev_args*,int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(void)
{
 struct make_dev_args VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6);
 VAR_6.mda_flags = VAR_2 | VAR_1;
 VAR_6.mda_devsw = &VAR_5;
 VAR_6.mda_uid = VAR_3;
 VAR_6.mda_gid = VAR_0;
 VAR_6.mda_mode = 0600;

 VAR_7 = FUNC_1(&VAR_6, &VAR_4, "uinput");

 return (VAR_7);
}
