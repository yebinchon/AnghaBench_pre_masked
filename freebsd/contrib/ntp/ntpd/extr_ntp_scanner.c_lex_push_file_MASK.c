
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FILE_INFO {struct FILE_INFO* st_next; } ;


 struct FILE_INFO* FUNC_0 (char const*,char const*) ;
 struct FILE_INFO* VAR_0 ;

int FUNC_1(
 const char * VAR_1,
 const char * VAR_2
 )
{
 struct FILE_INFO * VAR_3 = ((void*)0);

 if (((void*)0) != VAR_1) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (((void*)0) != VAR_3) {
   VAR_3->st_next = VAR_0;
   VAR_0 = VAR_3;
  }
 }
 return (((void*)0) != VAR_3);
}
