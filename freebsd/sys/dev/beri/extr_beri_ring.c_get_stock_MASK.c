
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct beri_softc {int data_size; } ;
struct TYPE_3__ {int in; int out; } ;
typedef TYPE_1__ control_reg_t ;



__attribute__((used)) static int
FUNC_0(struct beri_softc *VAR_0, int VAR_1, control_reg_t *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = (VAR_2->in - VAR_2->out + VAR_0->data_size) % VAR_0->data_size;

 if (VAR_1)
  return (VAR_0->data_size - VAR_3 - 1);
 else
  return (VAR_3);
}
