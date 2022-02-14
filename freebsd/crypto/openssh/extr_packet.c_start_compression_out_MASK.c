
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* state; } ;
struct TYPE_2__ {int compression_out_started; int compression_out_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(struct ssh *VAR_3, int VAR_4)
{
 if (VAR_4 < 1 || VAR_4 > 9)
  return VAR_2;
 FUNC_0("Enabling compression at level %d.", VAR_4);
 if (VAR_3->state->compression_out_started == 1)
  FUNC_1(&VAR_3->state->compression_out_stream);
 switch (FUNC_2(&VAR_3->state->compression_out_stream, VAR_4)) {
 case 128:
  VAR_3->state->compression_out_started = 1;
  break;
 case 129:
  return VAR_0;
 default:
  return VAR_1;
 }
 return 0;
}
