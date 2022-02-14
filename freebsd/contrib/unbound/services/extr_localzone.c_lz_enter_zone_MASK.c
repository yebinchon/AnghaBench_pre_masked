
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct local_zones {int dummy; } ;
struct local_zone {int dummy; } ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (char*,char const*,char const*) ;
 struct local_zone* FUNC_3 (struct local_zones*,int *,size_t,int,int,int ) ;
 int FUNC_4 (char const*,int **,size_t*,int*) ;

__attribute__((used)) static struct local_zone*
FUNC_5(struct local_zones* VAR_0, const char* VAR_1, const char* VAR_2,
 uint16_t VAR_3)
{
 struct local_zone* VAR_4;
 enum localzone_type VAR_5;
 uint8_t* VAR_6;
 size_t VAR_7;
 int VAR_8;
 if(!FUNC_4(VAR_1, &VAR_6, &VAR_7, &VAR_8)) {
  FUNC_2("bad zone name %s %s", VAR_1, VAR_2);
  return ((void*)0);
 }
 if(!FUNC_1(VAR_2, &VAR_5)) {
  FUNC_2("bad lz_enter_zone type %s %s", VAR_1, VAR_2);
  FUNC_0(VAR_6);
  return ((void*)0);
 }
 if(!(VAR_4=FUNC_3(VAR_0, VAR_6, VAR_7, VAR_8, VAR_5, VAR_3))) {
  FUNC_2("could not enter zone %s %s", VAR_1, VAR_2);
  return ((void*)0);
 }
 return VAR_4;
}
