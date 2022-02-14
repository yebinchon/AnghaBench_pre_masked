
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot_handle {scalar_t__ cur; scalar_t__ prev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_3(struct snapshot_handle *VAR_4)
{
 FUNC_0();

 if (VAR_4->prev && VAR_4->cur > VAR_2 + VAR_1) {
  FUNC_2(&VAR_3, VAR_0);
  FUNC_1();
 }
}
