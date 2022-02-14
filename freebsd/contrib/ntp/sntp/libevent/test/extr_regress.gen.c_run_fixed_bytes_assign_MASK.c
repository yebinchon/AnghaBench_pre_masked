
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int fixed_bytes_set; int fixed_bytes_data; } ;
typedef int ev_uint8_t ;


 int FUNC_0 (int ,int const*,int) ;

int
FUNC_1(struct run *VAR_0, const ev_uint8_t *VAR_1)
{
  VAR_0->fixed_bytes_set = 1;
  FUNC_0(VAR_0->fixed_bytes_data, VAR_1, 24);
  return (0);
}
