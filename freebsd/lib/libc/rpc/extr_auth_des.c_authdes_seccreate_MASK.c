
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_3__ {char* n_bytes; scalar_t__ n_len; } ;
typedef TYPE_1__ netobj ;
typedef int des_block ;
typedef int AUTH ;


 int VAR_0 ;
 int * FUNC_0 (char const*,TYPE_1__*,scalar_t__ const,char const*,int const*,int *) ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char const*) ;

AUTH *
FUNC_4(const char *VAR_1, const u_int VAR_2,
 const char *VAR_3, const des_block *VAR_4)
{
 u_char VAR_5[1024];
 netobj VAR_6;
 AUTH *VAR_7;

 if (! FUNC_1(VAR_1, (char *) VAR_5)) {
  FUNC_3(VAR_0,
      "authdes_seccreate: no public key found for %s",
      VAR_1);
  return (((void*)0));
 }

 VAR_6.n_bytes = (char *) VAR_5;
 VAR_6.n_len = (u_int)FUNC_2((char *)VAR_5) + 1;
 VAR_7 = FUNC_0(VAR_1, &VAR_6, VAR_2, VAR_3,
     VAR_4, ((void*)0));
 return (VAR_7);
}
