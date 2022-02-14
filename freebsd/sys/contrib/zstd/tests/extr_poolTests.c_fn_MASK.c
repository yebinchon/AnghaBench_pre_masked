
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {unsigned int* data; size_t i; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
  struct data *VAR_1 = (struct data *)VAR_0;
  FUNC_0(&VAR_1->mutex);
  VAR_1->data[VAR_1->i] = (unsigned)(VAR_1->i);
  ++VAR_1->i;
  FUNC_1(&VAR_1->mutex);
}
