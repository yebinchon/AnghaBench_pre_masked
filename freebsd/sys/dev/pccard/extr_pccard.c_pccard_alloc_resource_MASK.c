
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource_list_entry {struct resource* res; } ;
struct resource {int dummy; } ;
struct pccard_ivar {int resources; } ;
typedef int rman_res_t ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,struct resource*) ;
 struct resource* FUNC_1 (scalar_t__,scalar_t__,int,int*,int,int,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,int) ;
 struct resource* FUNC_3 (scalar_t__,int,int*,int,int,int,int) ;
 struct pccard_ivar* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,char*) ;
 int FUNC_7 (int *,int,int,int ,int ,int) ;
 struct resource_list_entry* FUNC_8 (int *,int,int) ;
 scalar_t__ FUNC_9 (struct resource*) ;
 int FUNC_10 (struct resource*) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (struct resource*,scalar_t__) ;

__attribute__((used)) static struct resource *
FUNC_13(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 struct pccard_ivar *VAR_9;
 struct resource_list_entry *VAR_10 = ((void*)0);
 int VAR_11 = (FUNC_5(VAR_2) != VAR_1);
 int VAR_12 = (FUNC_2(VAR_5, VAR_6) && VAR_7 == 1);
 struct resource *VAR_13 = ((void*)0);


 if (VAR_11) {
  return (FUNC_1(FUNC_5(VAR_1), VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));
 }

 VAR_9 = FUNC_4(VAR_2);
 VAR_10 = FUNC_8(&VAR_9->resources, VAR_3, *VAR_4);

 if (VAR_10 == ((void*)0) && VAR_12)
  return (((void*)0));
 if (VAR_10 == ((void*)0) || VAR_10->res == ((void*)0)) {

  VAR_13 = FUNC_3(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6,
    VAR_7, VAR_8);
  if (VAR_13 == ((void*)0))
      goto bad;
  FUNC_7(&VAR_9->resources, VAR_3, *VAR_4,
    FUNC_11(VAR_13), FUNC_10(VAR_13), VAR_7);
  VAR_10 = FUNC_8(&VAR_9->resources, VAR_3, *VAR_4);
  if (!VAR_10)
      goto bad;
  VAR_10->res = VAR_13;
 }




 if (FUNC_9(VAR_10->res) != VAR_1)
  return (((void*)0));
 FUNC_12(VAR_10->res, VAR_2);
 if (VAR_8 & VAR_0)
  FUNC_0(VAR_1, VAR_2, VAR_3, *VAR_4, VAR_10->res);
 return (VAR_10->res);
bad:;
 FUNC_6(VAR_1, "WARNING: Resource not reserved by pccard\n");
 return (((void*)0));
}
