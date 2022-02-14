
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hapd_interfaces {int * global_iface_name; int * global_iface_path; } ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,size_t,char*,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static char * FUNC_3(struct hapd_interfaces *VAR_0)
{
 char *VAR_1;
 size_t VAR_2;

 if (VAR_0->global_iface_path == ((void*)0))
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_0->global_iface_path) +
  FUNC_2(VAR_0->global_iface_name) + 2;
 VAR_1 = FUNC_0(VAR_2);
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_1, VAR_2, "%s/%s", VAR_0->global_iface_path,
      VAR_0->global_iface_name);
 VAR_1[VAR_2 - 1] = '\0';
 return VAR_1;
}
