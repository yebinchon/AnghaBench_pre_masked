
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FILE_INFO {struct FILE_INFO* st_next; } ;


 int FUNC_0 (struct FILE_INFO*) ;
 struct FILE_INFO* VAR_0 ;

int
FUNC_1(void)
{
 struct FILE_INFO * VAR_1 = VAR_0;
 struct FILE_INFO * VAR_2 = ((void*)0);

 if (((void*)0) != VAR_1) {
  VAR_2 = VAR_1->st_next;
  if (((void*)0) != VAR_2) {
   VAR_0 = VAR_2;
   FUNC_0(VAR_1);
  }
 }
 return (((void*)0) != VAR_2);
}
