
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_mam_attribute_header {char* attribute; int id; int length; } ;
struct sbuf {int dummy; } ;


 int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sbuf*,char*,unsigned char) ;
 int FUNC_2 (struct sbuf*,char) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,int,size_t,int) ;

int
FUNC_5(struct sbuf *VAR_2, struct scsi_mam_attribute_header *VAR_3,
        uint32_t VAR_4, uint32_t VAR_5,
        uint32_t VAR_6, char *VAR_7,
        int VAR_8)
{
 size_t VAR_9;
 uint32_t VAR_10, VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 1;

 VAR_9 = VAR_4 - sizeof(*VAR_3);
 VAR_10 = FUNC_3(VAR_3->length);
 VAR_11 = FUNC_0(VAR_9, VAR_10);

 if ((VAR_6 & VAR_0) ==
      VAR_1)
  VAR_13 = 0;

 if (VAR_11 > 0) {
  uint32_t VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
   if (VAR_3->attribute[VAR_14] == '\0')
    continue;
   else if (((unsigned char)VAR_3->attribute[VAR_14] < 0x80)
         || (VAR_13 == 0))
    FUNC_2(VAR_2, VAR_3->attribute[VAR_14]);
   else
    FUNC_1(VAR_2, "%%%02x",
        (unsigned char)VAR_3->attribute[VAR_14]);
  }
 } else if (VAR_9 < VAR_10) {




  if (VAR_7 != ((void*)0)) {
   FUNC_4(VAR_7, VAR_8, "Available "
     "length of attribute ID 0x%.4x %zu < field "
     "length %u", FUNC_3(VAR_3->id), VAR_9,
     VAR_10);
  }
  VAR_12 = 1;
 }

 return (VAR_12);
}
