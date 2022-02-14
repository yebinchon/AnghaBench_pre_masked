
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_6__ {scalar_t__ (* GetThreshold ) (TYPE_2__*,scalar_t__) ;int (* Decode ) (TYPE_2__*,scalar_t__,scalar_t__) ;} ;
struct TYPE_7__ {TYPE_1__ p; } ;
typedef TYPE_2__ CPpmd7z_RangeDec ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static UInt32 FUNC_3(void *VAR_1, UInt32 VAR_2)
{
  CPpmd7z_RangeDec *VAR_3 = (CPpmd7z_RangeDec *)VAR_1;
  UInt32 VAR_4, VAR_5 = VAR_3->p.GetThreshold(VAR_3, VAR_0);
  if(VAR_5 < VAR_2)
  {
    VAR_4 = 0;
    VAR_3->p.Decode(VAR_3, 0, VAR_2);
  }
  else
  {
    VAR_4 = 1;
    VAR_3->p.Decode(VAR_3, VAR_2, VAR_0 - VAR_2);
  }
  return VAR_4;
}
