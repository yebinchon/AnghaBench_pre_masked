
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_5__ {int * state; } ;
typedef TYPE_1__ SHA256_CTX ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void
FUNC_4(u_int8_t VAR_1[VAR_0], SHA256_CTX *VAR_2)
{
 FUNC_1(VAR_2);


 if (VAR_1 != ((void*)0)) {

  int VAR_3;


  for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
   FUNC_0(VAR_1 + VAR_3 * 4, VAR_2->state[VAR_3]);



  FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 }
}
