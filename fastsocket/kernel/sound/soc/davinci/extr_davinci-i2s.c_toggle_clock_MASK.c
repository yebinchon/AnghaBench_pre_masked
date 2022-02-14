
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_mcbsp_dev {int pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct davinci_mcbsp_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct davinci_mcbsp_dev *VAR_3, int VAR_4)
{
 u32 VAR_5 = VAR_4 ? VAR_1 : VAR_0;



 FUNC_0(VAR_3, VAR_2, VAR_3->pcr ^ VAR_5);
 FUNC_0(VAR_3, VAR_2, VAR_3->pcr);
}
