
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdef {int dummy; } ;


 struct tdef* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct tdef*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct tdef *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1)) != ((void*)0)) {
  FUNC_1(&VAR_1, VAR_0);
  FUNC_2(VAR_2);
 }
}
