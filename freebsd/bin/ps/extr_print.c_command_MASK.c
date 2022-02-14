
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VARENT ;
struct TYPE_6__ {char* prefix; } ;
struct TYPE_7__ {char* ki_args; char* ki_env; TYPE_2__ ki_d; TYPE_1__* ki_p; } ;
struct TYPE_5__ {int ki_numthreads; char* ki_tdname; char* ki_moretdname; int ki_comm; } ;
typedef TYPE_3__ KINFO ;


 size_t VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char**,char*,char*,char*,char*,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_4 (int ) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int,char*) ;

char *
FUNC_8(KINFO *VAR_7, VARENT *VAR_8)
{
 char *VAR_9, *VAR_10, *VAR_11;

 if (VAR_4) {

  if (FUNC_0(VAR_8, VAR_5) == ((void*)0)) {
   FUNC_1(&VAR_11, "%s%s%s%s%s",
       VAR_7->ki_d.prefix ? VAR_7->ki_d.prefix : "",
       VAR_7->ki_p->ki_comm,
       (VAR_6 && VAR_7->ki_p->ki_numthreads > 1) ? "/" : "",
       (VAR_6 && VAR_7->ki_p->ki_numthreads > 1) ? VAR_7->ki_p->ki_tdname : "",
       (VAR_6 && VAR_7->ki_p->ki_numthreads > 1) ? VAR_7->ki_p->ki_moretdname : "");
  } else
   VAR_11 = FUNC_4(VAR_7->ki_p->ki_comm);

  return (VAR_11);
 }
 if ((VAR_9 = FUNC_3(FUNC_5(VAR_7->ki_args) * 4 + 1)) == ((void*)0))
  FUNC_7(1, "malloc failed");
 FUNC_6(VAR_9, VAR_7->ki_args, VAR_3 | VAR_1 | VAR_2);

 if (FUNC_0(VAR_8, VAR_5) == ((void*)0)) {


  if (VAR_7->ki_env) {
   if ((VAR_10 = FUNC_3(FUNC_5(VAR_7->ki_env) * 4 + 1))
       == ((void*)0))
    FUNC_7(1, "malloc failed");
   FUNC_6(VAR_10, VAR_7->ki_env,
       VAR_3 | VAR_1 | VAR_2);
  } else
   VAR_10 = ((void*)0);

  FUNC_1(&VAR_11, "%s%s%s%s",
      VAR_7->ki_d.prefix ? VAR_7->ki_d.prefix : "",
      VAR_10 ? VAR_10 : "",
      VAR_10 ? " " : "",
      VAR_9);

  if (VAR_10 != ((void*)0))
   FUNC_2(VAR_10);
  FUNC_2(VAR_9);
 } else {

  VAR_11 = VAR_9;

  if (FUNC_5(VAR_11) > VAR_0)
   VAR_11[VAR_0] = '\0';
 }

 return (VAR_11);
}
