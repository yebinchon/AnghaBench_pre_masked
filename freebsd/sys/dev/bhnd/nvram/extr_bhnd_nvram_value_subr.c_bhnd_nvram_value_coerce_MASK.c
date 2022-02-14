
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*,size_t*,int ) ;
 int FUNC_1 (int *,int *,void const*,size_t,int ,int) ;
 int FUNC_2 (int *) ;

int
FUNC_3(const void *VAR_2, size_t VAR_3, bhnd_nvram_type VAR_4,
    void *VAR_5, size_t *VAR_6, bhnd_nvram_type VAR_7)
{
 bhnd_nvram_val VAR_8;
 int VAR_9;


 VAR_9 = FUNC_1(&VAR_8, ((void*)0), VAR_2, VAR_3,
     VAR_4, VAR_0|VAR_1);
 if (VAR_9)
  return (VAR_9);


 VAR_9 = FUNC_0(&VAR_8, VAR_5, VAR_6, VAR_7);


 FUNC_2(&VAR_8);
 return (VAR_9);
}
