
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmad_port {int timeout; } ;


 int VAR_0 ;

int FUNC_0(const struct ibmad_port *VAR_1, int VAR_2)
{
 return (VAR_2 ? VAR_2 :
  VAR_1->timeout ? VAR_1->timeout : VAR_0);
}
