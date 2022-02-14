
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct com_s {TYPE_1__* tp; } ;
typedef scalar_t__ bool_t ;
struct TYPE_2__ {int t_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct com_s* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*) ;
 int VAR_7 ;
 int FUNC_2 (int (*) (void*),void*,int) ;
 int FUNC_3 (int (*) (void*),void*,int ) ;

__attribute__((used)) static void
FUNC_4()
{
 struct com_s *VAR_8;
 bool_t VAR_9;
 int VAR_10;






 FUNC_3(FUNC_1, (void *)((void*)0), VAR_5);
 VAR_4 = VAR_7;
 VAR_9 = VAR_0;
 for (VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10) {
  VAR_8 = FUNC_0(VAR_10);
  if (VAR_8 != ((void*)0) && VAR_8->tp != ((void*)0)
      && VAR_8->tp->t_state & VAR_3) {
   VAR_9 = VAR_2;
  }
 }
 if (VAR_9) {
  VAR_6 = VAR_7 / VAR_4;
  VAR_5 = FUNC_2(FUNC_1, (void *)((void*)0),
          VAR_4);
 } else {

  VAR_6 = 1;
  FUNC_1((void *)((void*)0));
  FUNC_3(FUNC_1, (void *)((void*)0), VAR_5);
 }
}
