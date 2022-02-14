
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct lha {scalar_t__ header_size; scalar_t__ header_crc; int setflag; void* crc; void* mtime; void* origsize; void* compsize; } ;
struct archive_read {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned char* FUNC_0 (struct archive_read*,int,int *) ;
 int FUNC_1 (struct archive_read*,int) ;
 void* FUNC_2 (unsigned char const*) ;
 void* FUNC_3 (unsigned char const*) ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,unsigned char const*,int) ;
 int FUNC_6 (struct archive_read*,struct lha*,scalar_t__*,int,scalar_t__,size_t*) ;
 int FUNC_7 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_8(struct archive_read *VAR_10, struct lha *VAR_11)
{
 const unsigned char *VAR_12;
 size_t VAR_13;
 int VAR_14, VAR_15;
 uint16_t VAR_16;

 if ((VAR_12 = FUNC_0(VAR_10, VAR_6, ((void*)0))) == ((void*)0))
  return (FUNC_7(VAR_10));

 VAR_11->header_size =FUNC_2(VAR_12 + VAR_7);
 VAR_11->compsize = FUNC_3(VAR_12 + VAR_4);
 VAR_11->origsize = FUNC_3(VAR_12 + VAR_8);
 VAR_11->mtime = FUNC_3(VAR_12 + VAR_9);
 VAR_11->crc = FUNC_2(VAR_12 + VAR_5);
 VAR_11->setflag |= VAR_3;

 if (VAR_11->header_size < VAR_6) {
  FUNC_4(&VAR_10->archive, VAR_0,
      "Invalid LHa header size");
  return (VAR_1);
 }

 VAR_16 = FUNC_5(0, VAR_12, VAR_6);
 FUNC_1(VAR_10, VAR_6);


 VAR_14 = FUNC_6(VAR_10, VAR_11, &VAR_16, 2,
    VAR_11->header_size - VAR_6, &VAR_13);
 if (VAR_14 < VAR_2)
  return (VAR_14);


 VAR_15 = (int)VAR_11->header_size - (int)(VAR_6 + VAR_13);
 if (VAR_15 > 0) {
  if ((VAR_12 = FUNC_0(VAR_10, VAR_15, ((void*)0))) == ((void*)0))
   return (FUNC_7(VAR_10));
  VAR_16 = FUNC_5(VAR_16, VAR_12, VAR_15);
  FUNC_1(VAR_10, VAR_15);
 }

 if (VAR_16 != VAR_11->header_crc) {
  FUNC_4(&VAR_10->archive, VAR_0,
      "LHa header CRC error");
  return (VAR_1);
 }
 return (VAR_14);
}
