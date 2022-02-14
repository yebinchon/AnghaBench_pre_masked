
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void const*,void*,size_t) ;
 int FUNC_1 (char*,size_t) ;
 size_t FUNC_2 (size_t,int ) ;

__attribute__((used)) static size_t
FUNC_3(const void *VAR_1, void *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_1, VAR_2, VAR_3);
  FUNC_1((char *)VAR_2 + VAR_3, VAR_4 - VAR_3);
 }
 return (VAR_4);
}
