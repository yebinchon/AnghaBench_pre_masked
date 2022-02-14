
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ device_t ;
typedef int bhnd_size_t ;
typedef scalar_t__ bhnd_addr_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,char*,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,size_t,char*,unsigned long long) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2, char *VAR_3,
    size_t VAR_4)
{
 bhnd_addr_t VAR_5;
 bhnd_size_t VAR_6;

 if (FUNC_2(VAR_2) != VAR_1) {
  return (FUNC_0(FUNC_2(VAR_1), VAR_2,
      VAR_3, VAR_4));
 }


 if (FUNC_1(VAR_2, VAR_0, 0, 0, &VAR_5, &VAR_6)) {

  if (VAR_4 > 0)
   *VAR_3 = '\0';
  return (0);
 }

 FUNC_3(VAR_3, VAR_4, "port0.0=0x%llx", (unsigned long long) VAR_5);
 return (0);
}
