
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ib_portid_t ;


 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (int *,int,int,int) ;

__attribute__((used)) static char *FUNC_2(ib_portid_t * VAR_0, int VAR_1,
         char *VAR_2, int VAR_3, int VAR_4)
{
 char *VAR_5;

 FUNC_0("# %s priority VL Arbitration Table:", VAR_2);
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_3,
         VAR_4 < 32 ? VAR_4 : 32);
 if (!VAR_5 && VAR_4 > 32)
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_3 + 1,
          VAR_4 - 32);
 return VAR_5;
}
