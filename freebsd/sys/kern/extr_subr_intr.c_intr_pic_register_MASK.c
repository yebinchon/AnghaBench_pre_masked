
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_pic {int dummy; } ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (char*,struct intr_pic*,int ,int *,intptr_t) ;
 int FUNC_1 (int *) ;
 struct intr_pic* FUNC_2 (int *,intptr_t,int ) ;

struct intr_pic *
FUNC_3(device_t VAR_1, intptr_t VAR_2)
{
 struct intr_pic *VAR_3;

 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_0);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 FUNC_0("PIC %p registered for %s <dev %p, xref %x>\n", VAR_3,
     FUNC_1(VAR_1), VAR_1, VAR_2);
 return (VAR_3);
}
