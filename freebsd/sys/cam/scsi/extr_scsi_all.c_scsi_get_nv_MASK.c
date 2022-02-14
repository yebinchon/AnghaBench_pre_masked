
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_nv {char* name; } ;
typedef int scsi_nv_status ;
typedef int scsi_nv_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,size_t) ;
 scalar_t__ FUNC_2 (char*,char*,size_t) ;

scsi_nv_status
FUNC_3(struct scsi_nv *VAR_4, int VAR_5,
     char *VAR_6, int *VAR_7, scsi_nv_flags VAR_8)
{
 int VAR_9, VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  size_t VAR_11, VAR_12;

  VAR_11 = FUNC_0(VAR_4[VAR_9].name);
  VAR_12 = FUNC_0(VAR_6);

  if ((((VAR_8 & VAR_1) != 0)
    && (FUNC_1(VAR_4[VAR_9].name, VAR_6, VAR_12) == 0))
  || (((VAR_8 & VAR_1) == 0)
   && (FUNC_2(VAR_4[VAR_9].name, VAR_6, VAR_12) == 0))) {
   *VAR_7 = VAR_9;







   if (VAR_11 == VAR_12)
    return (VAR_2);





   VAR_10++;
  }
 }

 if (VAR_10 > 1)
  return (VAR_0);
 else if (VAR_10 == 1)
  return (VAR_2);
 else
  return (VAR_3);
}
