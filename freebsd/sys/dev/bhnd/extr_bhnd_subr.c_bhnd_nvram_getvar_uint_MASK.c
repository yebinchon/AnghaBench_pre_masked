
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char const*,void*,size_t*,int ) ;
 int FUNC_1 (int ,char*,int) ;

int
FUNC_2(device_t VAR_4, const char *VAR_5, void *VAR_6, int VAR_7)
{
 bhnd_nvram_type VAR_8;
 size_t VAR_9;

 switch (VAR_7) {
 case 1:
  VAR_8 = VAR_2;
  break;
 case 2:
  VAR_8 = VAR_0;
  break;
 case 4:
  VAR_8 = VAR_1;
  break;
 default:
  FUNC_1(VAR_4, "unsupported NVRAM integer width: %d\n",
      VAR_7);
  return (VAR_3);
 }

 VAR_9 = VAR_7;
 return (FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_9, VAR_8));
}
