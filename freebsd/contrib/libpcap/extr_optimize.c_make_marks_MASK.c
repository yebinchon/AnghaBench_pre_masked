
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icode {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct block {TYPE_1__ s; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct block* FUNC_1 (struct block*) ;
 struct block* FUNC_2 (struct block*) ;
 int FUNC_3 (struct icode*,struct block*) ;
 int FUNC_4 (struct icode*,struct block*) ;

__attribute__((used)) static void
FUNC_5(struct icode *VAR_1, struct block *VAR_2)
{
 if (!FUNC_4(VAR_1, VAR_2)) {
  FUNC_3(VAR_1, VAR_2);
  if (FUNC_0(VAR_2->s.code) != VAR_0) {
   FUNC_5(VAR_1, FUNC_2(VAR_2));
   FUNC_5(VAR_1, FUNC_1(VAR_2));
  }
 }
}
