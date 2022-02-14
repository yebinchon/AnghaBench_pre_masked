
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_2__ {int fsib; int fsia; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_4) & ~0x00000010;
 u32 VAR_9 = FUNC_1(VAR_2);


 FUNC_2(VAR_4, VAR_8);
 FUNC_2(VAR_4, VAR_8 | 0x00000010);

 if (VAR_9 & VAR_0)
  FUNC_0(&VAR_5->fsia);
 if (VAR_9 & VAR_1)
  FUNC_0(&VAR_5->fsib);

 FUNC_2(VAR_2, 0x0000000);

 return VAR_3;
}
