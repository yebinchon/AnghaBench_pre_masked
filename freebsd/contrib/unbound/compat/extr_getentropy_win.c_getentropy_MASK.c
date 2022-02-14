
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HCRYPTPROV ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,size_t,void*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(void *VAR_4, size_t VAR_5)
{
 HCRYPTPROV VAR_6;

 if (VAR_5 > 256) {
  VAR_3 = VAR_1;
  return -1;
 }

 if (FUNC_0(&VAR_6, ((void*)0), ((void*)0), VAR_2,
     VAR_0) == 0)
  goto fail;
 if (FUNC_1(VAR_6, VAR_5, VAR_4) == 0) {
  FUNC_2(VAR_6, 0);
  goto fail;
 }
 FUNC_2(VAR_6, 0);
 return (0);

fail:
 VAR_3 = VAR_1;
 return (-1);
}
