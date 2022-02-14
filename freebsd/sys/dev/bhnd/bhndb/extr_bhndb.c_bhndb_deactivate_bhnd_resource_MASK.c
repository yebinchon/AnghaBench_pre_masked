
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_resource {int direct; int res; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2,
    int VAR_3, int VAR_4, struct bhnd_resource *VAR_5)
{
 int VAR_6;


 if (!VAR_5->direct)
  return (0);

 FUNC_1(FUNC_2(VAR_5->res) & VAR_0,
     ("RF_ACTIVE not set on direct resource"));


 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5->res);
 if (!VAR_6)
  VAR_5->direct = 0;

 return (VAR_6);
}
