
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_bsdextended_rule {int mbr_mode; int mbr_object; int mbr_subject; } ;


 int FUNC_0 (int,char**,int *,size_t,char*) ;
 int FUNC_1 (int,char**,int *,size_t,char*) ;
 int FUNC_2 (int,char**,int *,size_t,char*) ;
 int FUNC_3 (struct mac_bsdextended_rule*,int) ;
 int FUNC_4 (char*,size_t,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int
FUNC_6(int VAR_0, char *VAR_1[], struct mac_bsdextended_rule *VAR_2,
    size_t VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;

 FUNC_3(VAR_2, sizeof(*VAR_2));

 if (VAR_0 < 1) {
  FUNC_4(VAR_4, VAR_3, "Rule must begin with subject");
  return (-1);
 }

 if (FUNC_5(VAR_1[0], "subject") != 0) {
  FUNC_4(VAR_4, VAR_3, "Rule must begin with subject");
  return (-1);
 }
 VAR_5 = 0;
 VAR_6 = 1;



 VAR_8 = -1;
 for (VAR_15 = 1; VAR_15 < VAR_0; VAR_15++)
  if (FUNC_5(VAR_1[VAR_15], "object") == 0)
   VAR_8 = VAR_15;

 if (VAR_8 == -1) {
  FUNC_4(VAR_4, VAR_3, "Rule must contain an object");
  return (-1);
 }


 VAR_11 = -1;
 for (VAR_15 = VAR_8; VAR_15 < VAR_0; VAR_15++)
  if (FUNC_5(VAR_1[VAR_15], "mode") == 0)
   VAR_11 = VAR_15;

 if (VAR_11 == -1) {
  FUNC_4(VAR_4, VAR_3, "Rule must contain mode");
  return (-1);
 }

 VAR_7 = VAR_8 - VAR_5 - 1;
 VAR_9 = VAR_8 + 1;
 VAR_10 = VAR_11 - VAR_9;
 VAR_12 = VAR_11 + 1;
 VAR_13 = VAR_0 - VAR_12;

 VAR_14 = FUNC_2(VAR_7,
     VAR_1 + VAR_6, &VAR_2->mbr_subject, VAR_3, VAR_4);
 if (VAR_14)
  return (-1);

 VAR_14 = FUNC_1(VAR_10,
     VAR_1 + VAR_9, &VAR_2->mbr_object, VAR_3, VAR_4);
 if (VAR_14)
  return (-1);

 VAR_14 = FUNC_0(VAR_13, VAR_1 + VAR_12,
     &VAR_2->mbr_mode, VAR_3, VAR_4);
 if (VAR_14)
  return (-1);

 return (0);
}
