
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource {int dummy; } ;
struct bhnd_resource {int direct; struct resource* res; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct bhnd_resource*) ;
 struct resource* FUNC_1 (int ,int ,int,int*,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bhnd_resource*,int ) ;
 struct bhnd_resource* FUNC_4 (int,int ,int ) ;

struct bhnd_resource *
FUNC_5(device_t VAR_3, device_t VAR_4, int VAR_5,
 int *VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, rman_res_t VAR_9,
 u_int VAR_10)
{
 struct bhnd_resource *VAR_11;
 struct resource *VAR_12;
 int VAR_13;

 VAR_11 = ((void*)0);
 VAR_12 = ((void*)0);


 VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     (VAR_10 & ~VAR_2));
 if (VAR_12 == ((void*)0))
  return (((void*)0));


 VAR_11 = FUNC_4(sizeof(struct bhnd_resource), VAR_0, VAR_1);
 if (VAR_11 == ((void*)0))
  goto failed;

 VAR_11->direct = 0;
 VAR_11->res = VAR_12;


 if (VAR_10 & VAR_2) {
  VAR_13 = FUNC_0(VAR_3, VAR_4, VAR_5, *VAR_6, VAR_11);
  if (VAR_13)
   goto failed;
 }

 return (VAR_11);

failed:
 if (VAR_12 != ((void*)0))
  FUNC_2(VAR_3, VAR_4, VAR_5, *VAR_6, VAR_12);

 FUNC_3(VAR_11, VAR_0);
 return (((void*)0));
}
