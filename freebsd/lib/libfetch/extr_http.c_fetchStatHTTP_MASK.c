
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url_stat {int dummy; } ;
struct url {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct url*,char const*) ;
 int * FUNC_2 (struct url*,char*,struct url_stat*,int ,char const*) ;

int
FUNC_3(struct url *VAR_0, struct url_stat *VAR_1, const char *VAR_2)
{
 FILE *VAR_3;

 VAR_3 = FUNC_2(VAR_0, "HEAD", VAR_1, FUNC_1(VAR_0, VAR_2), VAR_2);
 if (VAR_3 == ((void*)0))
  return (-1);
 FUNC_0(VAR_3);
 return (0);
}
