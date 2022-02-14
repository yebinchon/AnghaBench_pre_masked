
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmesh {int dummy; } ;
struct gclass {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 struct gclass* FUNC_1 (struct gmesh*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct gmesh*) ;
 int FUNC_3 (struct gmesh*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 struct gmesh VAR_2;
 struct gclass *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_2);
 if (VAR_4 != 0)
  FUNC_0(VAR_0, VAR_4, "Cannot get GEOM tree");
 VAR_3 = FUNC_1(&VAR_2, VAR_1);
 FUNC_2(&VAR_2);
 if (VAR_3 != ((void*)0))
  return (1);
 return (0);
}
