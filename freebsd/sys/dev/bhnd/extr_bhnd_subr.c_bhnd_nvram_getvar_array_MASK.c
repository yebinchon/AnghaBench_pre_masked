
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,void*,size_t*,int ) ;

int
FUNC_1(device_t VAR_1, const char *VAR_2, void *VAR_3, size_t VAR_4,
    bhnd_nvram_type VAR_5)
{
 size_t VAR_6;
 int VAR_7;


 VAR_6 = VAR_4;
 if ((VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_6, VAR_5)))
  return (VAR_7);


 if (VAR_6 < VAR_4)
  return (VAR_0);

 return (0);
}
