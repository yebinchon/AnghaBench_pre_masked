
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_resource {int direct; int res; } ;
typedef int * device_t ;


 int FUNC_0 (int *,int *,int,int,struct bhnd_resource*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int,int ) ;
 int * FUNC_2 (int *) ;

int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, struct bhnd_resource *VAR_5)
{
 int VAR_6;
 bool VAR_7;

 VAR_7 = (FUNC_2(VAR_2) != VAR_1);


 if (FUNC_2(VAR_1) != ((void*)0)) {
  VAR_6 = FUNC_0(FUNC_2(VAR_1),
      VAR_2, VAR_3, VAR_4, VAR_5);
 } else {
  VAR_6 = VAR_0;
 }




 if (VAR_6 && !VAR_7) {
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5->res);
  if (!VAR_6)
   VAR_5->direct = 1;
 }

 return (VAR_6);
}
