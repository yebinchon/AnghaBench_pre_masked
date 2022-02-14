
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int * UnitsStart; } ;
typedef TYPE_1__ CPpmd8 ;
typedef int Byte ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(CPpmd8 *VAR_2, void *VAR_3)
{
  if ((Byte *)VAR_3 != VAR_2->UnitsStart)
    FUNC_0(VAR_2, VAR_3, 0);
  else
  {



    VAR_2->UnitsStart += VAR_1;
  }
}
