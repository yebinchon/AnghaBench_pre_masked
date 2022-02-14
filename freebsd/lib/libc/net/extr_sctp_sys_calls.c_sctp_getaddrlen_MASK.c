
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_assoc_value {scalar_t__ assoc_value; } ;
typedef int socklen_t ;
typedef scalar_t__ sa_family_t ;
typedef int av ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ,struct sctp_assoc_value*,int*) ;
 int FUNC_2 (int ,int ,int ) ;

int
FUNC_3(sa_family_t VAR_5)
{
 int VAR_6, VAR_7;
 socklen_t VAR_8;
 struct sctp_assoc_value VAR_9;

 VAR_9.assoc_value = VAR_5;
 VAR_8 = sizeof(VAR_9);





 VAR_7 = -1;

 if (VAR_7 == -1) {
  return (-1);
 }
 VAR_6 = FUNC_1(VAR_7, VAR_2, VAR_3, &VAR_9, &VAR_8);
 FUNC_0(VAR_7);
 if (VAR_6 == 0) {
  return ((int)VAR_9.assoc_value);
 } else {
  return (-1);
 }
}
