
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char* f_volname; char* f_localname; char* f_fstype; char* f_opts; TYPE_3__* f_ref; } ;
typedef TYPE_4__ fsmount ;
struct TYPE_8__ {TYPE_2__* m_dk; } ;
struct TYPE_7__ {TYPE_1__* d_host; } ;
struct TYPE_6__ {int h_hostname; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,char*,char*,char*,char*,char*) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_0, char *VAR_1, fsmount *VAR_2)
{
  char *VAR_3 = FUNC_3(VAR_2->f_ref->m_dk->d_host->h_hostname);

  FUNC_1(VAR_3, VAR_1);
  FUNC_2(VAR_0, "%s@%s:%s:%s:%s:0:0\n",
   VAR_2->f_volname,
   VAR_3,
   VAR_2->f_localname,
   VAR_2->f_fstype,
   VAR_2->f_opts);
  FUNC_0(VAR_3);
}
