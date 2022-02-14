
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zones {int dummy; } ;
struct local_zone {int lock; } ;
struct config_file {int dummy; } ;
typedef int str ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct local_zone*,char*) ;
 struct local_zone* FUNC_2 (struct local_zones*,char const*,char*,int ) ;
 scalar_t__ FUNC_3 (struct local_zones*,char const*) ;
 scalar_t__ FUNC_4 (struct config_file*,char const*) ;
 int FUNC_5 (char*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_6(struct local_zones* VAR_1, struct config_file* VAR_2,
        const char* VAR_3)
{
 struct local_zone* VAR_4;
 char VAR_5[1024];
 if(FUNC_3(VAR_1, VAR_3) || FUNC_4(VAR_2, VAR_3))
  return 1;
 if(!(VAR_4=FUNC_2(VAR_1, VAR_3, "static", VAR_0)))
  return 0;
 FUNC_5(VAR_5, sizeof(VAR_5), "%s 10800 IN SOA localhost. "
  "nobody.invalid. 1 3600 1200 604800 10800", VAR_3);
 if(!FUNC_1(VAR_4, VAR_5)) {
  FUNC_0(&VAR_4->lock);
  return 0;
 }
 FUNC_5(VAR_5, sizeof(VAR_5), "%s 10800 IN NS localhost. ", VAR_3);
 if(!FUNC_1(VAR_4, VAR_5)) {
  FUNC_0(&VAR_4->lock);
  return 0;
 }
 FUNC_0(&VAR_4->lock);
 return 1;
}
