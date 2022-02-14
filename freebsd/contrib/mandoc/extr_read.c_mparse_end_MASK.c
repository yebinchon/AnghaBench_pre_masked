
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mparse {int roff; TYPE_2__* man; } ;
struct TYPE_4__ {scalar_t__ macroset; } ;
struct TYPE_5__ {TYPE_1__ meta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct mparse *VAR_3)
{
 if (VAR_3->man->meta.macroset == VAR_2)
  VAR_3->man->meta.macroset = VAR_0;
 if (VAR_3->man->meta.macroset == VAR_1)
  FUNC_1(VAR_3->man);
 else
  FUNC_0(VAR_3->man);
 FUNC_2(VAR_3->roff);
}
