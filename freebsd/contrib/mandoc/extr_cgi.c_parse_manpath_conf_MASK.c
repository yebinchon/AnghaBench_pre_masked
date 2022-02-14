
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req {char** p; int psz; } ;
typedef int ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,size_t*,int *) ;
 char** FUNC_4 (char**,int) ;
 int FUNC_5 () ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_10(struct req *VAR_2)
{
 FILE *VAR_3;
 char *VAR_4;
 size_t VAR_5;
 ssize_t VAR_6;

 if ((VAR_3 = FUNC_1("manpath.conf", "r")) == ((void*)0)) {
  FUNC_8("%s/manpath.conf", VAR_1);
  FUNC_5();
  FUNC_0(VAR_0);
 }

 VAR_4 = ((void*)0);
 VAR_5 = 0;

 while ((VAR_6 = FUNC_3(&VAR_4, &VAR_5, VAR_3)) != -1) {
  if (VAR_4[VAR_6 - 1] == '\n')
   VAR_4[--VAR_6] = '\0';
  VAR_2->p = FUNC_4(VAR_2->p,
      (VAR_2->psz + 1) * sizeof(char *));
  if ( ! FUNC_7(VAR_4)) {
   FUNC_9("%s/manpath.conf contains "
       "unsafe path \"%s\"", VAR_1, VAR_4);
   FUNC_5();
   FUNC_0(VAR_0);
  }
  if (FUNC_6(VAR_4, '/') != ((void*)0)) {
   FUNC_9("%s/manpath.conf contains "
       "path with slash \"%s\"", VAR_1, VAR_4);
   FUNC_5();
   FUNC_0(VAR_0);
  }
  VAR_2->p[VAR_2->psz++] = VAR_4;
  VAR_4 = ((void*)0);
  VAR_5 = 0;
 }
 FUNC_2(VAR_4);

 if (VAR_2->p == ((void*)0)) {
  FUNC_9("%s/manpath.conf is empty", VAR_1);
  FUNC_5();
  FUNC_0(VAR_0);
 }
}
