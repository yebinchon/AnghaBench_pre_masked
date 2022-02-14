
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct roff_meta {scalar_t__ macroset; } ;
struct mparse {int options; TYPE_1__* man; } ;
struct TYPE_4__ {struct roff_meta meta; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

struct roff_meta *
FUNC_3(struct mparse *VAR_2)
{
 FUNC_2(VAR_2->man);
 if (VAR_2->options & VAR_1) {
  if (VAR_2->man->meta.macroset == VAR_0)
   FUNC_1(VAR_2->man);
  else
   FUNC_0(VAR_2->man);
 }
 return &VAR_2->man->meta;
}
