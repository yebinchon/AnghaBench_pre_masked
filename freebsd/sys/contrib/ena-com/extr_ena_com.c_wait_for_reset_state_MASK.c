
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ena_com_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ena_com_dev*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ena_com_dev *VAR_5, u32 VAR_6,
    u16 VAR_7)
{
 u32 VAR_8, VAR_9;


 VAR_6 = (VAR_6 * 100) / VAR_2;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = FUNC_1(VAR_5, VAR_3);

  if (FUNC_3(VAR_8 == VAR_1)) {
   FUNC_2("Reg read timeout occurred\n");
   return VAR_0;
  }

  if ((VAR_8 & VAR_4) ==
   VAR_7)
   return 0;

  FUNC_0(VAR_2);
 }

 return VAR_0;
}
