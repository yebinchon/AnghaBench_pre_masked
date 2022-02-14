
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*,void*,size_t) ;
 int FUNC_1 (void const*,void*,size_t) ;
 int FUNC_2 (char*,int) ;

int
FUNC_3(const void * __restrict VAR_0, void * __restrict VAR_1, size_t VAR_2,
    int VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3) {
 case 128:
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 case 129:
  FUNC_0(VAR_0, VAR_1, VAR_2);
  break;
 default:
  FUNC_2("copyinfrom: bad seg %d\n", VAR_3);
 }
 return (VAR_4);
}
