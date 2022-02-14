
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_longlong_t ;
struct TYPE_8__ {int * dt_vector; int dt_macros; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int dt_pfargd_t ;
struct TYPE_9__ {scalar_t__ di_id; } ;
typedef TYPE_2__ dt_ident_t ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int *,char const*,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_5(dtrace_hdl_t *VAR_1, FILE *VAR_2, const char *VAR_3,
    const dt_pfargd_t *VAR_4, const void *VAR_5, size_t VAR_6, uint64_t VAR_7)
{
 char *VAR_8;
 int VAR_9, VAR_10 = 256;
 uint64_t VAR_11, VAR_12 = 0;

 dt_ident_t *VAR_13 = FUNC_1(VAR_1->dt_macros, "target");

 switch (VAR_6) {
 case sizeof (uint32_t):
  VAR_11 = (u_longlong_t)*((uint32_t *)VAR_5);
  break;
 case sizeof (uint64_t):
  VAR_11 = (u_longlong_t)*((uint64_t *)VAR_5);
  break;
 case sizeof (uint64_t) * 2:
  VAR_12 = ((uint64_t *)(uintptr_t)VAR_5)[0];
  VAR_11 = ((uint64_t *)(uintptr_t)VAR_5)[1];
  break;
 default:
  return (FUNC_3(VAR_1, VAR_0));
 }

 if (VAR_12 == 0 && VAR_1->dt_vector == ((void*)0) && VAR_13 != ((void*)0))
  VAR_12 = VAR_13->di_id;

 do {
  VAR_9 = VAR_10;
  VAR_8 = FUNC_0(VAR_9);
 } while ((VAR_10 = FUNC_4(VAR_1, VAR_12, VAR_11, VAR_8, VAR_9)) > VAR_9);

 return (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_8));
}
