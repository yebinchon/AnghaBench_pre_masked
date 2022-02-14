
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct intr_pic {int dummy; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct intr_pic*,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 struct intr_pic* FUNC_2 (int *,intptr_t,int ) ;

int
FUNC_3(device_t VAR_3, intptr_t VAR_4)
{
 struct intr_pic *VAR_5;

 if (VAR_3 == ((void*)0))
  return (VAR_0);
 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_2);
 if (VAR_5 == ((void*)0))
  return (VAR_1);

 FUNC_0("PIC %p registered for %s <dev %p, xref %jx>\n", VAR_5,
     FUNC_1(VAR_3), VAR_3, (uintmax_t)VAR_4);
 return (0);
}
