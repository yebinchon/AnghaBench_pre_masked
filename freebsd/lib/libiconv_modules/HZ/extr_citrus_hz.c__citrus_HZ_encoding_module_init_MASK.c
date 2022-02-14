
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _HZEncodingInfo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,void*,void const*,size_t) ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(_HZEncodingInfo * __restrict VAR_1,
    const void * __restrict VAR_2, size_t VAR_3)
{
 int VAR_4;

 FUNC_5(VAR_1, 0, sizeof(*VAR_1));
 FUNC_2(FUNC_0(VAR_1));
 FUNC_2(FUNC_1(VAR_1));
 VAR_4 = FUNC_4(
     VAR_0, (void *)VAR_1, VAR_2, VAR_3);
 if (VAR_4 != 0)
  FUNC_3(VAR_1);
 return (VAR_4);
}
