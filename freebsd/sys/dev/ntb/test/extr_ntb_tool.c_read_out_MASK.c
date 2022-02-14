
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ubuf ;
struct sysctl_req {int dummy; } ;


 int FUNC_0 (struct sysctl_req*,char*,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (char*,int,char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct sysctl_req *VAR_0, uint64_t VAR_1)
{
 char VAR_2[16];

 FUNC_1((void *)VAR_2, 0, sizeof(VAR_2));
 FUNC_2(VAR_2, sizeof(VAR_2), "0x%jx", VAR_1);

 return FUNC_0(VAR_0, VAR_2, sizeof(VAR_2));
}
