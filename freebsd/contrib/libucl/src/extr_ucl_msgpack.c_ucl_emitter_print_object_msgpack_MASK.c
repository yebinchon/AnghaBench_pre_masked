
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_len ) (unsigned char*,unsigned int,int ) ;} ;
struct ucl_emitter_context {struct ucl_emitter_functions* func; } ;
typedef int bl ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (unsigned char*,int *,int) ;
 int FUNC_3 (unsigned char*,unsigned int,int ) ;

void
FUNC_4 (struct ucl_emitter_context *VAR_0, size_t VAR_1)
{
 const struct ucl_emitter_functions *VAR_2 = VAR_0->func;
 const unsigned char VAR_3 = 0x80, VAR_4 = 0xde, VAR_5 = 0xdf;
 unsigned char VAR_6[5];
 unsigned VAR_7;

 if (VAR_1 <= 0xF) {
  VAR_7 = 1;
  VAR_6[0] = (VAR_1 | VAR_3) & 0xff;
 }
 else if (VAR_1 <= 0xffff) {
  uint16_t VAR_8 = FUNC_0 (VAR_1);

  VAR_7 = 3;
  VAR_6[0] = VAR_4;
  FUNC_2 (&VAR_6[1], &VAR_8, sizeof (VAR_8));
 }
 else {
  uint32_t VAR_9 = FUNC_1 (VAR_1);

  VAR_7 = 5;
  VAR_6[0] = VAR_5;
  FUNC_2 (&VAR_6[1], &VAR_9, sizeof (VAR_9));
 }

 VAR_2->ucl_emitter_append_len (VAR_6, VAR_7, VAR_2->ud);
}
