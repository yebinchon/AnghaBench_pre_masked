
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef void* u_int32_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (void*,void*,void**,void**,int) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_1, char *VAR_2, u_long VAR_3, int VAR_4)
{
 u_int32_t VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;
 union {
  u_int32_t *ui32;
  const char *c;
 } VAR_10;

 if (!VAR_0)
  FUNC_0();

 FUNC_4(VAR_3);

 VAR_10.c = VAR_1;
 VAR_7 = FUNC_3(*VAR_10.ui32++);
 VAR_8 = FUNC_3(*VAR_10.ui32);

 VAR_9 = FUNC_1(VAR_7, VAR_8, &VAR_5, &VAR_6, VAR_4);

 VAR_10.c = VAR_2;
 *VAR_10.ui32++ = FUNC_2(VAR_5);
 *VAR_10.ui32 = FUNC_2(VAR_6);
 return(VAR_9);
}
