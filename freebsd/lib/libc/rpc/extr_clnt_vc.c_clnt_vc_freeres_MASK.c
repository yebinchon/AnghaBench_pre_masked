
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* xdrproc_t ) (TYPE_1__*,void*) ;
struct TYPE_7__ {int x_op; } ;
struct ct_data {size_t ct_fd; TYPE_1__ ct_xdrs; } ;
typedef int sigset_t ;
typedef int bool_t ;
typedef TYPE_1__ XDR ;
struct TYPE_8__ {scalar_t__ cl_private; } ;
typedef TYPE_3__ CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,void*) ;
 int FUNC_7 (int ,int *,int *) ;
 int * VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static bool_t
FUNC_8(CLIENT *VAR_5, xdrproc_t VAR_6, void *VAR_7)
{
 struct ct_data *VAR_8;
 XDR *VAR_9;
 bool_t VAR_10;
 sigset_t VAR_11;
 sigset_t VAR_12;

 FUNC_0(VAR_5 != ((void*)0));

 VAR_8 = (struct ct_data *)VAR_5->cl_private;
 VAR_9 = &(VAR_8->ct_xdrs);

 FUNC_5(&VAR_12);
 FUNC_7(VAR_0, &VAR_12, &VAR_11);
 FUNC_3(&VAR_2);
 while (VAR_4[VAR_8->ct_fd])
  FUNC_2(&VAR_3[VAR_8->ct_fd], &VAR_2);
 VAR_9->x_op = VAR_1;
 VAR_10 = (*VAR_6)(VAR_9, VAR_7);
 FUNC_4(&VAR_2);
 FUNC_7(VAR_0, &(VAR_11), ((void*)0));
 FUNC_1(&VAR_3[VAR_8->ct_fd]);

 return VAR_10;
}
