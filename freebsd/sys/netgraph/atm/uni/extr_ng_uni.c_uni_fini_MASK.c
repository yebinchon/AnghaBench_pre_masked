
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct unimem_debug {char* file; int lno; scalar_t__ data; } ;
typedef int caddr_t ;


 struct unimem_debug* FUNC_0 (int *) ;
 int FUNC_1 (struct unimem_debug*,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (struct unimem_debug*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (char*,char*,int ,char*,int) ;
 char** VAR_6 ;

__attribute__((used)) static void
FUNC_5(void)
{
 u_int VAR_7;
 struct unimem_debug *VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  while ((VAR_8 = FUNC_0(&VAR_3[VAR_7])) != ((void*)0)) {
   FUNC_1(VAR_8, VAR_2);
   FUNC_2(VAR_8, VAR_0);
  }

  while ((VAR_8 = FUNC_0(&VAR_5[VAR_7])) != ((void*)0)) {
   FUNC_1(VAR_8, VAR_2);
   FUNC_4("ng_uni: %s in use: %p (%s,%u)\n",
       VAR_6[VAR_7], (caddr_t)VAR_8->data,
       VAR_8->file, VAR_8->lno);
   FUNC_2(VAR_8, VAR_0);
  }
 }

 FUNC_3(&VAR_4);
}
