
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (char const*,int,int,int*) ;
 scalar_t__ FUNC_2 (char const*,int,int,int ) ;
 int FUNC_3 (struct archive_read*,char const**,int*,int*,int*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_1, int *VAR_2)
{
 const char *VAR_3;
 ssize_t VAR_4, VAR_5;
 ssize_t VAR_6 = 0, VAR_7, VAR_8;
 int VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = 0;


 if (VAR_2 != ((void*)0))
  *VAR_2 = 0;
 VAR_3 = FUNC_0(VAR_1, 1, &VAR_4);
 if (VAR_3 == ((void*)0))
  return (-1);
 VAR_5 = VAR_4;
 for (;;) {
  VAR_7 = FUNC_3(VAR_1, &VAR_3, &VAR_4, &VAR_5, &VAR_8);


  if (VAR_7 <= 0 || VAR_8 == 0)
   break;
  if (!VAR_10) {


   while (VAR_7 > 0 && (*VAR_3 == ' ' || *VAR_3 == '\t')) {
    ++VAR_3;
    --VAR_4;
    --VAR_7;
   }

   if (VAR_3[0] == '#' || VAR_3[0] == '\n' || VAR_3[0] == '\r') {
    VAR_3 += VAR_7;
    VAR_4 -= VAR_7;
    continue;
   }
  } else {


   if (FUNC_2(VAR_3, VAR_7, 0, 0) <= 0)
    break;
   if (VAR_10 == 1)
    VAR_6 += VAR_7;
   if (VAR_3[VAR_7-VAR_8-1] != '\\') {
    if (VAR_10 == 1 &&
        ++VAR_9 >= VAR_0)
     break;
    VAR_10 = 0;
   }
   VAR_3 += VAR_7;
   VAR_4 -= VAR_7;
   continue;
  }
  if (VAR_3[0] != '/') {
   int VAR_12, VAR_13;

   VAR_13 = FUNC_1(VAR_3, VAR_7, VAR_8, &VAR_12);
   if (VAR_13 >= 0) {
    VAR_6 += VAR_7;
    if (VAR_11 == 0) {
     if (VAR_12)
      VAR_11 = 1;
     else if (VAR_13 > 0)

      VAR_11 = -1;
    } else if (VAR_11 == 1) {
     if (!VAR_12 && VAR_13 > 0)



      break;
    }
    if (!VAR_12 && VAR_3[VAR_7-VAR_8-1] == '\\')

     VAR_10 = 1;
    else {



     if (++VAR_9 >= VAR_0)
      break;
    }
   } else
    break;
  } else if (VAR_7 > 4 && FUNC_4(VAR_3, "/set", 4) == 0) {
   if (FUNC_2(VAR_3+4, VAR_7-4, 0, 0) <= 0)
    break;

   if (VAR_3[VAR_7-VAR_8-1] == '\\')
    VAR_10 = 2;
  } else if (VAR_7 > 6 && FUNC_4(VAR_3, "/unset", 6) == 0) {
   if (FUNC_2(VAR_3+6, VAR_7-6, 1, 0) <= 0)
    break;

   if (VAR_3[VAR_7-VAR_8-1] == '\\')
    VAR_10 = 2;
  } else
   break;


  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;
 }
 if (VAR_9 >= VAR_0 || (VAR_9 > 0 && VAR_7 == 0)) {
  if (VAR_2 != ((void*)0)) {
   if (VAR_11 == 1)
    *VAR_2 = 1;
  }
  return (32);
 }

 return (0);
}
