
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {int Low; int Range; } ;
typedef TYPE_1__ CPpmd7z_RangeDec ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, UInt32 VAR_1, UInt32 VAR_2)
{
  CPpmd7z_RangeDec *VAR_3 = (CPpmd7z_RangeDec *)VAR_0;
  VAR_3->Low += VAR_1 * VAR_3->Range;
  VAR_3->Range *= VAR_2;
  FUNC_0(VAR_3);
}
