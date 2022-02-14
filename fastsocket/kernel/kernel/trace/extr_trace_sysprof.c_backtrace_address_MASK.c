
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backtrace_info {scalar_t__ pos; int data; int tr; } ;


 int FUNC_0 (int ,int ,int,unsigned long,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(void *VAR_1, unsigned long VAR_2, int VAR_3)
{
 struct backtrace_info *VAR_4 = VAR_1;

 if (VAR_4->pos < VAR_0 && VAR_3) {
  FUNC_0(VAR_4->tr, VAR_4->data, 1, VAR_2, 0);

  VAR_4->pos++;
 }
}
