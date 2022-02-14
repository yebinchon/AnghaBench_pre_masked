
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_cluster {int cl_idle_timeout_ms; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(
 struct o2nm_cluster *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%u\n", VAR_0->cl_idle_timeout_ms);
}
