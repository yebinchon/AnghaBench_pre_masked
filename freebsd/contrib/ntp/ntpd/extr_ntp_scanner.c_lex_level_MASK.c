
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FILE_INFO {struct FILE_INFO* st_next; } ;


 struct FILE_INFO* VAR_0 ;

size_t
FUNC_0(void)
{
 size_t VAR_1 = 0;
 struct FILE_INFO *VAR_2 = VAR_0;

 while (((void*)0) != VAR_2) {
  VAR_1++;
  VAR_2 = VAR_2->st_next;
 }
 return VAR_1;
}
