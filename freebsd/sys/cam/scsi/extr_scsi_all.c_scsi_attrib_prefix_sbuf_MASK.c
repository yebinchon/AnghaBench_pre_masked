
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_mam_attribute_header {int byte2; int length; int id; } ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sbuf*,char*,...) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct sbuf *VAR_7, uint32_t VAR_8,
   struct scsi_mam_attribute_header *VAR_9,
   uint32_t VAR_10, const char *VAR_11)
{
 int VAR_12 = 0;
 uint32_t VAR_13;
 uint32_t VAR_14;





 if (VAR_10 < sizeof(*VAR_9))
  return;

 VAR_14 = FUNC_1(VAR_9->id);
 VAR_13 = FUNC_1(VAR_9->length);

 if ((VAR_8 & VAR_1) ==
     VAR_2)
  return;

 if ((VAR_8 & VAR_0)
  && (VAR_11 != ((void*)0))) {
  FUNC_0(VAR_7, "%s", VAR_11);
  VAR_12 = 1;
 }

 if (VAR_8 & VAR_3) {
  FUNC_0(VAR_7, "%s(0x%.4x)", (VAR_12) ? " " : "", VAR_14);
  VAR_12 = 0;
 }

 if (VAR_8 & VAR_5) {
  FUNC_0(VAR_7, "%s[%d]", (VAR_12) ? " " : "", VAR_13);
  VAR_12 = 0;
 }
 if (VAR_8 & VAR_4) {
  FUNC_0(VAR_7, "%s(%s)", (VAR_12) ? " " : "",
       (VAR_9->byte2 & VAR_6) ? "RO" : "RW");
 }
 FUNC_0(VAR_7, ": ");
}
