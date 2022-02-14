
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 int VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_1(VAR_6 + VAR_3) & VAR_5;

 if (VAR_9) {
  VAR_10 = FUNC_1(VAR_6 + VAR_1);
  VAR_10 &= ~VAR_2;
  FUNC_2(VAR_10, VAR_6 + VAR_1);
  FUNC_0(&VAR_4);
 }
 return VAR_0;
}
