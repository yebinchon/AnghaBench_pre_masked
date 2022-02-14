
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int rs_chacha; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int **,TYPE_1__**) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,size_t) ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static inline void
FUNC_4(u_char *VAR_4, size_t VAR_5)
{
 if (VAR_5 < VAR_1 + VAR_0)
  return;

 if (VAR_2 == ((void*)0)) {
  if (FUNC_0(&VAR_2, &VAR_3) == -1)
   FUNC_1();
 }

 FUNC_3(&VAR_3->rs_chacha, VAR_4, VAR_1 * 8);
 FUNC_2(&VAR_3->rs_chacha, VAR_4 + VAR_1, ((void*)0));
}
