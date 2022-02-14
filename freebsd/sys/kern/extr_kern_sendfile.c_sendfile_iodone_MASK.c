
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_page_t ;
struct socket {TYPE_5__* so_proto; int so_error; int so_vnet; } ;
struct sf_io {int error; int npages; TYPE_6__* m; TYPE_3__* tls; int nios; struct socket* so; } ;
struct TYPE_10__ {scalar_t__ ext_type; TYPE_1__* ext_pgs; } ;
struct TYPE_14__ {int m_flags; TYPE_2__ m_ext; } ;
struct TYPE_13__ {TYPE_4__* pr_usrreqs; } ;
struct TYPE_12__ {int (* pru_ready ) (struct socket*,TYPE_6__*,int ) ;int (* pru_abort ) (struct socket*) ;} ;
struct TYPE_11__ {scalar_t__ mode; } ;
struct TYPE_9__ {TYPE_3__* tls; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct socket*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct sf_io*,int ) ;
 int FUNC_6 (TYPE_6__*,struct socket*,int ) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (struct socket*) ;
 int FUNC_11 (struct socket*,TYPE_6__*,int ) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static void
FUNC_13(void *VAR_6, vm_page_t *VAR_7, int VAR_8, int VAR_9)
{
 struct sf_io *VAR_10 = VAR_6;
 struct socket *VAR_11 = VAR_10->so;

 for (int VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  if (VAR_7[VAR_12] != VAR_5)
   FUNC_12(VAR_7[VAR_12]);

 if (VAR_9)
  VAR_10->error = VAR_9;

 if (!FUNC_8(&VAR_10->nios))
  return;

 if (FUNC_4(VAR_10->error && VAR_10->m == ((void*)0))) {





  FUNC_5(VAR_10, VAR_3);
  return;
 }
 FUNC_1(VAR_11->so_vnet);
 if (FUNC_4(VAR_10->error)) {
  VAR_11->so_proto->pr_usrreqs->pru_abort(VAR_11);
  VAR_11->so_error = VAR_0;

  FUNC_7(VAR_10->m, VAR_10->npages);
 } else
  (void)(VAR_11->so_proto->pr_usrreqs->pru_ready)(VAR_11, VAR_10->m,
      VAR_10->npages);

 FUNC_3(VAR_11);
 FUNC_9(VAR_11);



 FUNC_0();
 FUNC_5(VAR_10, VAR_3);
}
