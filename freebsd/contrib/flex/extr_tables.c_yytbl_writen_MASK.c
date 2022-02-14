
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_writer {int total_written; int out; } ;
typedef int flex_int32_t ;


 int FUNC_0 (void*,int,int,int ) ;

int FUNC_1 (struct yytbl_writer *VAR_0, void *VAR_1, flex_int32_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0 (VAR_1, 1, VAR_2, VAR_0->out);
 if (VAR_3 != VAR_2)
  return -1;
 VAR_0->total_written += VAR_2;
 return VAR_2;
}
