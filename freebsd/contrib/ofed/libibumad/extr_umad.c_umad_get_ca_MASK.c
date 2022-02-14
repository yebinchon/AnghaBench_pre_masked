
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umad_ca_t ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,int *) ;
 char* FUNC_4 (char const*,int *) ;

int FUNC_5(const char *VAR_1, umad_ca_t * VAR_2)
{
 int VAR_3;

 FUNC_1("ca_name %s", VAR_1);
 if (!(VAR_1 = FUNC_4(VAR_1, ((void*)0))))
  return -VAR_0;

 if (FUNC_2(VAR_1, VAR_2) > 0)
  return 0;

 if ((VAR_3 = FUNC_3(VAR_1, VAR_2)) < 0)
  return VAR_3;

 FUNC_0("opened %s", VAR_1);
 return 0;
}
