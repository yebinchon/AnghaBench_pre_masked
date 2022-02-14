
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int u_int ;
struct authunix_parms {int aup_len; int aup_gid; int aup_uid; int aup_machname; int aup_time; int * aup_gids; } ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,char**,int *,int ,int,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;

bool_t
FUNC_5(XDR *VAR_4, struct authunix_parms *VAR_5)
{
 u_int **VAR_6;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 != ((void*)0));

 VAR_6 = &VAR_5->aup_gids;

 if (FUNC_4(VAR_4, &(VAR_5->aup_time)) &&
     FUNC_2(VAR_4, &(VAR_5->aup_machname), VAR_1) &&
     FUNC_3(VAR_4, &(VAR_5->aup_uid)) &&
     FUNC_3(VAR_4, &(VAR_5->aup_gid)) &&
     FUNC_1(VAR_4, (char **) VAR_6,
     &(VAR_5->aup_len), VAR_2, sizeof(u_int), (xdrproc_t)FUNC_3) ) {
  return (VAR_3);
 }
 return (VAR_0);
}
