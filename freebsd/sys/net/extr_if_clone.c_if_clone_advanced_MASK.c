
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct if_clone {int ifc_destroy; int ifc_create; int ifc_match; int ifc_type; } ;
typedef int ifc_match_t ;
typedef int ifc_destroy_t ;
typedef int ifc_create_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct if_clone*) ;
 struct if_clone* FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (struct if_clone*) ;
 int VAR_1 ;

struct if_clone *
FUNC_3(const char *VAR_2, u_int VAR_3, ifc_match_t VAR_4,
 ifc_create_t VAR_5, ifc_destroy_t VAR_6)
{
 struct if_clone *VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3);
 VAR_7->ifc_type = VAR_0;
 VAR_7->ifc_match = VAR_4;
 VAR_7->ifc_create = VAR_5;
 VAR_7->ifc_destroy = VAR_6;

 if (FUNC_2(VAR_7) != 0)
  return (((void*)0));

 FUNC_0(VAR_1, VAR_7);

 return (VAR_7);
}
