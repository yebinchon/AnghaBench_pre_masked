
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_5__ {int fhh_id; int fhh_pid; } ;
struct TYPE_6__ {TYPE_1__ s; int fhh_path; } ;
struct am_fh {TYPE_2__ u; int fhh_gen; } ;
struct TYPE_7__ {int am_mapno; int am_path; int am_gen; } ;
typedef TYPE_3__ am_node ;
typedef int am_nfs_fh ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ) ;

void
FUNC_4(am_node *VAR_0, am_nfs_fh *VAR_1)
{
  u_int VAR_2;
  struct am_fh *VAR_3 = (struct am_fh *) VAR_1;

  FUNC_2((char *) VAR_1, 0, sizeof(am_nfs_fh));


  VAR_3->fhh_gen = VAR_0->am_gen;

  VAR_2 = FUNC_3(VAR_0->am_path);
  if (VAR_2 <= sizeof(*VAR_1) - sizeof(VAR_3->fhh_gen)) {






    FUNC_1(VAR_3->u.fhh_path, VAR_0->am_path, VAR_2);
  } else {



    VAR_3->u.s.fhh_pid = FUNC_0();




    VAR_3->u.s.fhh_id = VAR_0->am_mapno;
  }
}
