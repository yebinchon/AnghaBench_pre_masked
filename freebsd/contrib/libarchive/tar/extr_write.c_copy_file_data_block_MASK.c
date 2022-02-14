
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {char* buff; size_t buff_size; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*,void const**,size_t*,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct archive*,void const*,size_t) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (char*,int ,size_t) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct bsdtar*,struct archive*,struct archive_entry*,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct bsdtar *VAR_2, struct archive *VAR_3,
    struct archive *VAR_4, struct archive_entry *VAR_5)
{
 size_t VAR_6;
 ssize_t VAR_7;
 int64_t VAR_8, VAR_9 = 0;
 char *VAR_10 = ((void*)0);
 const void *VAR_11;
 int VAR_12;

 while ((VAR_12 = FUNC_3(VAR_4, &VAR_11,
     &VAR_6, &VAR_8)) == VAR_0) {
  if (FUNC_7())
   FUNC_8(VAR_2, VAR_3, VAR_5, VAR_9);

  if (VAR_8 > VAR_9) {
   int64_t VAR_13 = VAR_8 - VAR_9;
   size_t VAR_14;

   if (VAR_10 == ((void*)0)) {
    VAR_10 = VAR_2->buff;
    FUNC_6(VAR_10, 0, VAR_2->buff_size);
   }

   while (VAR_13 > 0) {
    if (VAR_13 > (int64_t)VAR_2->buff_size)
     VAR_14 = VAR_2->buff_size;
    else
     VAR_14 = (size_t)VAR_13;
    VAR_7 =
        FUNC_4(VAR_3, VAR_10, VAR_14);
    if (VAR_7 < 0) {

     FUNC_5(0, "%s",
          FUNC_2(VAR_3));
     return (-1);
    }
    if ((size_t)VAR_7 < VAR_14) {


     FUNC_5(0,
         "%s: Truncated write; file may "
         "have grown while being archived.",
         FUNC_0(VAR_5));
     return (0);
    }
    VAR_9 += VAR_7;
    VAR_13 -= VAR_7;
   }
  }

  VAR_7 = FUNC_4(VAR_3, VAR_11, VAR_6);
  if (VAR_7 < 0) {

   FUNC_5(0, "%s", FUNC_2(VAR_3));
   return (-1);
  }
  if ((size_t)VAR_7 < VAR_6) {

   FUNC_5(0,
       "%s: Truncated write; file may have grown "
       "while being archived.",
       FUNC_0(VAR_5));
   return (0);
  }
  VAR_9 += VAR_7;
 }
 if (VAR_12 < VAR_1) {
  FUNC_5(FUNC_1(VAR_3), "%s", FUNC_2(VAR_3));
  return (-1);
 }
 return (0);
}
