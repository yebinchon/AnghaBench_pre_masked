
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bio* FUNC_0 () ;
 struct bio** FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,struct bio**) ;

__attribute__((used)) static struct bio **
FUNC_3(int VAR_3)
{
 struct bio **VAR_4;
 int VAR_5 = 0, VAR_6;

 VAR_4 = FUNC_1(VAR_3 * sizeof(struct bio *), VAR_2, VAR_1);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_4[VAR_6] = FUNC_0();
  if (VAR_4[VAR_6] == ((void*)0))
   VAR_5 = VAR_0;
 }

 if (VAR_5 == VAR_0) {
  FUNC_2(VAR_3, VAR_4);
  return (((void*)0));
 }

 return (VAR_4);
}
