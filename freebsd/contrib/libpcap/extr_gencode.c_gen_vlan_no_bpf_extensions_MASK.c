
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_8__ {int constant_part; } ;
struct TYPE_7__ {int constant_part; } ;
struct TYPE_9__ {TYPE_2__ off_linktype; TYPE_1__ off_linkpl; } ;
typedef TYPE_3__ compiler_state_t ;


 int FUNC_0 (struct block*,struct block*) ;
 struct block* FUNC_1 (TYPE_3__*) ;
 struct block* FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static struct block *
FUNC_3(compiler_state_t *VAR_0, int VAR_1)
{
 struct block *VAR_2, *VAR_3;

 VAR_2 = FUNC_1(VAR_0);

 if (VAR_1 >= 0) {
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_2, VAR_3);
  VAR_2 = VAR_3;
 }





 VAR_0->off_linkpl.constant_part += 4;
 VAR_0->off_linktype.constant_part += 4;

 return VAR_2;
}
