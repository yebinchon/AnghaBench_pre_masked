
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,unsigned char const*,size_t,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;

int
FUNC_8(int VAR_9, const unsigned char *VAR_10, size_t VAR_11, int VAR_12)
{
 ssize_t VAR_13;
 size_t VAR_14;
 int VAR_15 = 0;

 FUNC_0(VAR_9 >= 0);

 if (VAR_10 == ((void*)0)) {


  FUNC_0(VAR_11 == 0);

  if (FUNC_6(VAR_9, VAR_7) == -1)
   return (VAR_8);
  return (0);
 }

 FUNC_0(VAR_10 != ((void*)0));
 FUNC_0(VAR_11 > 0);

 do {
  VAR_14 = VAR_11 < VAR_5 ? VAR_11 : VAR_5;
  VAR_13 = FUNC_5(VAR_9, VAR_10, VAR_14, VAR_6);
  if (VAR_13 == 0) {
   return (VAR_3);
  } else if (VAR_13 == -1) {
   if (VAR_8 == VAR_1)
    continue;
   if (VAR_8 == VAR_2) {






    if (VAR_15 == 15) {
     FUNC_3("Getting ENOBUFS errors for 11s on send(), giving up.");
    } else {
     if (VAR_15 == 0)
      FUNC_3("Got ENOBUFS error on send(), retrying for a bit.");
     VAR_15++;
     FUNC_7(100000 * VAR_15);
     continue;
    }
   }






   if (VAR_8 == VAR_0 && FUNC_1(VAR_9))
    VAR_8 = VAR_4;
   return (VAR_8);
  }
  VAR_10 += VAR_13;
  VAR_11 -= VAR_13;
 } while (VAR_11 > 0);
 if (VAR_15 > 0) {
  FUNC_2("Data sent successfully after %d ENOBUFS error%s.",
      VAR_15, VAR_15 == 1 ? "" : "s");
 }

 if (VAR_12 == -1)
  return (0);
 return (FUNC_4(VAR_9, VAR_12));
}
