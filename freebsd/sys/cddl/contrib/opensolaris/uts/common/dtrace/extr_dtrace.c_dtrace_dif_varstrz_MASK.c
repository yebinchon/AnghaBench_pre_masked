
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_state_t ;
struct TYPE_3__ {size_t dtms_scratch_ptr; size_t dtms_scratch_base; size_t dtms_scratch_size; } ;
typedef TYPE_1__ dtrace_mstate_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void const*,void*,size_t) ;

__attribute__((used)) static uintptr_t
FUNC_2(uintptr_t VAR_1, size_t VAR_2, dtrace_state_t *VAR_3,
    dtrace_mstate_t *VAR_4)
{
 char *VAR_5;
 size_t VAR_6;
 uintptr_t VAR_7;

 if (VAR_4->dtms_scratch_ptr + VAR_2 >
     VAR_4->dtms_scratch_base + VAR_4->dtms_scratch_size) {
  FUNC_0(VAR_0);
  return (0);
 }

 FUNC_1((const void *)VAR_1, (void *)VAR_4->dtms_scratch_ptr,
     VAR_2);


 for (VAR_5 = (char *) VAR_4->dtms_scratch_ptr, VAR_6 = 0; VAR_6 < VAR_2 - 1;
     VAR_5++, VAR_6++)
  if (*VAR_5 == '\0')
   *VAR_5 = ' ';

 VAR_7 = VAR_4->dtms_scratch_ptr;
 VAR_4->dtms_scratch_ptr += VAR_2;
 return (VAR_7);
}
