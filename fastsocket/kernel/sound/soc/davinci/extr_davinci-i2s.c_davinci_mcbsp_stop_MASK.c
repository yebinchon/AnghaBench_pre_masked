
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_mcbsp_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct davinci_mcbsp_dev*,int ) ;
 int FUNC_1 (struct davinci_mcbsp_dev*,int ,int) ;
 int FUNC_2 (struct davinci_mcbsp_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct davinci_mcbsp_dev *VAR_5, int VAR_6)
{
 u32 VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_2);
 VAR_7 &= ~(VAR_1 | VAR_0);
 VAR_7 &= VAR_6 ? ~VAR_4 : ~VAR_3;
 FUNC_1(VAR_5, VAR_2, VAR_7);
 FUNC_2(VAR_5, VAR_6);
}
