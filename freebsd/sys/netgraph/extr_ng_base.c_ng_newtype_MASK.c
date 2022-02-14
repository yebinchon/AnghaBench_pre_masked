
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_type {scalar_t__ version; int refs; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ng_type*,int ) ;
 scalar_t__ VAR_2 ;
 size_t const VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 size_t FUNC_6 (int ) ;
 int VAR_5 ;

int
FUNC_7(struct ng_type *VAR_6)
{
 const size_t VAR_7 = FUNC_6(VAR_6->name);


 if ((VAR_6->version != VAR_2) || (VAR_7 == 0) ||
     (VAR_7 >= VAR_3)) {
  FUNC_1();
  if (VAR_6->version != VAR_2) {
   FUNC_5("Netgraph: Node type rejected. ABI mismatch. "
       "Suggest recompile\n");
  }
  return (VAR_1);
 }


 if (FUNC_4(VAR_6->name) != ((void*)0)) {
  FUNC_1();
  return (VAR_0);
 }


 FUNC_2();
 FUNC_0(&VAR_4, VAR_6, VAR_5);
 VAR_6->refs = 1;
 FUNC_3();
 return (0);
}
