
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gcc_pointer ;
struct TYPE_3__ {size_t size; int value; int align; } ;
typedef TYPE_1__ __emutls_control ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 void* FUNC_2 (size_t,size_t) ;
 int FUNC_3 (void*,int ,size_t) ;
 int FUNC_4 (void*,int ,size_t) ;

__attribute__((used)) static __inline void *FUNC_5(__emutls_control *VAR_0) {

  FUNC_0(sizeof(uintptr_t) == sizeof(gcc_pointer));
  FUNC_0(sizeof(uintptr_t) == sizeof(void *));

  size_t VAR_1 = VAR_0->size;
  size_t VAR_2 = VAR_0->align;
  void *VAR_3;
  if (VAR_2 < sizeof(void *))
    VAR_2 = sizeof(void *);

  if ((VAR_2 & (VAR_2 - 1)) != 0)
    FUNC_1();

  VAR_3 = FUNC_2(VAR_2, VAR_1);
  if (VAR_0->value)
    FUNC_3(VAR_3, VAR_0->value, VAR_1);
  else
    FUNC_4(VAR_3, 0, VAR_1);
  return VAR_3;
}
