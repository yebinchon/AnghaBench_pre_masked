
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_2__ {int Code; int Low; int Range; } ;
typedef TYPE_1__ CPpmd7z_RangeDec ;



__attribute__((used)) static UInt32 FUNC_0(void *VAR_0, UInt32 VAR_1)
{
  CPpmd7z_RangeDec *VAR_2 = (CPpmd7z_RangeDec *)VAR_0;
  return (VAR_2->Code - VAR_2->Low) / (VAR_2->Range /= VAR_1);
}
