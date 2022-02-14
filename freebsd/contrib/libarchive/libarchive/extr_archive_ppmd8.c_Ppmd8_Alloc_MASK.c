
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {scalar_t__ Base; int Size; int AlignOffset; } ;
typedef TYPE_1__ CPpmd8 ;
typedef int Byte ;
typedef int Bool ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

Bool FUNC_2(CPpmd8 *VAR_2, UInt32 VAR_3)
{
  if (VAR_2->Base == 0 || VAR_2->Size != VAR_3)
  {
    FUNC_0(VAR_2);
    VAR_2->AlignOffset =



        4 - (VAR_3 & 3);

    if ((VAR_2->Base = (Byte *)FUNC_1(VAR_2->AlignOffset + VAR_3)) == 0)
      return VAR_0;
    VAR_2->Size = VAR_3;
  }
  return VAR_1;
}
