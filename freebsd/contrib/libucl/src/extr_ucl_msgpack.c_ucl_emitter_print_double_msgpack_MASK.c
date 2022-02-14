
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_len ) (unsigned char*,int,int ) ;} ;
struct ucl_emitter_context {struct ucl_emitter_functions* func; } ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,double*,int) ;
 int FUNC_2 (unsigned char*,int,int ) ;

void
FUNC_3 (struct ucl_emitter_context *VAR_0, double VAR_1)
{
 const struct ucl_emitter_functions *VAR_2 = VAR_0->func;
 union {
  double d;
  uint64_t i;
 } VAR_3;
 const unsigned char VAR_4 = 0xcb;
 unsigned char VAR_5[sizeof(double) + 1];


 VAR_3.d = VAR_1;
 VAR_3.i = FUNC_0 (VAR_3.i);

 VAR_5[0] = VAR_4;
 FUNC_1 (&VAR_5[1], &VAR_3.d, sizeof (double));
 VAR_2->ucl_emitter_append_len (VAR_5, sizeof (VAR_5), VAR_2->ud);
}
