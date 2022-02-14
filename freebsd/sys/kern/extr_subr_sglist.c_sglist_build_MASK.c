
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sglist {int dummy; } ;


 struct sglist* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct sglist*,void*,size_t) ;
 int FUNC_2 (void*,size_t) ;
 int FUNC_3 (struct sglist*) ;

struct sglist *
FUNC_4(void *VAR_0, size_t VAR_1, int VAR_2)
{
 struct sglist *VAR_3;
 int VAR_4;

 if (VAR_1 == 0)
  return (((void*)0));

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 VAR_3 = FUNC_0(VAR_4, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 if (FUNC_1(VAR_3, VAR_0, VAR_1) != 0) {
  FUNC_3(VAR_3);
  return (((void*)0));
 }
 return (VAR_3);
}
