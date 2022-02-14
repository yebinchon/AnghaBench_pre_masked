
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {int Range; int Code; } ;
typedef TYPE_1__ CPpmd7z_RangeDec ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static UInt32 FUNC_1(void *VAR_0, UInt32 VAR_1)
{
  CPpmd7z_RangeDec *VAR_2 = (CPpmd7z_RangeDec *)VAR_0;
  UInt32 VAR_3 = (VAR_2->Range >> 14) * VAR_1;
  UInt32 VAR_4;
  if (VAR_2->Code < VAR_3)
  {
    VAR_4 = 0;
    VAR_2->Range = VAR_3;
  }
  else
  {
    VAR_4 = 1;
    VAR_2->Code -= VAR_3;
    VAR_2->Range -= VAR_3;
  }
  FUNC_0(VAR_2);
  return VAR_4;
}
