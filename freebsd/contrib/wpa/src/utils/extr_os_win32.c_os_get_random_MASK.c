
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HCRYPTPROV ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,size_t,unsigned char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

int FUNC_3(unsigned char *VAR_2, size_t VAR_3)
{
 HCRYPTPROV VAR_4;
 BOOL VAR_5;

 if (!FUNC_0(&VAR_4, ((void*)0), ((void*)0), VAR_1,
     VAR_0))
  return -1;

 VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_2);
 FUNC_2(VAR_4, 0);

 return VAR_5 ? 0 : -1;
}
