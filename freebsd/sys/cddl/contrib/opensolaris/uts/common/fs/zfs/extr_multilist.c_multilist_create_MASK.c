
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int multilist_t ;
typedef int multilist_sublist_index_func_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int * FUNC_1 (size_t,size_t,int,int *) ;
 int VAR_1 ;

multilist_t *
FUNC_2(size_t VAR_2, size_t VAR_3,
    multilist_sublist_index_func_t *VAR_4)
{
 int VAR_5;

 if (VAR_1 > 0) {
  VAR_5 = VAR_1;
 } else {
  VAR_5 = FUNC_0(VAR_0, 4);
 }

 return (FUNC_1(VAR_2, VAR_3, VAR_5, VAR_4));
}
