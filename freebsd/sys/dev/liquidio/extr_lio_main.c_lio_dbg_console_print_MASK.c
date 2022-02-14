
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct octeon_device {int dummy; } ;


 int FUNC_0 (struct octeon_device*,char*,int ,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct octeon_device *VAR_0, uint32_t VAR_1,
        char *VAR_2, char *VAR_3)
{

 if (VAR_2 != ((void*)0) && VAR_3 != ((void*)0))
  FUNC_0(VAR_0, "%u: %s%s\n", VAR_1, VAR_2, VAR_3);
 else if (VAR_2 != ((void*)0))
  FUNC_0(VAR_0, "%u: %s\n", VAR_1, VAR_2);
 else if (VAR_3 != ((void*)0))
  FUNC_0(VAR_0, "%u: %s\n", VAR_1, VAR_3);

 return (0);
}
