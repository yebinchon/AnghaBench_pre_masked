
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url {int offset; int doc; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int ,int ) ;

FILE *
FUNC_5(struct url *VAR_1, const char *VAR_2)
{
 FILE *VAR_3;

 if (FUNC_0('a'))
  VAR_3 = FUNC_3(VAR_1->doc, "ae");
 else
  VAR_3 = FUNC_3(VAR_1->doc, "w+e");

 if (VAR_3 == ((void*)0)) {
  FUNC_2();
  return (((void*)0));
 }

 if (VAR_1->offset && FUNC_4(VAR_3, VAR_1->offset, VAR_0) == -1) {
  FUNC_1(VAR_3);
  FUNC_2();
  return (((void*)0));
 }

 return (VAR_3);
}
