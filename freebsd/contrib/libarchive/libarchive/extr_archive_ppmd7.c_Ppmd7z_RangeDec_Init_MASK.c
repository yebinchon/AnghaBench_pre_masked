
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Stream; } ;
struct TYPE_5__ {scalar_t__ (* Read ) (void*) ;} ;
typedef TYPE_2__ CPpmd7z_RangeDec ;
typedef int Bool ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (void*) ;

__attribute__((used)) static Bool FUNC_2(CPpmd7z_RangeDec *VAR_1)
{
  if (VAR_1->Stream->Read((void *)VAR_1->Stream) != 0)
    return VAR_0;
  return FUNC_0(VAR_1);
}
