
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct local_zones {int lock; } ;
struct local_zone {int dummy; } ;
typedef int RES ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct local_zones*,struct local_zone*) ;
 struct local_zone* FUNC_2 (struct local_zones*,int *,size_t,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int **,size_t*,int*) ;

__attribute__((used)) static int
FUNC_6(RES* VAR_1, struct local_zones* VAR_2, char* VAR_3)
{
 uint8_t* VAR_4;
 int VAR_5;
 size_t VAR_6;
 struct local_zone* VAR_7;
 if(!FUNC_5(VAR_1, VAR_3, &VAR_4, &VAR_6, &VAR_5))
  return 0;
 FUNC_4(&VAR_2->lock);
 if((VAR_7=FUNC_2(VAR_2, VAR_4, VAR_6,
  VAR_5, VAR_0))) {

  FUNC_1(VAR_2, VAR_7);
 }
 FUNC_3(&VAR_2->lock);
 FUNC_0(VAR_4);
 return 1;
}
