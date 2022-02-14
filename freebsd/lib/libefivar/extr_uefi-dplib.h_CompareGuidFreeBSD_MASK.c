
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int uint32_t ;
typedef int GUID ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (int const*,int const*,int *) ;

__attribute__((used)) static inline BOOLEAN
FUNC_1 (const GUID *VAR_0, const GUID *VAR_1)
{
 uint32_t VAR_2;

 return (FUNC_0((const uuid_t *)VAR_0, (const uuid_t *)VAR_1,
     &VAR_2) == 0);
}
