
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct auth_zones {int dummy; } ;
struct auth_zone {int lock; } ;
typedef int nm ;


 int VAR_0 ;
 int VAR_1 ;
 struct auth_zone* FUNC_0 (struct auth_zones*,int *,size_t,int ) ;
 struct auth_zone* FUNC_1 (struct auth_zones*,int *,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,int *,size_t*) ;

__attribute__((used)) static struct auth_zone*
FUNC_5(struct auth_zones* VAR_2, char* VAR_3)
{
 uint8_t VAR_4[VAR_0+1];
 size_t VAR_5 = sizeof(VAR_4);
 struct auth_zone* VAR_6;

 if(FUNC_4(VAR_3, VAR_4, &VAR_5) != 0) {
  FUNC_3("cannot parse auth zone name: %s", VAR_3);
  return 0;
 }
 VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_5, VAR_1);
 if(!VAR_6) {

  VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_5, VAR_1);
 } else {
  FUNC_2(&VAR_6->lock);
 }
 return VAR_6;
}
