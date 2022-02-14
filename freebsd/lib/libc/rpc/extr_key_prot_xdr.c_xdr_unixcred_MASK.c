
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_4__ {int gids_len; int * gids_val; } ;
struct TYPE_5__ {TYPE_1__ gids; int gid; int uid; } ;
typedef TYPE_2__ unixcred ;
typedef int u_int ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char**,int *,int ,int,int ) ;
 int FUNC_1 (int *,int *) ;

bool_t
FUNC_2(register XDR *VAR_3, unixcred *VAR_4)
{
 u_int **VAR_5;

 if (!FUNC_1(VAR_3, &VAR_4->uid))
  return (VAR_0);
 if (!FUNC_1(VAR_3, &VAR_4->gid))
  return (VAR_0);
 VAR_5 = &VAR_4->gids.gids_val;
 if (!FUNC_0(VAR_3, (char **) VAR_5, (u_int *) &VAR_4->gids.gids_len, VAR_1,
  sizeof (u_int), (xdrproc_t) FUNC_1))
  return (VAR_0);
 return (VAR_2);
}
