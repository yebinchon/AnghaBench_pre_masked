
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnx_host {scalar_t__ personality; struct qlnx_host* next; } ;
typedef struct qlnx_host qlnx_host_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qlnx_host*,char*,struct qlnx_host*) ;
 int FUNC_1 (struct qlnx_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct qlnx_host* VAR_2 ;
 int VAR_3 ;

int
FUNC_4(struct qlnx_host *VAR_4)
{
 int VAR_5 = 0;
 qlnx_host_t *VAR_6;
 qlnx_host_t *VAR_7;

 FUNC_0(VAR_4, "enter ha = %p\n", VAR_4);

 if ((VAR_2 == ((void*)0)) || (VAR_4 == ((void*)0)))
  return (VAR_5);

 if (VAR_4->personality != VAR_0 &&
  VAR_4->personality != VAR_1)
  return (VAR_5);

 VAR_5 = FUNC_1(VAR_4);

 if (VAR_5)
  return (VAR_5);

 FUNC_2(&VAR_3);

 if (VAR_2 == VAR_4) {
  VAR_2 = VAR_4->next;
  VAR_4->next = ((void*)0);
  FUNC_3(&VAR_3);
  FUNC_0(VAR_4, "exit0 ha = %p\n", VAR_4);
  return (VAR_5);
 }

 VAR_6 = VAR_7 = VAR_2;

 while ((VAR_7 != VAR_4) && (VAR_7 != ((void*)0))) {
  VAR_6 = VAR_7;
  VAR_7 = VAR_7->next;
 }

 if (VAR_7 == VAR_4) {
  VAR_6 = VAR_4->next;
  VAR_4->next = ((void*)0);
 }

 FUNC_3(&VAR_3);

 FUNC_0(VAR_4, "exit1 ha = %p\n", VAR_4);
 return (VAR_5);
}
