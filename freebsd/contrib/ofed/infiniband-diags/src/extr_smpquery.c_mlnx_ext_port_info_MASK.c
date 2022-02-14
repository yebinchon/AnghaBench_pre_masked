
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ib_portid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,int) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int,char*) ;
 int FUNC_3 (char*,int *,int ,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static char *FUNC_5(ib_portid_t * VAR_3, char **VAR_4, int VAR_5)
{
 char VAR_6[2300];
 char VAR_7[VAR_1];
 int VAR_8 = 0;

 if (VAR_5 > 0)
  VAR_8 = FUNC_4(VAR_4[0], 0, 0);

 if (!FUNC_3(VAR_7, VAR_3, VAR_0, VAR_8, 0, VAR_2))
  return "Mellanox ext port info query failed";

 FUNC_0(VAR_6, sizeof VAR_6, VAR_7, sizeof VAR_7);

 FUNC_2("# MLNX ext Port info: %s port %d\n%s", FUNC_1(VAR_3), VAR_8, VAR_6);
 return 0;
}
