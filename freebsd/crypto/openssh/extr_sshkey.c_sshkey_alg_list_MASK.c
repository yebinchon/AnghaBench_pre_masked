
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keytype {int type; int * name; scalar_t__ cert; scalar_t__ sigonly; } ;


 int FUNC_0 (char*) ;
 struct keytype* VAR_0 ;
 int FUNC_1 (char*,int *,size_t) ;
 char* FUNC_2 (char*,size_t) ;
 size_t FUNC_3 (int *) ;

char *
FUNC_4(int VAR_1, int VAR_2, int VAR_3, char VAR_4)
{
 char *VAR_5, *VAR_6 = ((void*)0);
 size_t VAR_7, VAR_8 = 0;
 const struct keytype *VAR_9;

 for (VAR_9 = VAR_0; VAR_9->type != -1; VAR_9++) {
  if (VAR_9->name == ((void*)0))
   continue;
  if (!VAR_3 && VAR_9->sigonly)
   continue;
  if ((VAR_1 && !VAR_9->cert) || (VAR_2 && VAR_9->cert))
   continue;
  if (VAR_6 != ((void*)0))
   VAR_6[VAR_8++] = VAR_4;
  VAR_7 = FUNC_3(VAR_9->name);
  if ((VAR_5 = FUNC_2(VAR_6, VAR_8 + VAR_7 + 2)) == ((void*)0)) {
   FUNC_0(VAR_6);
   return ((void*)0);
  }
  VAR_6 = VAR_5;
  FUNC_1(VAR_6 + VAR_8, VAR_9->name, VAR_7 + 1);
  VAR_8 += VAR_7;
 }
 return VAR_6;
}
