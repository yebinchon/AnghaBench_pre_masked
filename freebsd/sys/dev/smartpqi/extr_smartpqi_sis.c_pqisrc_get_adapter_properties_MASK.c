
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(pqisrc_softstate_t *VAR_2,
    uint32_t *VAR_3, uint32_t *VAR_4)
{
 int VAR_5 = VAR_0;
 uint32_t VAR_6[6] = {0};

 FUNC_0("IN\n");

 VAR_6[0] = VAR_1;
 VAR_5 = FUNC_2(VAR_2, VAR_6);
 if (!VAR_5) {
  FUNC_1("GET_PROPERTIES prop = %x, ext_prop = %x\n",
     VAR_6[1], VAR_6[4]);
  *VAR_3 = VAR_6[1];
  *VAR_4 = VAR_6[4];
 }

 FUNC_0("OUT\n");
 return VAR_5;
}
