
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SEGMENT ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int *,int) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static void *
FUNC_4(SEGMENT **VAR_0, int VAR_1, int VAR_2)
{
 void *VAR_3;

 if ( (VAR_3 = FUNC_1(VAR_2)) ) {
  FUNC_2(VAR_3, *VAR_0, VAR_1);
  FUNC_3((char *)VAR_3 + VAR_1, 0, VAR_2 - VAR_1);
  FUNC_0(*VAR_0);
  *VAR_0 = VAR_3;
 }
 return (VAR_3);
}
