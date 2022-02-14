
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct chipc_softc {int dummy; } ;
struct bhnd_resource {int direct; int res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,struct bhnd_resource*) ;
 struct rman* FUNC_1 (struct chipc_softc*,int) ;
 int FUNC_2 (struct chipc_softc*,int ,int,int,int ,int) ;
 struct chipc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct rman*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, struct bhnd_resource *VAR_5)
{
 struct chipc_softc *VAR_6;
 struct rman *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_1);


 VAR_7 = FUNC_1(VAR_6, VAR_3);
 if (VAR_7 == ((void*)0) || !FUNC_5(VAR_5->res, VAR_7)) {
  return (FUNC_0(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5));
 }


 VAR_8 = FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5->res,
     0);
 if (VAR_8)
  return (VAR_8);



 if (FUNC_4(VAR_5->res) & VAR_0)
  VAR_5->direct = 1;

 return (0);
}
