
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_table {int flags; int * f; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mon_table* VAR_2 ;

__attribute__((used)) static void
FUNC_0(int VAR_3)
{
 struct mon_table *VAR_4 = VAR_2;

 while (VAR_4->f != ((void*)0)) {
  if (VAR_4->flags & VAR_0) {
   VAR_4->flags &= ~VAR_1;
   VAR_4->flags |= VAR_3 ? VAR_1 : 0;
  }
  VAR_4++;
 }
}
