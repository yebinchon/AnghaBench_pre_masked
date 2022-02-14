
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lha {unsigned char header_size; size_t compsize; int setflag; int crc; int filename; int mtime; void* origsize; } ;
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
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 unsigned char* FUNC_0 (struct archive_read*,int,int *) ;
 int FUNC_1 (struct archive_read*,int) ;
 int FUNC_2 (unsigned char const*) ;
 void* FUNC_3 (unsigned char const*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,unsigned char const*,int) ;
 unsigned char FUNC_6 (int ,unsigned char const*,int,int) ;
 int FUNC_7 (unsigned char const*) ;
 int FUNC_8 (struct archive_read*,struct lha*,int *,int,size_t,size_t*) ;
 int FUNC_9 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_10(struct archive_read *VAR_14, struct lha *VAR_15)
{
 const unsigned char *VAR_16;
 size_t VAR_17;
 int VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;
 unsigned char VAR_23, VAR_24;

 VAR_19 = VAR_3;

 if ((VAR_16 = FUNC_0(VAR_14, VAR_9, ((void*)0))) == ((void*)0))
  return (FUNC_9(VAR_14));

 VAR_15->header_size = VAR_16[VAR_10] + 2;
 VAR_23 = VAR_16[VAR_11];

 VAR_15->compsize = FUNC_3(VAR_16 + VAR_6);
 VAR_15->origsize = FUNC_3(VAR_16 + VAR_13);
 VAR_15->mtime = FUNC_7(VAR_16 + VAR_7);
 VAR_21 = VAR_16[VAR_12];

 VAR_22 = ((int)VAR_15->header_size) - VAR_9 - VAR_21;

 if (VAR_21 > 230 || VAR_22 < 0)
  goto invalid;

 if ((VAR_16 = FUNC_0(VAR_14, VAR_15->header_size, ((void*)0))) == ((void*)0))
  return (FUNC_9(VAR_14));

 for (VAR_18 = 0; VAR_18 < VAR_21; VAR_18++) {
  if (VAR_16[VAR_18 + VAR_8] == 0xff)
   goto invalid;
 }
 FUNC_5(&VAR_15->filename, VAR_16 + VAR_8, VAR_21);
 VAR_15->crc = FUNC_2(VAR_16 + VAR_8 + VAR_21);
 VAR_15->setflag |= VAR_5;

 VAR_24 = FUNC_6(0, VAR_16, 2, VAR_15->header_size - 2);


 FUNC_1(VAR_14, VAR_15->header_size - 2);


 VAR_20 = FUNC_8(VAR_14, VAR_15, ((void*)0), 2,
     (size_t)(VAR_15->compsize + 2), &VAR_17);
 if (VAR_20 < VAR_4)
  return (VAR_20);
 if (VAR_20 < VAR_19)
  VAR_19 = VAR_20;

 VAR_15->compsize -= VAR_17 - 2;

 if (VAR_15->compsize < 0)
  goto invalid;

 if (VAR_24 != VAR_23) {
  FUNC_4(&VAR_14->archive, VAR_1,
      "LHa header sum error");
  return (VAR_2);
 }
 return (VAR_19);
invalid:
 FUNC_4(&VAR_14->archive, VAR_0,
     "Invalid LHa header");
 return (VAR_2);
}
