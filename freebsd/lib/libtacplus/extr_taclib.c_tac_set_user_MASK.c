
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tac_handle {int user; } ;


 int FUNC_0 (struct tac_handle*,int *,char const*,int ) ;
 int FUNC_1 (char const*) ;

int
FUNC_2(struct tac_handle *VAR_0, const char *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_0->user, VAR_1, VAR_1 != ((void*)0) ? FUNC_1(VAR_1) : 0);
}
