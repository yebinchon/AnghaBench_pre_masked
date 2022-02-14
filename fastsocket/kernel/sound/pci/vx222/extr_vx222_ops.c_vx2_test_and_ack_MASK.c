
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int chip_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vx_core*,int ) ;
 int FUNC_1 (struct vx_core*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct vx_core *VAR_5)
{

 if (! (VAR_5->chip_status & VAR_4))
  return -VAR_1;

 if (! (FUNC_0(VAR_5, VAR_2) & VAR_3))
  return -VAR_0;



 FUNC_1(VAR_5, VAR_2, 0);



 FUNC_0(VAR_5, VAR_2);

 FUNC_1(VAR_5, VAR_2, VAR_3);


 FUNC_0(VAR_5, VAR_2);

 FUNC_1(VAR_5, VAR_2, 0);

 return 0;
}
