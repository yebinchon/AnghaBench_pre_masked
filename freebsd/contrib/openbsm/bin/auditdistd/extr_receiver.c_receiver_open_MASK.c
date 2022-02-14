
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adh_trail_fd; int adh_trail_name; int adh_directory; int adh_trail_dirfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;




 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,char const*,int,...) ;
 int FUNC_4 (int,char*,int ,char const*,...) ;
 int FUNC_5 (int ,char*,int ,char const*,...) ;
 int FUNC_6 (char*,char const*,...) ;
 int FUNC_7 (int ,int ,int ,char const*) ;
 int FUNC_8 (int ,char const*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char const*,int ) ;
 int FUNC_11 (char const*,int *) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_14)
{
 int VAR_15;





 if (VAR_12->adh_trail_fd != -1) {
  FUNC_6("Sender requested opening file \"%s\" without first closing \"%s\".",
      VAR_14, VAR_12->adh_trail_name);
  return (VAR_5);
 }

 if (!FUNC_11(VAR_14, ((void*)0))) {
  FUNC_6("Sender wants to open file \"%s\", which has invalid name.",
      VAR_14);
  return (VAR_1);
 }

 switch (FUNC_10(VAR_14, VAR_12->adh_trail_name)) {
 case 128:
  if (!FUNC_9(VAR_12->adh_trail_name)) {
   FUNC_6("Terminated trail \"%s/%s\" was unterminated on the sender as \"%s/%s\"?",
       VAR_12->adh_directory, VAR_12->adh_trail_name,
       VAR_12->adh_directory, VAR_14);
   return (VAR_1);
  }
  if (FUNC_7(VAR_12->adh_trail_dirfd, VAR_12->adh_trail_name,
      VAR_12->adh_trail_dirfd, VAR_14) == -1) {
   FUNC_5(VAR_6,
       "Unable to rename file \"%s/%s\" to \"%s/%s\"",
       VAR_12->adh_directory, VAR_12->adh_trail_name,
       VAR_12->adh_directory, VAR_14);
   FUNC_1(VAR_13 > 0);
   return (VAR_4);
  }
  FUNC_4(1, "Renamed file \"%s/%s\" to \"%s/%s\".",
      VAR_12->adh_directory, VAR_12->adh_trail_name,
      VAR_12->adh_directory, VAR_14);

 case 131:

  VAR_15 = FUNC_3(VAR_12->adh_trail_dirfd, VAR_14,
      VAR_11 | VAR_7 | VAR_10);
  if (VAR_15 == -1) {
   FUNC_5(VAR_6,
       "Unable to open file \"%s/%s\" for append",
       VAR_12->adh_directory, VAR_14);
   FUNC_1(VAR_13 > 0);
   return (VAR_2);
  }
  FUNC_4(1, "Opened file \"%s/%s\".",
      VAR_12->adh_directory, VAR_14);
  break;
 case 130:

  VAR_15 = FUNC_3(VAR_12->adh_trail_dirfd, VAR_14,
      VAR_11 | VAR_8 | VAR_9 | VAR_10, 0600);
  if (VAR_15 == -1) {
   FUNC_5(VAR_6,
       "Unable to create file \"%s/%s\"",
       VAR_12->adh_directory, VAR_14);
   FUNC_1(VAR_13 > 0);
   return (VAR_0);
  }
  FUNC_4(1, "Created file \"%s/%s\".",
      VAR_12->adh_directory, VAR_14);
  break;
 case 129:

  FUNC_6("Sender wants to open an old file \"%s\".", VAR_14);
  return (VAR_3);
 default:
  FUNC_0("Unknown return value from trail_name_compare().");
 }
 FUNC_2(FUNC_8(VAR_12->adh_trail_name, VAR_14,
     sizeof(VAR_12->adh_trail_name)) < sizeof(VAR_12->adh_trail_name));
 VAR_12->adh_trail_fd = VAR_15;
 return (0);
}
