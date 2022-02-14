
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devreq {int dr_name; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int **) ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ,char,int) ;

__attribute__((used)) static int
FUNC_3(struct devreq *VAR_3, device_t *VAR_4)
{
 device_t VAR_5;




 if (FUNC_2(VAR_3->dr_name, '\0', sizeof(VAR_3->dr_name)) == ((void*)0))
  return (VAR_0);





 VAR_5 = FUNC_1(VAR_3->dr_name);
 if (VAR_5 != ((void*)0)) {
  *VAR_4 = VAR_5;
  return (0);
 }


 VAR_5 = ((void*)0);
 FUNC_0(VAR_2, VAR_3->dr_name, &VAR_5);
 if (VAR_5 == ((void*)0))
  return (VAR_1);
 *VAR_4 = VAR_5;
 return (0);
}
