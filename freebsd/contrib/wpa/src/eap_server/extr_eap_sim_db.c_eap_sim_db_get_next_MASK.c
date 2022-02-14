
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_db_data {int dummy; } ;
typedef int buf ;


 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int,int *,int) ;

__attribute__((used)) static char * FUNC_3(struct eap_sim_db_data *VAR_0, char VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 u8 VAR_5[10];

 if (FUNC_1(VAR_5, sizeof(VAR_5)))
  return ((void*)0);
 VAR_2 = FUNC_0(sizeof(VAR_5) * 2 + 2);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_3 = VAR_2;
 VAR_4 = VAR_2 + sizeof(VAR_5) * 2 + 2;
 *VAR_3++ = VAR_1;
 FUNC_2(VAR_3, VAR_4 - VAR_3, VAR_5, sizeof(VAR_5));

 return VAR_2;
}
