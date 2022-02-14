
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparse {scalar_t__ size; scalar_t__ type; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct archive_entry*) ;
 struct archive_entry* FUNC_1 () ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive*) ;
 scalar_t__ FUNC_4 (struct archive*,void const**,size_t*,scalar_t__*) ;
 int FUNC_5 (struct archive*,char const*) ;
 int FUNC_6 (struct archive*,struct archive_entry*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct archive*,scalar_t__,int ) ;
 int FUNC_10 (char const*,int,char) ;
 int FUNC_11 (char const*,struct sparse const*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (int ,char*,...) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_14(struct archive *VAR_5, const char *VAR_6,
    const struct sparse *VAR_7, int VAR_8)
{
 struct archive_entry *VAR_9;
 const void *VAR_10;
 size_t VAR_11;
 int64_t VAR_12, VAR_13, VAR_14;
 int VAR_15 = 0;

 FUNC_11(VAR_6, VAR_7);
 FUNC_7((VAR_9 = FUNC_1()) != ((void*)0));
 FUNC_9(VAR_5, VAR_0, FUNC_5(VAR_5, VAR_6));
 FUNC_9(VAR_5, VAR_0, FUNC_6(VAR_5, VAR_9));

 VAR_13 = 0;
 VAR_14 = 0;
 while (VAR_0 == FUNC_4(VAR_5, &VAR_10, &VAR_11,
     &VAR_12)) {
  const char *VAR_16 = VAR_10;



  if (VAR_12 > VAR_14) {
   ++VAR_15;
  }

  while (VAR_13 + (int64_t)VAR_7->size < VAR_12) {




   FUNC_7(VAR_7->type == VAR_3);
   VAR_13 += VAR_7->size;
   ++VAR_7;
  }

  if (VAR_13 < VAR_12
      && VAR_13 + (int64_t)VAR_7->size <= VAR_12 + (int64_t)VAR_11) {
   const char *VAR_17 = (const char *)VAR_10 + (VAR_13 - VAR_12) + (size_t)VAR_7->size;




   if (FUNC_7(VAR_7->type == VAR_3)) {
    FUNC_10(VAR_16, VAR_17 - VAR_16, '\0');
   }
   VAR_16 = VAR_17;
   VAR_13 += VAR_7->size;
   ++VAR_7;
  }

  while (VAR_13 + (int64_t)VAR_7->size <= VAR_12 + (int64_t)VAR_11) {
   const char *VAR_18 = (const char *)VAR_10 + (VAR_13 - VAR_12) + (size_t)VAR_7->size;
   if (VAR_7->type == VAR_3) {





    if (VAR_18 > (const char *)VAR_10 + VAR_11) {
     VAR_18 = (const char *)VAR_10 + VAR_11;
    }
    FUNC_10(VAR_16, VAR_18 - VAR_16, '\0');
    VAR_16 = VAR_18;
    VAR_13 += VAR_7->size;
    ++VAR_7;
   } else if (VAR_7->type == VAR_1) {




    if (FUNC_7(VAR_13 + VAR_7->size <= VAR_12 + VAR_11)) {
     FUNC_7(VAR_16 == (const char *)VAR_10 + (size_t)(VAR_13 - VAR_12));
     FUNC_10(VAR_16, VAR_18 - VAR_16, ' ');
    }
    VAR_16 = VAR_18;
    VAR_13 += VAR_7->size;
    ++VAR_7;
   } else {
    break;
   }
  }

  if (VAR_13 < VAR_12 + (int64_t)VAR_11) {
   const char *VAR_19 = (const char *)VAR_10 + VAR_11;




   if (FUNC_7(VAR_7->type == VAR_3)) {
    FUNC_10(VAR_16, VAR_19 - VAR_16, '\0');
   }
  }
  VAR_14 = VAR_12 + VAR_11;
 }

 if (VAR_14 < FUNC_2(VAR_9)) {
  ++VAR_15;
 }


 while (VAR_7->type == VAR_3) {
  VAR_13 += VAR_7->size;
  ++VAR_7;
 }
 FUNC_7(VAR_7->type == VAR_2);
 FUNC_8(VAR_13, FUNC_2(VAR_9));

 FUNC_12(VAR_6);
 FUNC_8(VAR_15, VAR_8);

 FUNC_9(VAR_5, VAR_0, FUNC_3(VAR_5));
 FUNC_0(VAR_9);
}
