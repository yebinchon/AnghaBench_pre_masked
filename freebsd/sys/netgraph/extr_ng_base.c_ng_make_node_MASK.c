
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_type {int (* constructor ) (int ) ;} ;
typedef int node_p ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct ng_type* FUNC_2 (char const*) ;
 int FUNC_3 (struct ng_type*,int *) ;
 int FUNC_4 (int ) ;

int
FUNC_5(const char *VAR_2, node_p *VAR_3)
{
 struct ng_type *VAR_4;
 int VAR_5;


 if (VAR_2 == ((void*)0)) {
  FUNC_1();
  return (VAR_0);
 }




 if ((VAR_4 = FUNC_2(VAR_2)) == ((void*)0))
  return (VAR_1);





 if (VAR_4->constructor != ((void*)0)) {
  if ((VAR_5 = FUNC_3(VAR_4, VAR_3)) == 0) {
   if ((VAR_5 = ((*VAR_4->constructor)(*VAR_3))) != 0) {
    FUNC_0(*VAR_3);
   }
  }
 } else {







  FUNC_1();
  VAR_5 = VAR_0;
 }
 return (VAR_5);
}
