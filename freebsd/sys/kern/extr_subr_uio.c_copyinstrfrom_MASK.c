
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*,void*,size_t,size_t*) ;
 int FUNC_1 (void const*,void*,size_t,size_t*) ;
 int FUNC_2 (char*,int) ;

int
FUNC_3(const void * __restrict VAR_0, void * __restrict VAR_1, size_t VAR_2,
    size_t * __restrict VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_4) {
 case 128:
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 default:
  FUNC_2("copyinstrfrom: bad seg %d\n", VAR_4);
 }
 return (VAR_5);
}
