
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmad_port {int retries; } ;


 int VAR_0 ;

int FUNC_0(const struct ibmad_port *VAR_1)
{
 return (VAR_1->retries ? VAR_1->retries : VAR_0);
}
