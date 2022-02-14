
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url_stat {int dummy; } ;
struct url {int offset; int doc; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct url*,struct url_stat*,char const*) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int ,int ) ;

FILE *
FUNC_5(struct url *VAR_1, struct url_stat *VAR_2, const char *VAR_3)
{
 FILE *VAR_4;

 if (VAR_2 && FUNC_1(VAR_1, VAR_2, VAR_3) == -1)
  return (((void*)0));

 VAR_4 = FUNC_3(VAR_1->doc, "re");

 if (VAR_4 == ((void*)0)) {
  FUNC_2();
  return (((void*)0));
 }

 if (VAR_1->offset && FUNC_4(VAR_4, VAR_1->offset, VAR_0) == -1) {
  FUNC_0(VAR_4);
  FUNC_2();
  return (((void*)0));
 }

 return (VAR_4);
}
