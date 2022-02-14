
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itimer {scalar_t__ it_usecount; int it_flags; int it_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct itimer*) ;

__attribute__((used)) static void
FUNC_3(struct itimer *VAR_2)
{

 FUNC_1(&VAR_2->it_mtx, VAR_1);
 FUNC_0(VAR_2->it_usecount > 0, ("invalid it_usecount"));

 if (--VAR_2->it_usecount == 0 && (VAR_2->it_flags & VAR_0) != 0)
  FUNC_2(VAR_2);
}
