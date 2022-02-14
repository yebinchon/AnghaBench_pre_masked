
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_7__ {int fhh_id; int fhh_pid; } ;
struct TYPE_8__ {TYPE_1__ s; int fhh_path; } ;
struct am_fh3 {TYPE_2__ u; int fhh_gen; } ;
struct TYPE_9__ {int am_mapno; int am_path; int am_gen; } ;
typedef TYPE_3__ am_node ;
struct TYPE_10__ {int am_fh3_length; scalar_t__ am_fh3_data; } ;
typedef TYPE_4__ am_nfs_fh3 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ) ;

void
FUNC_4(am_node *VAR_1, am_nfs_fh3 *VAR_2)
{
  u_int VAR_3;
  struct am_fh3 *VAR_4 = (struct am_fh3 *) VAR_2->am_fh3_data;

  FUNC_2((char *) VAR_2, 0, sizeof(am_nfs_fh3));
  VAR_2->am_fh3_length = VAR_0;


  VAR_4->fhh_gen = VAR_1->am_gen;

  VAR_3 = FUNC_3(VAR_1->am_path);
  if (VAR_3 <= sizeof(*VAR_4) - sizeof(VAR_4->fhh_gen)) {






    FUNC_1(VAR_4->u.fhh_path, VAR_1->am_path, VAR_3);
  } else {



    VAR_4->u.s.fhh_pid = FUNC_0();




    VAR_4->u.s.fhh_id = VAR_1->am_mapno;
  }
}
