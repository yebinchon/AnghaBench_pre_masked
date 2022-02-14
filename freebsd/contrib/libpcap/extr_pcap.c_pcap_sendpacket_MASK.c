
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int (* inject_op ) (TYPE_1__*,int const*,int) ;} ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (TYPE_1__*,int const*,int) ;

int
FUNC_1(pcap_t *VAR_0, const u_char *VAR_1, int VAR_2)
{
 if (VAR_0->inject_op(VAR_0, VAR_1, VAR_2) == -1)
  return (-1);
 return (0);
}
