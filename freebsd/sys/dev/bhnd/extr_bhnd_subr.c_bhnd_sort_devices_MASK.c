
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int bhnd_device_order ;




 int VAR_0 ;
 int FUNC_0 (void const*,void const*) ;
 int FUNC_1 (void const*,void const*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,size_t,int,int (*) (void const*,void const*)) ;

int
FUNC_4(device_t *VAR_1, size_t VAR_2, bhnd_device_order VAR_3)
{
 int (*VAR_4)(const void *, const void *);

 switch (VAR_3) {
 case 129:
  VAR_4 = FUNC_0;
  break;
 case 128:
  VAR_4 = FUNC_1;
  break;
 default:
  FUNC_2("unknown sort order: %d\n", VAR_3);
  return (VAR_0);
 }

 FUNC_3(VAR_1, VAR_2, sizeof(*VAR_1), VAR_4);
 return (0);
}
