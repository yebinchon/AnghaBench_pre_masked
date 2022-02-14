
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int Range; int Code; TYPE_1__* Stream; scalar_t__ Bottom; scalar_t__ Low; } ;
struct TYPE_4__ {int (* Read ) (void*) ;} ;
typedef TYPE_2__ CPpmd7z_RangeDec ;
typedef int Bool ;


 int FUNC_0 (void*) ;

__attribute__((used)) static Bool FUNC_1(CPpmd7z_RangeDec *VAR_0)
{
  unsigned VAR_1;
  VAR_0->Low = VAR_0->Bottom = 0;
  VAR_0->Range = 0xFFFFFFFF;
  for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
    VAR_0->Code = (VAR_0->Code << 8) | VAR_0->Stream->Read((void *)VAR_0->Stream);
  return (VAR_0->Code < 0xFFFFFFFF);
}
