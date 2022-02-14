
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char* f_volname; TYPE_3__* f_ref; } ;
typedef TYPE_4__ fsmount ;
struct TYPE_8__ {TYPE_2__* m_dk; } ;
struct TYPE_7__ {TYPE_1__* d_host; } ;
struct TYPE_6__ {int h_hostname; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_0, fsmount *VAR_1, char *VAR_2)
{
  int VAR_3 = 0;
  char *VAR_4 = FUNC_3(VAR_1->f_ref->m_dk->d_host->h_hostname);

 FUNC_1(VAR_4, VAR_2);
  FUNC_2(VAR_0, "%s:%s", VAR_4, VAR_1->f_volname);
  FUNC_0(VAR_4);
  return VAR_3;
}
