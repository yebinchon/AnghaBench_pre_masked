
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_buffer {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int *) ;
 int * VAR_1 ;
 int FUNC_3 (char*,char*) ;

int
FUNC_4(struct pfr_buffer *VAR_2, char *VAR_3, int VAR_4,
    int (*VAR_5)(struct pfr_buffer *, char *, int))
{
 FILE *VAR_6;
 char VAR_7[VAR_0];
 int VAR_8;

 if (VAR_3 == ((void*)0))
  return (0);
 if (!FUNC_3(VAR_3, "-"))
  VAR_6 = VAR_1;
 else {
  VAR_6 = FUNC_1(VAR_3, "r");
  if (VAR_6 == ((void*)0))
   return (-1);
 }
 while ((VAR_8 = FUNC_2(VAR_7, VAR_6)) == 1)
  if (VAR_5(VAR_2, VAR_7, VAR_4)) {
   VAR_8 = -1;
   break;
  }
 if (VAR_6 != VAR_1)
  FUNC_0(VAR_6);
 return (VAR_8);
}
