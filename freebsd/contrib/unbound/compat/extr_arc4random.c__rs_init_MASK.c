
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int rs_chacha; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,size_t,int ) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 TYPE_1__* FUNC_6 (int *,int,int,int,int,int ) ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static inline void
FUNC_7(u_char *VAR_10, size_t VAR_11)
{
 FUNC_1(VAR_10);
 if (VAR_11 < VAR_1 + VAR_0)
  return;

 if (VAR_8 == ((void*)0)) {

  if ((VAR_8 = FUNC_6(((void*)0), sizeof(*VAR_8), VAR_6|VAR_7,
      VAR_2|VAR_5, -1, 0)) == VAR_3)
   FUNC_0();
 }
 if (VAR_9 == ((void*)0)) {

  if ((VAR_9 = FUNC_6(((void*)0), sizeof(*VAR_9), VAR_6|VAR_7,
      VAR_2|VAR_5, -1, 0)) == VAR_3)
   FUNC_0();





 }

 FUNC_3(&VAR_9->rs_chacha, VAR_10, VAR_1 * 8, 0);
 FUNC_2(&VAR_9->rs_chacha, VAR_10 + VAR_1);
}
