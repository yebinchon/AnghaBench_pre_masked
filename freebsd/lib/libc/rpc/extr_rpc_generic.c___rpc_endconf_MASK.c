
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct handle {int nhandle; scalar_t__ nflag; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct handle*) ;

void
FUNC_3(void *VAR_0)
{
 struct handle *VAR_1;

 VAR_1 = (struct handle *) VAR_0;
 if (VAR_1 == ((void*)0)) {
  return;
 }
 if (VAR_1->nflag) {
  FUNC_1(VAR_1->nhandle);
 } else {
  FUNC_0(VAR_1->nhandle);
 }
 FUNC_2(VAR_1);
}
