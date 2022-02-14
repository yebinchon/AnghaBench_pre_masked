
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct scsi_mam_attribute_header {int * attribute; int length; } ;
struct sbuf {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct sbuf*,int *,scalar_t__,int *,int ) ;
 int FUNC_2 (struct sbuf*,char*) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4(struct sbuf *VAR_0, struct scsi_mam_attribute_header *VAR_1,
    uint32_t VAR_2, uint32_t VAR_3,
    uint32_t VAR_4, char *VAR_5,
    int VAR_6)
{
 uint32_t VAR_7;
 ssize_t VAR_8;
 uint32_t VAR_9;
 uint8_t *VAR_10;
 int VAR_11 = 0;

 VAR_7 = FUNC_3(VAR_1->length);
 VAR_8 = VAR_2 - sizeof(*VAR_1);
 VAR_9 = FUNC_0(VAR_8, VAR_7);
 VAR_10 = VAR_1->attribute;

 if (VAR_9 > 0) {
  FUNC_2(VAR_0, "\n");
  FUNC_1(VAR_0, VAR_10, VAR_9, ((void*)0), 0);
 }

 return (VAR_11);
}
