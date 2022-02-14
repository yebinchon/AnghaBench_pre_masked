
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {scalar_t__ fd; } ;
typedef TYPE_1__ pcap_t ;
typedef int pcap_handler ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_3 (pcap_t *VAR_0, int VAR_1, pcap_handler VAR_2, u_char *VAR_3)
{
  int VAR_4, VAR_5 = 0;

  while (VAR_5 <= VAR_1 || FUNC_0(VAR_1))
  {
    if (VAR_0->fd <= 0)
       return (-1);
    VAR_4 = FUNC_2 (VAR_0, VAR_2, VAR_3);
    if (VAR_4 > 0)
       VAR_5++;
    if (VAR_4 < 0)
       break;
    FUNC_1();
  }
  return (VAR_5);
}
