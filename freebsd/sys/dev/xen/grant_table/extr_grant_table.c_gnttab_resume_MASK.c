
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,unsigned int) ;
 int * VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_2 () ;
 unsigned int VAR_4 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,unsigned int) ;

int
FUNC_6(device_t VAR_6)
{
 unsigned int VAR_7, VAR_8;

 VAR_8 = VAR_4;
 VAR_7 = FUNC_2();
 if (VAR_7 < VAR_8)
  return (VAR_0);

 if (!VAR_5) {
  FUNC_0(VAR_6 != ((void*)0),
      ("No resume frames and no device provided"));

  VAR_2 = FUNC_5(VAR_6,
      &VAR_3, VAR_1 * VAR_7);
  if (VAR_2 == ((void*)0))
   FUNC_3("Unable to reserve physical memory for gnttab");
  VAR_5 = FUNC_4(VAR_2);
 }

 return (FUNC_1(0, VAR_8 - 1));
}
