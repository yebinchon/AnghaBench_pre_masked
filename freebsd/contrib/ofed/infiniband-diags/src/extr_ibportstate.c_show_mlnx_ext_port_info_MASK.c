
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ib_portid_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int *,int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int,char*) ;

__attribute__((used)) static void FUNC_3(ib_portid_t * VAR_1, uint8_t * VAR_2, int VAR_3)
{
 char VAR_4[256];

 FUNC_0(VAR_4, sizeof VAR_4, VAR_2, VAR_0);

 FUNC_2("# MLNX ext Port info: %s port %d\n%s", FUNC_1(VAR_1),
        VAR_3, VAR_4);
}
