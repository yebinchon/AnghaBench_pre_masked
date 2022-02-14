
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshcipher {int flags; scalar_t__ auth_len; int * name; } ;


 int VAR_0 ;
 struct sshcipher* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *,size_t) ;
 char* FUNC_2 (char*,size_t) ;
 size_t FUNC_3 (int *) ;

char *
FUNC_4(char VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5 = ((void*)0);
 size_t VAR_6, VAR_7 = 0;
 const struct sshcipher *VAR_8;

 for (VAR_8 = VAR_1; VAR_8->name != ((void*)0); VAR_8++) {
  if ((VAR_8->flags & VAR_0) != 0)
   continue;
  if (VAR_3 && VAR_8->auth_len == 0)
   continue;
  if (VAR_5 != ((void*)0))
   VAR_5[VAR_7++] = VAR_2;
  VAR_6 = FUNC_3(VAR_8->name);
  if ((VAR_4 = FUNC_2(VAR_5, VAR_7 + VAR_6 + 2)) == ((void*)0)) {
   FUNC_0(VAR_5);
   return ((void*)0);
  }
  VAR_5 = VAR_4;
  FUNC_1(VAR_5 + VAR_7, VAR_8->name, VAR_6 + 1);
  VAR_7 += VAR_6;
 }
 return VAR_5;
}
