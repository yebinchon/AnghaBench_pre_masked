
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct apb_ivar {int resources; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,struct apb_ivar*) ;
 struct apb_ivar* FUNC_2 (int,int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static device_t
FUNC_5(device_t VAR_3, u_int VAR_4, const char *VAR_5, int VAR_6)
{
 device_t VAR_7;
 struct apb_ivar *VAR_8;

 VAR_8 = FUNC_2(sizeof(struct apb_ivar), VAR_0, VAR_1 | VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_3("Failed to allocate ivar\n");
  return (0);
 }
 FUNC_4(&VAR_8->resources);

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_3("Can't add child %s%d ordered\n", VAR_5, VAR_6);
  return (0);
 }

 FUNC_1(VAR_7, VAR_8);

 return (VAR_7);
}
