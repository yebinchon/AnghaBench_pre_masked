
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vx_core*,int ) ;
 int FUNC_1 (struct vx_core*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vx_core *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;

 FUNC_0(VAR_4, VAR_1);


 for (VAR_6 = 0; VAR_6 < 24; VAR_6++, VAR_5 <<= 1)
  FUNC_1(VAR_4, VAR_0, ((VAR_5 & 0x800000) ? VAR_3 : 0));

 FUNC_0(VAR_4, VAR_2);
}
