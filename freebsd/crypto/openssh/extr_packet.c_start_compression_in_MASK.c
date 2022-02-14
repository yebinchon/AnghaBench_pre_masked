
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* state; } ;
struct TYPE_2__ {int compression_in_started; int compression_in_stream; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct ssh *VAR_2)
{
 if (VAR_2->state->compression_in_started == 1)
  FUNC_0(&VAR_2->state->compression_in_stream);
 switch (FUNC_1(&VAR_2->state->compression_in_stream)) {
 case 128:
  VAR_2->state->compression_in_started = 1;
  break;
 case 129:
  return VAR_0;
 default:
  return VAR_1;
 }
 return 0;
}
