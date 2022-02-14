
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libbe_handle_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char*,int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(int VAR_0, char *VAR_1[]) {

        libbe_handle_t *VAR_2;

 if (VAR_0 != 5)
  return -1;

        if ((VAR_2 = FUNC_2(VAR_1[1])) == ((void*)0))
                return -1;

 FUNC_3(VAR_2, 1);

 return (FUNC_1(VAR_2, VAR_1[2], VAR_1[3], FUNC_0(VAR_1[4])));
}
