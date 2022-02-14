
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmeter {int lock; scalar_t__ cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fmeter*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fmeter *VAR_2)
{
 FUNC_2(&VAR_2->lock);
 FUNC_0(VAR_2);
 VAR_2->cnt = FUNC_1(VAR_0, VAR_2->cnt + VAR_1);
 FUNC_3(&VAR_2->lock);
}
