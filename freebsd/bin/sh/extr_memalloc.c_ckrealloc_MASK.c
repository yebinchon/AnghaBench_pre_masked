
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * pointer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int) ;

pointer
FUNC_2(pointer VAR_2, int VAR_3)
{
 VAR_0;
 VAR_2 = FUNC_1(VAR_2, VAR_3);
 VAR_1;
 if (VAR_2 == ((void*)0))
  FUNC_0("Out of space");
 return VAR_2;
}
