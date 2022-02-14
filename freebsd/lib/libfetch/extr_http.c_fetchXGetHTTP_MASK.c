
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url_stat {int dummy; } ;
struct url {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct url*,char const*) ;
 int * FUNC_1 (struct url*,char*,struct url_stat*,int ,char const*) ;

FILE *
FUNC_2(struct url *VAR_0, struct url_stat *VAR_1, const char *VAR_2)
{
 return (FUNC_1(VAR_0, "GET", VAR_1, FUNC_0(VAR_0, VAR_2), VAR_2));
}
