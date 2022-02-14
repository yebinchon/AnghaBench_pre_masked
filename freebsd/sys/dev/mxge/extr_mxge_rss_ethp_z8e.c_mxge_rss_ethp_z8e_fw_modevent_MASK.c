
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;


 struct firmware* FUNC_0 (char*,int ,size_t,int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(module_t VAR_5, int VAR_6, void *VAR_7)
{
 const struct firmware *VAR_8, *VAR_9;
 int VAR_10;
 switch (VAR_6) {
 case 129:

  VAR_8 = FUNC_0("mxge_rss_ethp_z8e", VAR_2,
           (size_t)VAR_3,
           VAR_4, ((void*)0));
  if (VAR_8 == ((void*)0))
   goto fail_0;
  VAR_9 = VAR_8;
  return (0);
 fail_0:
  return (VAR_1);
 case 128:
  VAR_10 = FUNC_1("mxge_rss_ethp_z8e");
  return (VAR_10);
 }
 return (VAR_0);
}
