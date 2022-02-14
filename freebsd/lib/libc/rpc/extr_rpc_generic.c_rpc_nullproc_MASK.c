
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct timeval {int member_0; int member_1; } ;
typedef int CLIENT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *,int ,int *,struct timeval) ;
 scalar_t__ VAR_2 ;

void *
FUNC_1(CLIENT *VAR_3)
{
 struct timeval VAR_4 = {25, 0};

 if (FUNC_0(VAR_3, VAR_0, (xdrproc_t) VAR_2, ((void*)0),
  (xdrproc_t) VAR_2, ((void*)0), VAR_4) != VAR_1) {
  return (((void*)0));
 }
 return ((void *) VAR_3);
}
