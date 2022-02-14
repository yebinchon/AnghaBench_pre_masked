
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int some_bytes_set; int * some_bytes_data; int some_bytes_length; } ;
typedef int ev_uint8_t ;
typedef int ev_uint32_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*,int ) ;

int
FUNC_3(struct run *VAR_0, const ev_uint8_t * VAR_1, ev_uint32_t VAR_2)
{
  if (VAR_0->some_bytes_data != ((void*)0))
    FUNC_0 (VAR_0->some_bytes_data);
  VAR_0->some_bytes_data = FUNC_1(VAR_2);
  if (VAR_0->some_bytes_data == ((void*)0))
    return (-1);
  VAR_0->some_bytes_set = 1;
  VAR_0->some_bytes_length = VAR_2;
  FUNC_2(VAR_0->some_bytes_data, VAR_1, VAR_2);
  return (0);
}
