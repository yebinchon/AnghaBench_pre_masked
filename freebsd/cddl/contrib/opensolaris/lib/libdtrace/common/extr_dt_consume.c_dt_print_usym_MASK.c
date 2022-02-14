
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct ps_prochandle {int dummy; } ;
struct TYPE_11__ {int * dt_vector; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef scalar_t__ dtrace_actkind_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_12__ {int st_value; } ;
typedef TYPE_2__ GElf_Sym ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ps_prochandle*,int ,int *,int ,TYPE_2__*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *,char const*,char*) ;
 struct ps_prochandle* FUNC_3 (TYPE_1__*,int ,int,int ) ;
 int FUNC_4 (TYPE_1__*,struct ps_prochandle*) ;
 int FUNC_5 (TYPE_1__*,struct ps_prochandle*) ;
 int FUNC_6 (TYPE_1__*,struct ps_prochandle*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_8(dtrace_hdl_t *VAR_3, FILE *VAR_4, caddr_t VAR_5, dtrace_actkind_t VAR_6)
{

 uint64_t VAR_7 = ((uint64_t *)VAR_5)[0];

 uint64_t VAR_8 = ((uint64_t *)VAR_5)[1];
 const char *VAR_9 = "  %-50s";
 char *VAR_10;
 int VAR_11, VAR_12 = 256;

 if (VAR_6 == VAR_0 && VAR_3->dt_vector == ((void*)0)) {
  struct ps_prochandle *VAR_13;

  if ((VAR_13 = FUNC_3(VAR_3, VAR_7,
      VAR_2 | VAR_1, 0)) != ((void*)0)) {
   GElf_Sym VAR_14;

   FUNC_4(VAR_3, VAR_13);

   if (FUNC_0(VAR_13, VAR_8, ((void*)0), 0, &VAR_14) == 0)
    VAR_8 = VAR_14.st_value;

   FUNC_6(VAR_3, VAR_13);
   FUNC_5(VAR_3, VAR_13);
  }
 }

 do {
  VAR_11 = VAR_12;
  VAR_10 = FUNC_1(VAR_11);
 } while ((VAR_12 = FUNC_7(VAR_3, VAR_7, VAR_8, VAR_10, VAR_11)) > VAR_11);

 return (FUNC_2(VAR_3, VAR_4, VAR_9, VAR_10));
}
