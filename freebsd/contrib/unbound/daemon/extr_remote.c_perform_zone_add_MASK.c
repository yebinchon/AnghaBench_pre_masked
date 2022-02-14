
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct local_zones {int lock; } ;
struct local_zone {int type; int lock; } ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;
typedef int RES ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (struct local_zones*,int *,size_t,int,int ,int) ;
 struct local_zone* FUNC_4 (struct local_zones*,int *,size_t,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int **,size_t*,int*) ;
 int FUNC_8 (int *,char*,...) ;

__attribute__((used)) static int
FUNC_9(RES* VAR_1, struct local_zones* VAR_2, char* VAR_3)
{
 uint8_t* VAR_4;
 int VAR_5;
 size_t VAR_6;
 char* VAR_7;
 enum localzone_type VAR_8;
 struct local_zone* VAR_9;
 if(!FUNC_0(VAR_1, VAR_3, &VAR_7))
  return 0;
 if(!FUNC_7(VAR_1, VAR_3, &VAR_4, &VAR_6, &VAR_5))
  return 0;
 if(!FUNC_2(VAR_7, &VAR_8)) {
  FUNC_8(VAR_1, "error not a zone type. %s\n", VAR_7);
  FUNC_1(VAR_4);
  return 0;
 }
 FUNC_6(&VAR_2->lock);
 if((VAR_9=FUNC_4(VAR_2, VAR_4, VAR_6,
  VAR_5, VAR_0))) {

  FUNC_6(&VAR_9->lock);
  VAR_9->type = VAR_8;
  FUNC_5(&VAR_9->lock);
  FUNC_1(VAR_4);
  FUNC_5(&VAR_2->lock);
  return 1;
 }
 if(!FUNC_3(VAR_2, VAR_4, VAR_6,
  VAR_5, VAR_0, VAR_8)) {
  FUNC_5(&VAR_2->lock);
  FUNC_8(VAR_1, "error out of memory\n");
  return 0;
 }
 FUNC_5(&VAR_2->lock);
 return 1;
}
