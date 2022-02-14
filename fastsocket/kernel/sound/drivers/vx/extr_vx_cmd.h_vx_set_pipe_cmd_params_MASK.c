
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vx_rmh {int* Cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_0(struct vx_rmh *VAR_4, int VAR_5,
       int VAR_6, int VAR_7)
{
 if (VAR_5)
  VAR_4->Cmd[0] |= VAR_0;
 VAR_4->Cmd[0] |= (((u32)VAR_6 & VAR_3) << VAR_1) & VAR_2;

 if (VAR_7)
  VAR_4->Cmd[0] |= ((u32)VAR_7 & VAR_3) & VAR_2;

}
