
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio**,int ) ;
 int FUNC_1 (struct bio*) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, struct bio **VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2[VAR_3] != ((void*)0))
   FUNC_1(VAR_2[VAR_3]);
 }

 FUNC_0(VAR_2, VAR_0);
}
