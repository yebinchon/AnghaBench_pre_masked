
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_chipid {int chip_type; int chip_id; } ;
typedef int device_t ;
typedef int chip_name ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (char**,int ,char*,char*,char const*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ) ;

void
FUNC_5(device_t VAR_2, const struct bhnd_chipid *VAR_3)
{
 const char *VAR_4;
 char *VAR_5;
 char VAR_6[VAR_0];


 switch (VAR_3->chip_type) {
 case 129:
  VAR_4 = "SIBA bus";
  break;
 case 131:
 case 130:
  VAR_4 = "BCMA bus";
  break;
 case 128:
  VAR_4 = "UBUS bus";
  break;
 default:
  VAR_4 = "Unknown Type";
  break;
 }


 FUNC_1(VAR_6, sizeof(VAR_6),
      VAR_3->chip_id);


 FUNC_0(&VAR_5, VAR_1, "%s %s", VAR_6, VAR_4);
 if (VAR_5 != ((void*)0)) {
  FUNC_3(VAR_2, VAR_5);
  FUNC_4(VAR_5, VAR_1);
 } else {
  FUNC_2(VAR_2, VAR_4);
 }

}
