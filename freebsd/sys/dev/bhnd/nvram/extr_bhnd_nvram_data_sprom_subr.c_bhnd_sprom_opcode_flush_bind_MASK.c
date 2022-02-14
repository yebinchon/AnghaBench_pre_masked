
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int count; int skip_in; scalar_t__ skip_in_negative; } ;
struct TYPE_6__ {int have_bind; TYPE_3__ bind; } ;
struct TYPE_7__ {scalar_t__ var_state; int offset; TYPE_1__ var; } ;
typedef TYPE_2__ bhnd_sprom_opcode_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int
FUNC_2(bhnd_sprom_opcode_state *VAR_1)
{
 int VAR_2;
 uint32_t VAR_3;


 if (VAR_1->var_state != VAR_0 ||
     !VAR_1->var.have_bind)
  return (0);


 if (VAR_1->var.bind.count > 0) {
  VAR_3 = VAR_1->var.bind.skip_in * VAR_1->var.bind.count;
  if ((VAR_2 = FUNC_0(VAR_1, &VAR_3)))
   return (VAR_2);

  if (VAR_1->var.bind.skip_in_negative) {
   VAR_1->offset -= VAR_3;
  } else {
   VAR_1->offset += VAR_3;
  }
 }


 FUNC_1(&VAR_1->var.bind, 0, sizeof(VAR_1->var.bind));
 VAR_1->var.have_bind = 0;

 return (0);
}
