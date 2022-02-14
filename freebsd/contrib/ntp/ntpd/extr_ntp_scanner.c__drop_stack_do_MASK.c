
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FILE_INFO {struct FILE_INFO* st_next; } ;


 int FUNC_0 (struct FILE_INFO*) ;

__attribute__((used)) static struct FILE_INFO *
FUNC_1(
 struct FILE_INFO * VAR_0
 )
{
 struct FILE_INFO * VAR_1;
 while (((void*)0) != VAR_0) {
  VAR_1 = VAR_0->st_next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
 return VAR_0;
}
