
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* xdrproc_t ) (TYPE_1__*,void*) ;
struct TYPE_7__ {int x_op; } ;
struct cu_data {size_t cu_fd; TYPE_1__ cu_outxdrs; } ;
typedef int sigset_t ;
typedef int bool_t ;
typedef TYPE_1__ XDR ;
struct TYPE_8__ {scalar_t__ cl_private; } ;
typedef TYPE_3__ CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,void*) ;
 int FUNC_6 (int ,int *,int *) ;

__attribute__((used)) static bool_t
FUNC_7(CLIENT *VAR_5, xdrproc_t VAR_6, void *VAR_7)
{
 struct cu_data *VAR_8 = (struct cu_data *)VAR_5->cl_private;
 XDR *VAR_9 = &(VAR_8->cu_outxdrs);
 bool_t VAR_10;
 sigset_t VAR_11;
 sigset_t VAR_12;

 FUNC_4(&VAR_12);
 FUNC_6(VAR_0, &VAR_12, &VAR_11);
 FUNC_2(&VAR_2);
 while (VAR_4[VAR_8->cu_fd])
  FUNC_1(&VAR_3[VAR_8->cu_fd], &VAR_2);
 VAR_9->x_op = VAR_1;
 VAR_10 = (*VAR_6)(VAR_9, VAR_7);
 FUNC_3(&VAR_2);
 FUNC_6(VAR_0, &VAR_11, ((void*)0));
 FUNC_0(&VAR_3[VAR_8->cu_fd]);
 return (VAR_10);
}
