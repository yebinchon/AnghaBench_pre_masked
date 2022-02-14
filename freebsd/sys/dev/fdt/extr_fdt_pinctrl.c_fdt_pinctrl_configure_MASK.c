
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int phandle_t ;
typedef int name ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,int) ;

int
FUNC_6(device_t VAR_1, u_int VAR_2)
{
 device_t VAR_3;
 phandle_t *VAR_4;
 int VAR_5, VAR_6;
 char VAR_7[16];

 FUNC_5(VAR_7, sizeof(VAR_7), "pinctrl-%u", VAR_2);
 VAR_6 = FUNC_2(FUNC_4(VAR_1), VAR_7,
     sizeof(*VAR_4), (void **)&VAR_4);
 if (VAR_6 < 0)
  return (VAR_0);
 if (VAR_6 == 0)
  return (0);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if ((VAR_3 = FUNC_1(VAR_4[VAR_5])) != ((void*)0))
   FUNC_0(VAR_3, VAR_4[VAR_5]);
 }
 FUNC_3(VAR_4);
 return (0);
}
