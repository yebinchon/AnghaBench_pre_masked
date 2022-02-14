
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter_bidder {int dummy; } ;
struct archive_read_filter {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 unsigned char* FUNC_1 (struct archive_read_filter*,int,scalar_t__*) ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_2 (struct archive_read_filter*,unsigned char const**,scalar_t__*,scalar_t__*,scalar_t__*,size_t*) ;
 scalar_t__ FUNC_3 (unsigned char const*,char*,int) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct archive_read_filter_bidder *VAR_3,
    struct archive_read_filter *VAR_4)
{
 const unsigned char *VAR_5;
 ssize_t VAR_6, VAR_7;
 ssize_t VAR_8, VAR_9;
 int VAR_10;
 int VAR_11;
 size_t VAR_12;

 (void)VAR_3;

 VAR_5 = FUNC_1(VAR_4, 1, &VAR_6);
 if (VAR_5 == ((void*)0))
  return (0);

 VAR_11 = 20;
 VAR_7 = VAR_6;
 VAR_12 = VAR_6;
 for (;;) {
  VAR_8 = FUNC_2(VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_9, &VAR_12);
  if (VAR_8 < 0 || VAR_9 == 0)
   return (0);
  if (VAR_8 - VAR_9 >= 11 && FUNC_3(VAR_5, "begin ", 6) == 0)
   VAR_10 = 6;
  else if (VAR_8 -VAR_9 >= 18 && FUNC_3(VAR_5, "begin-base64 ", 13) == 0)
   VAR_10 = 13;
  else
   VAR_10 = 0;

  if (VAR_10 > 0 && (VAR_5[VAR_10] < '0' || VAR_5[VAR_10] > '7' ||
      VAR_5[VAR_10+1] < '0' || VAR_5[VAR_10+1] > '7' ||
      VAR_5[VAR_10+2] < '0' || VAR_5[VAR_10+2] > '7' || VAR_5[VAR_10+3] != ' '))
   VAR_10 = 0;

  VAR_5 += VAR_8;
  VAR_6 -= VAR_8;
  if (VAR_10)
   break;
  VAR_11 = 0;


  if (VAR_12 >= VAR_0)
   return (0);
 }
 if (!VAR_6)
  return (0);
 VAR_8 = FUNC_2(VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_9, &VAR_12);
 if (VAR_8 < 0 || VAR_9 == 0)
  return (0);
 VAR_6 -= VAR_8;

 if (VAR_10 == 6) {

  if (!VAR_2[*VAR_5])
   return (0);

  VAR_10 = FUNC_0(*VAR_5++); VAR_8--;
  if (VAR_10 > 45)

   return (0);
  if (VAR_10 > VAR_8 - VAR_9)
   return (0);
  while (VAR_10) {
   if (!VAR_2[*VAR_5++])
    return (0);
   --VAR_8;
   --VAR_10;
  }
  if (VAR_8-VAR_9 == 1 &&
      (VAR_2[*VAR_5] ||
       (*VAR_5 >= 'a' && *VAR_5 <= 'z'))) {
   ++VAR_5;
   --VAR_8;
  }
  VAR_5 += VAR_9;
  if (VAR_6 && VAR_2[*VAR_5])
   return (VAR_11+30);
 } else if (VAR_10 == 13) {

  while (VAR_8-VAR_9 > 0) {
   if (!VAR_1[*VAR_5++])
    return (0);
   --VAR_8;
  }
  VAR_5 += VAR_9;

  if (VAR_6 >= 5 && FUNC_3(VAR_5, "====\n", 5) == 0)
   return (VAR_11+40);
  if (VAR_6 >= 6 && FUNC_3(VAR_5, "====\r\n", 6) == 0)
   return (VAR_11+40);
  if (VAR_6 > 0 && VAR_1[*VAR_5])
   return (VAR_11+30);
 }

 return (0);
}
