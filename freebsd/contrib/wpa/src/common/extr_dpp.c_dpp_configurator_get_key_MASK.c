
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_configurator {int csign; } ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *,unsigned char**) ;
 int FUNC_4 (char*,size_t,unsigned char*,int) ;

int FUNC_5(const struct dpp_configurator *VAR_0, char *VAR_1,
        size_t VAR_2)
{
 EC_KEY *VAR_3;
 int VAR_4, VAR_5 = -1;
 unsigned char *VAR_6 = ((void*)0);

 if (!VAR_0->csign)
  return -1;

 VAR_3 = FUNC_1(VAR_0->csign);
 if (!VAR_3)
  return -1;

 VAR_4 = FUNC_3(VAR_3, &VAR_6);
 if (VAR_4 > 0)
  VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_6, VAR_4);

 FUNC_0(VAR_3);
 FUNC_2(VAR_6);
 return VAR_5;
}
