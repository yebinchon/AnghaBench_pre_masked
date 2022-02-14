
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {long remote_packet_size; } ;


 long FUNC_0 (int *) ;
 struct remote_state* FUNC_1 () ;
 int VAR_0 ;

__attribute__((used)) static long
FUNC_2 (void)
{
  struct remote_state *VAR_1 = FUNC_1 ();
  long VAR_2 = FUNC_0 (&VAR_0);



  if (VAR_2 > (VAR_1->remote_packet_size))
    VAR_2 = (VAR_1->remote_packet_size);
  return VAR_2;
}
