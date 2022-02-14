
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct udl_buffer {int size; } ;


 int FUNC_0 (int *,struct udl_buffer*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, uint32_t VAR_4)
{
 struct udl_buffer *VAR_5;


 if (VAR_3 == ((void*)0))
  return;

 VAR_5 = (struct udl_buffer *)(((uint8_t *)VAR_3) + VAR_4);





 FUNC_1(&VAR_2);
 VAR_5->size = VAR_4;
 FUNC_0(&VAR_1, VAR_5, VAR_0);
 FUNC_2(&VAR_2);
}
