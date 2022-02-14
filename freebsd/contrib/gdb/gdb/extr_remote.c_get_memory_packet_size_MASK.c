
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {long remote_packet_size; long actual_register_packet_size; } ;
struct memory_packet_config {long size; scalar_t__ fixed_p; } ;


 long VAR_0 ;
 long VAR_1 ;
 struct remote_state* FUNC_0 () ;

__attribute__((used)) static long
FUNC_1 (struct memory_packet_config *VAR_2)
{
  struct remote_state *VAR_3 = FUNC_0 ();
  long VAR_4;
  if (VAR_2->fixed_p)
    {
      if (VAR_2->size <= 0)
 VAR_4 = 16384;
      else
 VAR_4 = VAR_2->size;
    }
  else
    {
      VAR_4 = (VAR_3->remote_packet_size);

      if (VAR_2->size > 0
   && VAR_4 > VAR_2->size)
 VAR_4 = VAR_2->size;

      if ((VAR_3->actual_register_packet_size) > 0
   && VAR_4 > (VAR_3->actual_register_packet_size))
 VAR_4 = (VAR_3->actual_register_packet_size);
    }
  if (VAR_4 > 16384)
    VAR_4 = 16384;
  if (VAR_4 < 16)
    VAR_4 = 16;
  return VAR_4;
}
