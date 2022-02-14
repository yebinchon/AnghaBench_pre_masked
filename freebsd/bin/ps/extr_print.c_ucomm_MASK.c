
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VARENT ;
struct TYPE_5__ {char* prefix; } ;
struct TYPE_7__ {TYPE_2__* ki_p; TYPE_1__ ki_d; } ;
struct TYPE_6__ {int ki_numthreads; char* ki_tdname; char* ki_moretdname; int ki_comm; } ;
typedef TYPE_3__ KINFO ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (char**,char*,char*,char*,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_2 (int ) ;

char *
FUNC_3(KINFO *VAR_2, VARENT *VAR_3)
{
 char *VAR_4;

 if (FUNC_0(VAR_3, VAR_0) == ((void*)0)) {
  FUNC_1(&VAR_4, "%s%s%s%s%s",
      VAR_2->ki_d.prefix ? VAR_2->ki_d.prefix : "",
      VAR_2->ki_p->ki_comm,
      (VAR_1 && VAR_2->ki_p->ki_numthreads > 1) ? "/" : "",
      (VAR_1 && VAR_2->ki_p->ki_numthreads > 1) ? VAR_2->ki_p->ki_tdname : "",
      (VAR_1 && VAR_2->ki_p->ki_numthreads > 1) ? VAR_2->ki_p->ki_moretdname : "");
 } else {
  if (VAR_1 && VAR_2->ki_p->ki_numthreads > 1)
   FUNC_1(&VAR_4, "%s/%s%s", VAR_2->ki_p->ki_comm,
       VAR_2->ki_p->ki_tdname, VAR_2->ki_p->ki_moretdname);
  else
   VAR_4 = FUNC_2(VAR_2->ki_p->ki_comm);
 }
 return (VAR_4);
}
