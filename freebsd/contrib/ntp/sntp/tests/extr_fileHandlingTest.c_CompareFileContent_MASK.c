
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,size_t,int *) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

bool
FUNC_3(
 FILE * VAR_2,
 FILE * VAR_3
 )
{
 int VAR_4 = 1;

 char VAR_5[1024];
 char VAR_6[1024];
 size_t VAR_7 = sizeof VAR_5;
 size_t VAR_8 = sizeof VAR_6;

 while ( ( (FUNC_0(VAR_5, VAR_7, VAR_3)) != ((void*)0))
       && ( (FUNC_0(VAR_6, VAR_8, VAR_2)) != ((void*)0) )
       ) {


  if( FUNC_2(VAR_5,VAR_6) !=0 ){
   FUNC_1("Comparision failed on line %d",VAR_4);
   return VAR_0;
  }

  VAR_4++;
 }

 return VAR_1;
}
