
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct group**,int ,int ,char*,int ,struct group*,char*,size_t,int*) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_1(struct group *VAR_4, char *VAR_5, size_t VAR_6,
    struct group **VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = 0;
 *VAR_7 = ((void*)0);
 VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_0, "getgrent_r", VAR_2,
     VAR_4, VAR_5, VAR_6, &VAR_9);
 if (VAR_8 == VAR_1)
  return (0);
 else
  return (VAR_9);
}
