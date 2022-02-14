
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct release_name_res {scalar_t__ major_status; scalar_t__ minor_status; } ;
struct release_name_args {int input_name; } ;
typedef TYPE_1__* gss_name_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_4__ {int handle; } ;
typedef scalar_t__ OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct release_name_args*,struct release_name_res*,int *) ;
 int * FUNC_3 () ;
 int VAR_4 ;

OM_uint32
FUNC_4(OM_uint32 *VAR_5, gss_name_t *VAR_6)
{
 struct release_name_res VAR_7;
 struct release_name_args VAR_8;
 enum clnt_stat VAR_9;
 gss_name_t VAR_10;
 CLIENT *VAR_11;

 *VAR_5 = 0;

 if (!VAR_4)
  return (VAR_1);

 if (*VAR_6) {
  VAR_10 = *VAR_6;
  VAR_8.input_name = VAR_10->handle;

  VAR_11 = FUNC_3();
  if (VAR_11 == ((void*)0))
   return (VAR_1);
  VAR_9 = FUNC_2(&VAR_8, &VAR_7, VAR_11);
  FUNC_0(VAR_11);
  if (VAR_9 != VAR_3) {
   *VAR_5 = VAR_9;
   return (VAR_1);
  }

  FUNC_1(VAR_10, VAR_2);
  *VAR_6 = ((void*)0);

  if (VAR_7.major_status != VAR_0) {
   *VAR_5 = VAR_7.minor_status;
   return (VAR_7.major_status);
  }
 }

 return (VAR_0);
}
