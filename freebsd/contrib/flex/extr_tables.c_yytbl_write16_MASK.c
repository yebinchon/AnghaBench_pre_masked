
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_writer {size_t total_written; int out; } ;
typedef int flex_uint16_t ;


 size_t FUNC_0 (int *,size_t,int,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2 (struct yytbl_writer *VAR_0, flex_uint16_t VAR_1)
{
 flex_uint16_t VAR_2;
 size_t VAR_3, VAR_4;

 VAR_2 = FUNC_1 (VAR_1);
 VAR_3 = sizeof (flex_uint16_t);
 VAR_4 = FUNC_0 (&VAR_2, VAR_3, 1, VAR_0->out);
 if (VAR_4 != 1)
  return -1;
 VAR_0->total_written += VAR_3;
 return VAR_3;
}
