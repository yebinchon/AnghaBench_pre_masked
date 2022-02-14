
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lha {unsigned char header_size; int setflag; void* gid; void* uid; void* mode; void* mtime; void* crc; int filename; void* origsize; void* compsize; } ;
struct archive_read {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned char* FUNC_0 (struct archive_read*,int,int *) ;
 int FUNC_1 (struct archive_read*,int) ;
 void* FUNC_2 (unsigned char const*) ;
 void* FUNC_3 (unsigned char const*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,unsigned char const*,int) ;
 unsigned char FUNC_6 (int ,unsigned char const*,int,int) ;
 void* FUNC_7 (unsigned char const*) ;
 int FUNC_8 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_9(struct archive_read *VAR_14, struct lha *VAR_15)
{
 const unsigned char *VAR_16;
 int VAR_17, VAR_18;
 unsigned char VAR_19, VAR_20;

 if ((VAR_16 = FUNC_0(VAR_14, VAR_8, ((void*)0))) == ((void*)0))
  return (FUNC_8(VAR_14));
 VAR_15->header_size = VAR_16[VAR_9] + 2;
 VAR_19 = VAR_16[VAR_10];
 VAR_15->compsize = FUNC_3(VAR_16 + VAR_5);
 VAR_15->origsize = FUNC_3(VAR_16 + VAR_12);
 VAR_15->mtime = FUNC_7(VAR_16 + VAR_6);
 VAR_18 = VAR_16[VAR_11];
 VAR_17 = (int)VAR_15->header_size - VAR_8 - VAR_18;
 if ((VAR_18 > 221 || VAR_17 < 0) && VAR_17 != -2) {
  FUNC_4(&VAR_14->archive, VAR_0,
      "Invalid LHa header");
  return (VAR_2);
 }
 if ((VAR_16 = FUNC_0(VAR_14, VAR_15->header_size, ((void*)0))) == ((void*)0))
  return (FUNC_8(VAR_14));

 FUNC_5(&VAR_15->filename, VAR_16 + VAR_7, VAR_18);

 if (VAR_17 >= 0) {
  VAR_15->crc = FUNC_2(VAR_16 + VAR_7 + VAR_18);
  VAR_15->setflag |= VAR_4;
 }
 VAR_20 = FUNC_6(0, VAR_16, 2, VAR_15->header_size - 2);


 if (VAR_17 > 0) {



  VAR_16 += VAR_7 + VAR_18 + 2;
  if (VAR_16[0] == 'U' && VAR_17 == 12) {

   VAR_15->mtime = FUNC_3(&VAR_16[2]);
   VAR_15->mode = FUNC_2(&VAR_16[6]);
   VAR_15->uid = FUNC_2(&VAR_16[8]);
   VAR_15->gid = FUNC_2(&VAR_16[10]);
   VAR_15->setflag |= VAR_13;
  }
 }
 FUNC_1(VAR_14, VAR_15->header_size);

 if (VAR_20 != VAR_19) {
  FUNC_4(&VAR_14->archive, VAR_1,
      "LHa header sum error");
  return (VAR_2);
 }

 return (VAR_3);
}
