
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct api_signature {scalar_t__ checksum; } ;


 scalar_t__ FUNC_0 (void*,int) ;

__attribute__((used)) static int
FUNC_1(struct api_signature *VAR_0)
{
 uint32_t VAR_1;
 struct api_signature VAR_2;

 if (VAR_0 == ((void*)0))
  return (0);





 VAR_2 = *VAR_0;
 VAR_2.checksum = 0;

 VAR_1 = FUNC_0((void *)&VAR_2, sizeof(struct api_signature));

 if (VAR_1 != VAR_0->checksum)
  return (0);

 return (1);
}
