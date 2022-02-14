
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct oxygen {int ac97_waitqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct oxygen*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct oxygen *VAR_2, unsigned int VAR_3)
{
 u8 VAR_4 = 0;





 FUNC_2(VAR_2->ac97_waitqueue,
      ({ VAR_4 |= FUNC_1(VAR_2, VAR_1);
         VAR_4 & VAR_3; }),
      FUNC_0(1) + 1);




 VAR_4 |= FUNC_1(VAR_2, VAR_1);
 return VAR_4 & VAR_3 ? 0 : -VAR_0;
}
