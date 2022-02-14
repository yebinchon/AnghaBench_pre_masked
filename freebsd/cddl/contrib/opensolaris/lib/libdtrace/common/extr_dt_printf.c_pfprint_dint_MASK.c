
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dtrace_hdl_t ;
struct TYPE_5__ {int pfd_flags; } ;
typedef TYPE_1__ dt_pfargd_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char const*,TYPE_1__ const*,void const*,size_t,int ) ;
 int FUNC_1 (int *,int *,char const*,TYPE_1__ const*,void const*,size_t,int ) ;

__attribute__((used)) static int
FUNC_2(dtrace_hdl_t *VAR_1, FILE *VAR_2, const char *VAR_3,
    const dt_pfargd_t *VAR_4, const void *VAR_5, size_t VAR_6, uint64_t VAR_7)
{
 if (VAR_4->pfd_flags & VAR_0)
  return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
 else
  return (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
}
