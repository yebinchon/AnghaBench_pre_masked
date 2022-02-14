
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ki_valid; char* ki_args; int * ki_env; TYPE_1__* ki_p; } ;
struct TYPE_6__ {int ki_flag; scalar_t__ ki_stat; char* ki_comm; char* ki_tdname; int * ki_args; } ;
typedef TYPE_2__ KINFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char**,char*,char*) ;
 void* FUNC_2 (int ,TYPE_2__*,char*,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void
FUNC_5(KINFO *VAR_7)
{
 char *VAR_8;

 if (VAR_7->ki_p->ki_flag & VAR_1) {






  VAR_7->ki_valid = 1;
 } else
  VAR_7->ki_valid = 0;



 if (VAR_5) {
  if (VAR_7->ki_p->ki_stat == VAR_2)
   VAR_7->ki_args = FUNC_3("<defunct>");
  else if (FUNC_0(VAR_7) || (VAR_7->ki_p->ki_args != ((void*)0)))
   VAR_7->ki_args = FUNC_2(VAR_3, VAR_7,
       VAR_7->ki_p->ki_comm, VAR_7->ki_p->ki_tdname, VAR_0);
  else {
   FUNC_1(&VAR_8, "(%s)", VAR_7->ki_p->ki_comm);
   VAR_7->ki_args = VAR_8;
  }
  if (VAR_7->ki_args == ((void*)0))
   FUNC_4(1, "malloc failed");
 } else {
  VAR_7->ki_args = ((void*)0);
 }
 if (VAR_6) {
  if (FUNC_0(VAR_7))
   VAR_7->ki_env = FUNC_2(VAR_4, VAR_7,
       (char *)((void*)0), (char *)((void*)0), 0);
  else
   VAR_7->ki_env = FUNC_3("()");
  if (VAR_7->ki_env == ((void*)0))
   FUNC_4(1, "malloc failed");
 } else {
  VAR_7->ki_env = ((void*)0);
 }
}
