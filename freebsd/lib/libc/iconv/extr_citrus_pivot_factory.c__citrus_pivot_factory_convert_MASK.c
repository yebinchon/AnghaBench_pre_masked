
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct src_head {int dummy; } ;
struct _region {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct src_head*) ;
 int FUNC_1 (struct _region*) ;
 int FUNC_2 (struct _region*) ;
 int FUNC_3 (struct src_head*,char*,size_t) ;
 int FUNC_4 (struct src_head*,struct _region*) ;
 int VAR_0 ;
 char* FUNC_5 (int *,size_t*) ;
 int FUNC_6 (struct src_head*) ;
 int FUNC_7 (int ,int ,int,int *) ;

int
FUNC_8(FILE *VAR_1, FILE *VAR_2)
{
 struct src_head VAR_3;
 struct _region VAR_4;
 char *VAR_5;
 size_t VAR_6;
 int VAR_7;

 FUNC_0(&VAR_3);

 while ((VAR_5 = FUNC_5(VAR_2, &VAR_6)) != ((void*)0))
  if ((VAR_7 = FUNC_3(&VAR_3, VAR_5, VAR_6))) {
   FUNC_6(&VAR_3);
   return (VAR_7);
  }

 VAR_7 = FUNC_4(&VAR_3, &VAR_4);
 FUNC_6(&VAR_3);
 if (VAR_7)
  return (VAR_7);

 if (FUNC_7(FUNC_1(&VAR_4), FUNC_2(&VAR_4), 1, VAR_1) != 1)
  return (VAR_0);

 return (0);
}
