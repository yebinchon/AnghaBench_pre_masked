
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_writer {int total_written; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct yytbl_writer*,int ) ;

__attribute__((used)) static int FUNC_2 (struct yytbl_writer *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 VAR_1 = FUNC_0 (VAR_0->total_written);
 while (VAR_1-- > 0)
  if (FUNC_1 (VAR_0, 0) < 0)
   return -1;
  else
   VAR_2++;
 return VAR_2;
}
