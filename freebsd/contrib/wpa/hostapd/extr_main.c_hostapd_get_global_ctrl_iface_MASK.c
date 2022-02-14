
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hapd_interfaces {char* global_iface_name; int * global_iface_path; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 char* FUNC_2 (int *,char) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct hapd_interfaces *VAR_1,
      const char *VAR_2)
{

 char *VAR_3;


 FUNC_0(VAR_1->global_iface_path);
 VAR_1->global_iface_path = FUNC_1(VAR_2);
 if (VAR_1->global_iface_path == ((void*)0))
  return -1;


 VAR_3 = FUNC_2(VAR_1->global_iface_path, '/');
 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_0, "No '/' in the global control interface "
      "file");
  FUNC_0(VAR_1->global_iface_path);
  VAR_1->global_iface_path = ((void*)0);
  return -1;
 }

 *VAR_3 = '\0';
 VAR_1->global_iface_name = VAR_3 + 1;


 return 0;
}
