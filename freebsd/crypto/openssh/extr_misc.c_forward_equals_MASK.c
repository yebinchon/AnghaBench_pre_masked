
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Forward {scalar_t__ listen_port; scalar_t__ connect_port; int connect_path; int connect_host; int listen_path; int listen_host; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

int
FUNC_1(const struct Forward *VAR_0, const struct Forward *VAR_1)
{
 if (FUNC_0(VAR_0->listen_host, VAR_1->listen_host) == 0)
  return 0;
 if (VAR_0->listen_port != VAR_1->listen_port)
  return 0;
 if (FUNC_0(VAR_0->listen_path, VAR_1->listen_path) == 0)
  return 0;
 if (FUNC_0(VAR_0->connect_host, VAR_1->connect_host) == 0)
  return 0;
 if (VAR_0->connect_port != VAR_1->connect_port)
  return 0;
 if (FUNC_0(VAR_0->connect_path, VAR_1->connect_path) == 0)
  return 0;

 return 1;
}
