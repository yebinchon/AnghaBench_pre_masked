
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;


 int FUNC_0 (struct objfile*) ;
 int FUNC_1 (struct objfile*) ;
 int FUNC_2 (struct objfile*) ;
 int FUNC_3 (int *,int ) ;
 int * VAR_0 ;
 struct objfile* VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct objfile *VAR_2)
{
 static int VAR_3 = 1;

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 if (&FUNC_0 != ((void*)0))
  FUNC_0(VAR_2);

 if (VAR_3 && VAR_2 != ((void*)0) && VAR_2 == VAR_1) {




  VAR_3 = 0;
  if (VAR_0 != ((void*)0))
   FUNC_3 (VAR_0, 0);
 }
}
