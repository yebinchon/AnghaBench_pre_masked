
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct archive_read {int dummy; } ;
struct archive_entry {int dummy; } ;
typedef size_t ssize_t ;
typedef int la_int64_t ;
typedef int int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive_entry*,int ) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*,int ) ;
 int FUNC_3 (struct archive_entry*,char*) ;
 scalar_t__ FUNC_4 (struct archive_read*,int ) ;
 int FUNC_5 (char*,int const*,size_t) ;
 int FUNC_6 (struct archive_read*,size_t,int const**) ;
 int FUNC_7 (struct archive_read*,int*,int*) ;
 int FUNC_8 (struct archive_read*,size_t*,int *) ;

__attribute__((used)) static int FUNC_9(struct archive_read* VAR_7,
    struct archive_entry* VAR_8, ssize_t* VAR_9)
{
 uint64_t VAR_10 = 0;
 uint64_t VAR_11 = 0;
 uint64_t VAR_12 = 0;
 size_t VAR_13 = 0;
 size_t VAR_14 = 0;
 char VAR_15[VAR_4];
 const uint8_t* VAR_16;

 if(!FUNC_7(VAR_7, &VAR_10, &VAR_11))
  return VAR_0;
 if(VAR_1 != FUNC_4(VAR_7, (int64_t)VAR_11))
  return VAR_0;
 *VAR_9 -= VAR_11;

 if ((VAR_10 & VAR_5) != 0) {
  if(!FUNC_8(VAR_7, &VAR_14, ((void*)0)))
   return VAR_0;
  *VAR_9 -= VAR_14 + 1;

  if(!FUNC_6(VAR_7, VAR_14, &VAR_16))
   return VAR_0;

  if (VAR_14 >= VAR_4) {
   VAR_13 = VAR_4 - 1;
  } else {
   VAR_13 = VAR_14;
  }

  FUNC_5(VAR_15, VAR_16, VAR_13);
  VAR_15[VAR_13] = 0;
  if(VAR_1 != FUNC_4(VAR_7, (int64_t)VAR_14))
   return VAR_0;

  FUNC_3(VAR_8, VAR_15);
 }
 if ((VAR_10 & VAR_3) != 0) {
  if(!FUNC_8(VAR_7, &VAR_14, ((void*)0)))
   return VAR_0;
  *VAR_9 -= VAR_14 + 1;

  if(!FUNC_6(VAR_7, VAR_14, &VAR_16))
   return VAR_0;

  if (VAR_14 >= VAR_4) {
   VAR_13 = VAR_4 - 1;
  } else {
   VAR_13 = VAR_14;
  }

  FUNC_5(VAR_15, VAR_16, VAR_13);
  VAR_15[VAR_13] = 0;
  if(VAR_1 != FUNC_4(VAR_7, (int64_t)VAR_14))
   return VAR_0;

  FUNC_1(VAR_8, VAR_15);
 }
 if ((VAR_10 & VAR_6) != 0) {
  if(!FUNC_7(VAR_7, &VAR_12, &VAR_11))
   return VAR_0;
  if(VAR_1 != FUNC_4(VAR_7, (int64_t)VAR_11))
   return VAR_0;
  *VAR_9 -= VAR_11;

  FUNC_2(VAR_8, (la_int64_t)VAR_12);
 }
 if ((VAR_10 & VAR_2) != 0) {
  if(!FUNC_7(VAR_7, &VAR_12, &VAR_11))
   return VAR_0;
  if(VAR_1 != FUNC_4(VAR_7, (int64_t)VAR_11))
   return VAR_0;
  *VAR_9 -= VAR_11;

  FUNC_0(VAR_8, (la_int64_t)VAR_12);
 }
 return VAR_1;
}
