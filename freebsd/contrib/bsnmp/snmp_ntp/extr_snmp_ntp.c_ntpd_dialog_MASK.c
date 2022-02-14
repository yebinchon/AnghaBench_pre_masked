
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int **,size_t*) ;
 int FUNC_2 (scalar_t__,scalar_t__,char const*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_4(u_int VAR_1, u_int VAR_2, const char *VAR_3, u_char **VAR_4,
    size_t *VAR_5)
{
 uint16_t VAR_6;
 uint16_t VAR_7;

 if (FUNC_2(VAR_1, VAR_2, VAR_3) == -1)
  return (-1);
 if (FUNC_1(&VAR_7, &VAR_6, VAR_4, VAR_5) == -1)
  return (-1);

 if (VAR_7 != VAR_1) {
  FUNC_3(VAR_0, "bad response op 0x%x", VAR_7);
  FUNC_0(VAR_4);
  return (-1);
 }

 if (VAR_2 != VAR_6) {
  FUNC_3(VAR_0, "response for wrong associd");
  FUNC_0(VAR_4);
  return (-1);
 }
 return (0);
}
