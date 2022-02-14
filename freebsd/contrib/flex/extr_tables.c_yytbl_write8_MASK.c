
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_writer {size_t total_written; int out; } ;
typedef int flex_uint8_t ;


 size_t FUNC_0 (int *,size_t,int,int ) ;

int FUNC_1 (struct yytbl_writer *VAR_0, flex_uint8_t VAR_1)
{
 size_t VAR_2, VAR_3;

 VAR_2 = sizeof (flex_uint8_t);
 VAR_3 = FUNC_0 (&VAR_1, VAR_2, 1, VAR_0->out);
 if (VAR_3 != 1)
  return -1;
 VAR_0->total_written += VAR_2;
 return VAR_2;
}
