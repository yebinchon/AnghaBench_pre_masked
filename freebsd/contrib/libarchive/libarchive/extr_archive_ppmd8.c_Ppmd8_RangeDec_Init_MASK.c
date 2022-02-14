
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* Read ) (TYPE_3__*) ;} ;
struct TYPE_5__ {TYPE_3__* In; } ;
struct TYPE_6__ {int Range; int Code; TYPE_1__ Stream; scalar_t__ Low; } ;
typedef TYPE_2__ CPpmd8 ;
typedef int Bool ;


 int FUNC_0 (TYPE_3__*) ;

Bool FUNC_1(CPpmd8 *VAR_0)
{
  unsigned VAR_1;
  VAR_0->Low = 0;
  VAR_0->Range = 0xFFFFFFFF;
  VAR_0->Code = 0;
  for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
    VAR_0->Code = (VAR_0->Code << 8) | VAR_0->Stream.In->Read(VAR_0->Stream.In);
  return (VAR_0->Code < 0xFFFFFFFF);
}
