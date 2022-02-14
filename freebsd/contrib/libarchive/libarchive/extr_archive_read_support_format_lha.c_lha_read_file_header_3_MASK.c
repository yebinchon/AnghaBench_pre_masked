
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct lha {scalar_t__ header_size; int crc; scalar_t__ header_crc; int setflag; void* mtime; void* origsize; void* compsize; } ;
struct archive_read {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char* FUNC_0 (struct archive_read*,scalar_t__,int *) ;
 int FUNC_1 (struct archive_read*,scalar_t__) ;
 int FUNC_2 (unsigned char const*) ;
 void* FUNC_3 (unsigned char const*) ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (int ,unsigned char const*,scalar_t__) ;
 int FUNC_6 (struct archive_read*,struct lha*,scalar_t__*,int,scalar_t__,size_t*) ;
 int FUNC_7 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_8(struct archive_read *VAR_11, struct lha *VAR_12)
{
 const unsigned char *VAR_13;
 size_t VAR_14;
 int VAR_15;
 uint16_t VAR_16;

 if ((VAR_13 = FUNC_0(VAR_11, VAR_7, ((void*)0))) == ((void*)0))
  return (FUNC_7(VAR_11));

 if (FUNC_2(VAR_13 + VAR_6) != 4)
  goto invalid;
 VAR_12->header_size =FUNC_3(VAR_13 + VAR_8);
 VAR_12->compsize = FUNC_3(VAR_13 + VAR_4);
 VAR_12->origsize = FUNC_3(VAR_13 + VAR_9);
 VAR_12->mtime = FUNC_3(VAR_13 + VAR_10);
 VAR_12->crc = FUNC_2(VAR_13 + VAR_5);
 VAR_12->setflag |= VAR_3;

 if (VAR_12->header_size < VAR_7 + 4)
  goto invalid;
 VAR_16 = FUNC_5(0, VAR_13, VAR_7);
 FUNC_1(VAR_11, VAR_7);


 VAR_15 = FUNC_6(VAR_11, VAR_12, &VAR_16, 4,
    VAR_12->header_size - VAR_7, &VAR_14);
 if (VAR_15 < VAR_2)
  return (VAR_15);

 if (VAR_16 != VAR_12->header_crc) {
  FUNC_4(&VAR_11->archive, VAR_0,
      "LHa header CRC error");
  return (VAR_1);
 }
 return (VAR_15);
invalid:
 FUNC_4(&VAR_11->archive, VAR_0,
     "Invalid LHa header");
 return (VAR_1);
}
