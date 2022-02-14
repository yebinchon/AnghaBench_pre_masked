
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnx_host {scalar_t__ personality; struct qlnx_host* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qlnx_host*,char*,struct qlnx_host*) ;
 int FUNC_1 (struct qlnx_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct qlnx_host* VAR_2 ;
 int VAR_3 ;

void
FUNC_4(struct qlnx_host *VAR_4)
{
 FUNC_0(VAR_4, "enter ha = %p\n", VAR_4);

 if (VAR_4->personality != VAR_0 &&
   VAR_4->personality != VAR_1)
  return;

 FUNC_2(&VAR_3);

 if (VAR_2 == ((void*)0)) {
  VAR_2 = VAR_4;
  VAR_4->next = ((void*)0);
 } else {
  VAR_4->next = VAR_2;
  VAR_2 = VAR_4;
 }

 FUNC_3(&VAR_3);

 FUNC_1(VAR_4);

 FUNC_0(VAR_4, "exit (%p)\n", VAR_4);

 return;
}
