
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysid ;
struct lacp_peerinfo {int lip_portid; int lip_key; int lip_systemid; } ;
typedef int portid ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t,char*,char*,int,char*) ;

const char *
FUNC_4(const struct lacp_peerinfo *VAR_2, char *VAR_3, size_t VAR_4)
{
 char VAR_5[VAR_1+1];
 char VAR_6[VAR_0+1];

 FUNC_3(VAR_3, VAR_4, "(%s,%04X,%s)",
     FUNC_1(&VAR_2->lip_systemid, VAR_5, sizeof(VAR_5)),
     FUNC_2(VAR_2->lip_key),
     FUNC_0(&VAR_2->lip_portid, VAR_6, sizeof(VAR_6)));

 return (VAR_3);
}
