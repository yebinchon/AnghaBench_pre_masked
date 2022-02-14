
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int cap_channel_t ;


 int * FUNC_0 (int const*,int *) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *,char*) ;

int
FUNC_8(const cap_channel_t *VAR_1, nvlist_t **VAR_2)
{
 nvlist_t *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(FUNC_1(VAR_1));
 FUNC_2(VAR_3, "cmd", "limit_get");
 VAR_3 = FUNC_0(VAR_1, VAR_3);
 if (VAR_3 == ((void*)0))
  return (-1);
 VAR_4 = (int)FUNC_6(VAR_3, "error");
 if (VAR_4 != 0) {
  FUNC_4(VAR_3);
  VAR_0 = VAR_4;
  return (-1);
 }
 if (FUNC_5(VAR_3, "limits"))
  *VAR_2 = ((void*)0);
 else
  *VAR_2 = FUNC_7(VAR_3, "limits");
 FUNC_4(VAR_3);
 return (0);
}
