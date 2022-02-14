
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_4__ {scalar_t__ Base; scalar_t__ Size; scalar_t__ AlignOffset; } ;
typedef TYPE_1__ CPpmd7 ;
typedef int Byte ;
typedef int Bool ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static Bool FUNC_2(CPpmd7 *VAR_3, UInt32 VAR_4)
{
  if (VAR_3->Base == 0 || VAR_3->Size != VAR_4)
  {


    if (VAR_4 < VAR_2) {
      return VAR_0;
    }
    FUNC_0(VAR_3);
    VAR_3->AlignOffset =



        4 - (VAR_4 & 3);

    if ((VAR_3->Base = (Byte *)FUNC_1(VAR_3->AlignOffset + VAR_4

        + VAR_2

        )) == 0)
      return VAR_0;
    VAR_3->Size = VAR_4;
  }
  return VAR_1;
}
