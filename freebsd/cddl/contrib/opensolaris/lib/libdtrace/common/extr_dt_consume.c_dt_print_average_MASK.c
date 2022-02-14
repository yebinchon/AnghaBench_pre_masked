
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int int64_t ;
typedef int dtrace_hdl_t ;
typedef scalar_t__ caddr_t ;
typedef int FILE ;


 int FUNC_0 (int *,int *,char*,long long) ;

__attribute__((used)) static int
FUNC_1(dtrace_hdl_t *VAR_0, FILE *VAR_1, caddr_t VAR_2,
    size_t VAR_3, uint64_t VAR_4)
{

 int64_t *VAR_5 = (int64_t *)VAR_2;

 return (FUNC_0(VAR_0, VAR_1, " %16lld", VAR_5[0] ?
     (long long)(VAR_5[1] / (int64_t)VAR_4 / VAR_5[0]) : 0));
}
