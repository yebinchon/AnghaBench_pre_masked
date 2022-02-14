
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2 (const char* VAR_2)
{
 if (!FUNC_1 (VAR_2, "tcp"))
  return VAR_0;

 if (!FUNC_1 (VAR_2, "udp"))
  return VAR_1;

 FUNC_0 (1, "unknown protocol %s. Expected tcp or udp", VAR_2);
}
