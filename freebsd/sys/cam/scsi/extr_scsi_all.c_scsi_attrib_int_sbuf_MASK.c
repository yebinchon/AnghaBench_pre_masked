
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct scsi_mam_attribute_header {int* length; int* id; int* attribute; } ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sbuf*,char*,int,...) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct sbuf*,struct scsi_mam_attribute_header*,int,int,int,char*,int) ;
 int FUNC_6 (char*,int,char*,int,size_t,int) ;

int
FUNC_7(struct sbuf *VAR_4, struct scsi_mam_attribute_header *VAR_5,
       uint32_t VAR_6, uint32_t VAR_7,
       uint32_t VAR_8, char *VAR_9,
       int VAR_10)
{
 uint64_t VAR_11;
 size_t VAR_12;
 uint32_t VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_1(VAR_5->length);

 VAR_12 = VAR_6 - sizeof(*VAR_5);
 if (VAR_12 < VAR_13) {
  if (VAR_9 != ((void*)0)) {
   FUNC_6(VAR_9, VAR_10, "Available "
     "length of attribute ID 0x%.4x %zu < field "
     "length %u", FUNC_1(VAR_5->id), VAR_12,
     VAR_13);
  }
  VAR_14 = 1;
  goto bailout;
 }

 switch (VAR_13) {
 case 0:





  goto bailout;
  break;
 case 1:
  VAR_11 = VAR_5->attribute[0];
  break;
 case 2:
  VAR_11 = FUNC_1(VAR_5->attribute);
  break;
 case 3:
  VAR_11 = FUNC_2(VAR_5->attribute);
  break;
 case 4:
  VAR_11 = FUNC_3(VAR_5->attribute);
  break;
 case 8:
  VAR_11 = FUNC_4(VAR_5->attribute);
  break;
 default:




  VAR_14 = FUNC_5(VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8,
        VAR_9, VAR_10);
  goto bailout;
  break;
 }

 if (VAR_7 & VAR_1) {

  long double VAR_15;

  VAR_15 = (long double)VAR_11;

  if (VAR_7 & VAR_0)
   VAR_15 /= 10;

  FUNC_0(VAR_4, "%.*Lf", (VAR_7 & VAR_2) ?
       1 : 0, VAR_15);




 } else if (VAR_7 & VAR_3) {
  FUNC_0(VAR_4, "0x%jx", (uintmax_t)VAR_11);
 } else
  FUNC_0(VAR_4, "%ju", (uintmax_t)VAR_11);

bailout:
 return (VAR_14);
}
