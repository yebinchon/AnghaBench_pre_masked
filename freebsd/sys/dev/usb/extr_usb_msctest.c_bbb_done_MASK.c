
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bbb_transfer {int error; int status_try; int cv; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct bbb_transfer *VAR_1, int VAR_2)
{
 VAR_1->error = VAR_2;
 VAR_1->state = VAR_0;
 VAR_1->status_try = 1;
 FUNC_0(&VAR_1->cv);
}
