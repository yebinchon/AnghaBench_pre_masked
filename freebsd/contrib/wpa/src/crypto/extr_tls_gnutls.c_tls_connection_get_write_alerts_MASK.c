
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int write_alerts; } ;



int FUNC_0(void *VAR_0, struct tls_connection *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return -1;
 return VAR_1->write_alerts;
}
