
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_resource {int direct; int res; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,int,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1,
    int VAR_2, int VAR_3, struct bhnd_resource *VAR_4)
{
 int VAR_5;


 FUNC_0(VAR_4->direct, ("indirect resource delegated to bhnd_nexus\n"));

 if ((VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4->res)))
  return (VAR_5);

 VAR_4->direct = 0;
 return (0);
}
