
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void**,size_t,size_t) ;

__attribute__((used)) static __inline void *FUNC_3(size_t VAR_1, size_t VAR_2) {
  void *VAR_3;





  char *VAR_4;
  if ((VAR_4 = (char *)FUNC_1((VAR_1 - 1 + sizeof(void *)) + VAR_2)) == ((void*)0))
    FUNC_0();
  VAR_3 = (void *)(((uintptr_t)(VAR_4 + (VAR_1 - 1 + sizeof(void *)))) &
                  ~(uintptr_t)(VAR_1 - 1));

  ((void **)VAR_3)[-1] = VAR_4;

  return VAR_3;
}
