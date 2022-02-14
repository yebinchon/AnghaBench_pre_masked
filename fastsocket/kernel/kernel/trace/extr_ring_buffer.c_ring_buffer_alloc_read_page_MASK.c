
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int dummy; } ;
typedef void buffer_data_page ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

void *FUNC_2(struct ring_buffer *VAR_1)
{
 struct buffer_data_page *VAR_2;
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = (void *)VAR_3;

 FUNC_1(VAR_2);

 return VAR_2;
}
