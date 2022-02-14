
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dt_node_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char**,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,int ,int ) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static dt_node_t *
FUNC_6(int VAR_1)
{
 char *VAR_2;

 if (VAR_1 == 0)
  return (((void*)0));
 FUNC_2(VAR_1 > 0);

 (void) FUNC_1(&VAR_2, "%%condition_%d", FUNC_0(VAR_1));
 return (FUNC_4(VAR_0, FUNC_3(FUNC_5("this")),
     FUNC_3(VAR_2)));
}
