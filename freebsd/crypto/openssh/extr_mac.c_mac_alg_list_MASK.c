
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macalg {int * name; } ;


 int FUNC_0 (char*) ;
 struct macalg* VAR_0 ;
 int FUNC_1 (char*,int *,size_t) ;
 char* FUNC_2 (char*,size_t) ;
 size_t FUNC_3 (int *) ;

char *
FUNC_4(char VAR_1)
{
 char *VAR_2 = ((void*)0), *VAR_3;
 size_t VAR_4, VAR_5 = 0;
 const struct macalg *VAR_6;

 for (VAR_6 = VAR_0; VAR_6->name != ((void*)0); VAR_6++) {
  if (VAR_2 != ((void*)0))
   VAR_2[VAR_5++] = VAR_1;
  VAR_4 = FUNC_3(VAR_6->name);
  if ((VAR_3 = FUNC_2(VAR_2, VAR_5 + VAR_4 + 2)) == ((void*)0)) {
   FUNC_0(VAR_2);
   return ((void*)0);
  }
  VAR_2 = VAR_3;
  FUNC_1(VAR_2 + VAR_5, VAR_6->name, VAR_4 + 1);
  VAR_5 += VAR_4;
 }
 return VAR_2;
}
