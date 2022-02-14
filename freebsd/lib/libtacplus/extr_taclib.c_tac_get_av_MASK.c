
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct tac_handle {int * srvr_avs; } ;


 size_t VAR_0 ;
 char* FUNC_0 (struct tac_handle*,int *,int *) ;

char *
FUNC_1(struct tac_handle *VAR_1, u_int VAR_2)
{
 if (VAR_2 >= VAR_0)
  return ((void*)0);
 return FUNC_0(VAR_1, &(VAR_1->srvr_avs[VAR_2]), ((void*)0));
}
