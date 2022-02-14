
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {scalar_t__ bd_id; int* opl_indexed_regs; int * mss_indexed_regs; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mss_info*,int) ;
 int FUNC_1 (struct mss_info*,int) ;
 int FUNC_2 (struct mss_info*,int,int) ;
 struct mss_info* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
     int VAR_5;
     struct mss_info *VAR_6;

     VAR_6 = FUNC_3(VAR_4);

     if(VAR_6->bd_id == VAR_1 || VAR_6->bd_id == VAR_0)
     {

  FUNC_2(VAR_6, 0x12, 0x0c);
  for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
       VAR_6->mss_indexed_regs[VAR_5] = FUNC_0(VAR_6, VAR_5);
  for(VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
       VAR_6->opl_indexed_regs[VAR_5] = FUNC_1(VAR_6, VAR_5);
  VAR_6->opl_indexed_regs[0x12] = 0x0;
     }
     return 0;
}
