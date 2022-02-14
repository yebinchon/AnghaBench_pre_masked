
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_packet_config {scalar_t__ fixed_p; int size; int name; } ;


 int FUNC_0 (struct memory_packet_config*) ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_2 (struct memory_packet_config *VAR_0)
{
  FUNC_1 ("The %s is %ld. ", VAR_0->name, VAR_0->size);
  if (VAR_0->fixed_p)
    FUNC_1 ("Packets are fixed at %ld bytes.\n",
       FUNC_0 (VAR_0));
  else
    FUNC_1 ("Packets are limited to %ld bytes.\n",
       FUNC_0 (VAR_0));
}
