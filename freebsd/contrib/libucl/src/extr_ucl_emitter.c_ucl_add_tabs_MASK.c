
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_character ) (char,unsigned int,int ) ;} ;


 int FUNC_0 (char,unsigned int,int ) ;

__attribute__((used)) static inline void
FUNC_1 (const struct ucl_emitter_functions *VAR_0, unsigned int VAR_1,
  bool VAR_2)
{
 if (!VAR_2 && VAR_1 > 0) {
  VAR_0->ucl_emitter_append_character (' ', VAR_1 * 4, VAR_0->ud);
 }
}
