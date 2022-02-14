
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_len ) (char const*,size_t,int ) ;} ;
struct ucl_emitter_context {struct ucl_emitter_functions* func; } ;
typedef int bl ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (unsigned char*,int *,int) ;
 int FUNC_3 (unsigned char*,unsigned int,int ) ;
 int FUNC_4 (char const*,size_t,int ) ;

void
FUNC_5 (struct ucl_emitter_context *VAR_0,
  const char *VAR_1, size_t VAR_2)
{
 const struct ucl_emitter_functions *VAR_3 = VAR_0->func;
 const unsigned char VAR_4 = 0xA0, VAR_5 = 0xd9, VAR_6 = 0xda, VAR_7 = 0xdb;
 unsigned char VAR_8[5];
 unsigned VAR_9;

 if (VAR_2 <= 0x1F) {
  VAR_9 = 1;
  VAR_8[0] = (VAR_2 | VAR_4) & 0xff;
 }
 else if (VAR_2 <= 0xff) {
  VAR_9 = 2;
  VAR_8[0] = VAR_5;
  VAR_8[1] = VAR_2 & 0xff;
 }
 else if (VAR_2 <= 0xffff) {
  uint16_t VAR_10 = FUNC_0 (VAR_2);

  VAR_9 = 3;
  VAR_8[0] = VAR_6;
  FUNC_2 (&VAR_8[1], &VAR_10, sizeof (VAR_10));
 }
 else {
  uint32_t VAR_11 = FUNC_1 (VAR_2);

  VAR_9 = 5;
  VAR_8[0] = VAR_7;
  FUNC_2 (&VAR_8[1], &VAR_11, sizeof (VAR_11));
 }

 VAR_3->ucl_emitter_append_len (VAR_8, VAR_9, VAR_3->ud);
 VAR_3->ucl_emitter_append_len (VAR_1, VAR_2, VAR_3->ud);
}
