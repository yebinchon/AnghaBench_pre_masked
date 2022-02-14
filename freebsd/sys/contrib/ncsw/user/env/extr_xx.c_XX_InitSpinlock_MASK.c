
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct mtx* t_Handle ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mtx* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct mtx*,char*,int *,int) ;

t_Handle
FUNC_2(void)
{
 struct mtx *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_2, VAR_3 | VAR_4);
 if (!VAR_5)
  return (0);

 FUNC_1(VAR_5, "NetCommSW Lock", ((void*)0), VAR_0 | VAR_1);

 return (VAR_5);
}
