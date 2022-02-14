
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int *,int *) ;
 void* FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,char*,int *,int ) ;

__attribute__((used)) static void * FUNC_4(const u8 *VAR_2, size_t VAR_3, u8 *VAR_4)
{
 void *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return ((void*)0);


 FUNC_2(VAR_4, 0, VAR_0);
 FUNC_0(VAR_5, VAR_4, VAR_4);
 FUNC_3(VAR_1, "Hash subkey H for GHASH",
   VAR_4, VAR_0);
 return VAR_5;
}
