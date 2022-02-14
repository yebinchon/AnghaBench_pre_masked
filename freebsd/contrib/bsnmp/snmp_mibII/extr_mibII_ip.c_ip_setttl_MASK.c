
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ttl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*,size_t*,int*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, int *VAR_3)
{
 size_t VAR_4;

 VAR_4 = sizeof(*VAR_3);
 if (FUNC_0("net.inet.ip.ttl", VAR_3, VAR_3 ? &VAR_4 : ((void*)0),
     &VAR_2, sizeof(VAR_2)) == -1) {
  FUNC_1(VAR_0, "set net.inet.ip.ttl: %m");
  return (-1);
 }
 VAR_1 = VAR_2;
 return (0);
}
