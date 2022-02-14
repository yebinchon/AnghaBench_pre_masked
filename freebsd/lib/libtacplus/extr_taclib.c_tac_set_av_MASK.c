
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct tac_handle {int * avs; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct tac_handle*,int *,char const*,int ) ;
 int FUNC_1 (char const*) ;

int
FUNC_2(struct tac_handle *VAR_1, u_int VAR_2, const char *VAR_3)
{
 if (VAR_2 >= VAR_0)
  return -1;
 return FUNC_0(VAR_1, &(VAR_1->avs[VAR_2]), VAR_3, VAR_3 != ((void*)0) ? FUNC_1(VAR_3) : 0);
}
