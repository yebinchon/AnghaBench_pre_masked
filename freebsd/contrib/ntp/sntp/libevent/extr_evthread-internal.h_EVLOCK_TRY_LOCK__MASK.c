
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* lock ) (int ,void*) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,void*) ;

__attribute__((used)) static inline int
FUNC_1(void *VAR_2)
{
 if (VAR_2 && VAR_1.lock) {
  int VAR_3 = VAR_1.lock(VAR_0, VAR_2);
  return !VAR_3;
 } else {


  return 1;
 }
}
