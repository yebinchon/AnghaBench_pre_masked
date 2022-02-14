
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct auth_zones {int dummy; } ;
struct auth_zone {int name; } ;


 struct auth_zone* FUNC_0 (struct auth_zones*,int *,size_t,int ) ;
 scalar_t__ FUNC_1 (struct auth_zones*,int *,size_t,int ,struct auth_zone**) ;
 int FUNC_2 (int *,size_t*) ;
 int * FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int **,size_t*) ;

struct auth_zone*
FUNC_6(struct auth_zones* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3)
{
 uint8_t* VAR_4 = VAR_1;
 size_t VAR_5 = VAR_2;
 struct auth_zone* VAR_6;
 if(FUNC_1(VAR_0, VAR_4, VAR_5, VAR_3, &VAR_6)) {

  return VAR_6;
 } else {

  if(!VAR_6) return ((void*)0);


  VAR_4 = FUNC_3(VAR_6->name, VAR_1);
  FUNC_2(VAR_4, &VAR_5);
  VAR_6 = ((void*)0);
 }


 while(!VAR_6) {
  VAR_6 = FUNC_0(VAR_0, VAR_4, VAR_5, VAR_3);
  if(VAR_6) return VAR_6;
  if(FUNC_4(VAR_4)) break;
  FUNC_5(&VAR_4, &VAR_5);
 }
 return ((void*)0);
}
