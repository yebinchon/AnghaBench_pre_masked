
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int restrict_u ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 size_t VAR_1 ;
 int * FUNC_3 (size_t const,size_t const) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static restrict_u *
FUNC_4(void)
{
 const size_t VAR_4 = VAR_1;
 const size_t VAR_5 = VAR_0;
 restrict_u * VAR_6;
 restrict_u * VAR_7;
 size_t VAR_8;

 FUNC_2(VAR_7, VAR_3, VAR_2);
 if (VAR_7 != ((void*)0))
  return VAR_7;

 VAR_6 = FUNC_3(VAR_5, VAR_4);

 VAR_7 = (void *)((char *)VAR_6 + (VAR_5 - 1) * VAR_4);
 for (VAR_8 = VAR_5 - 1; VAR_8 > 0; VAR_8--) {
  FUNC_1(VAR_3, VAR_7, VAR_2);
  VAR_7 = (void *)((char *)VAR_7 - VAR_4);
 }
 FUNC_0(VAR_6 == VAR_7);

 return VAR_7;
}
