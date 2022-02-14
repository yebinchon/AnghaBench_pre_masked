
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcap_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;

int
FUNC_2(pcap_t *VAR_0, int **VAR_1)
{





 *VAR_1 = (int*)FUNC_0(sizeof(**VAR_1));
 if (*VAR_1 == ((void*)0))
  return (-1);
 **VAR_1 = FUNC_1(VAR_0);
 return (1);
}
