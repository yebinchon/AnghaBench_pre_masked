
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
struct tac_handle {int dummy; } ;
struct clnt_str {int dummy; } ;


 int FUNC_0 (struct tac_handle*,int*,struct clnt_str*) ;
 int FUNC_1 (struct tac_handle*,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct tac_handle *VAR_0, u_int8_t *VAR_1, struct clnt_str *VAR_2)
{
 u_int16_t VAR_3;

 if (FUNC_0(VAR_0, &VAR_3, VAR_2) == -1)
  return -1;
 VAR_3 = FUNC_2(VAR_3);
 if (VAR_3 > 0xff) {
  FUNC_1(VAR_0, "Field too long");
  return -1;
 }
 *VAR_1 = VAR_3;
 return 0;
}
