
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int,char*,size_t) ;
 int FUNC_2 (int ,char const*,int,int ) ;
 int FUNC_3 (char*,int,char*,int) ;

int FUNC_4(SOCKET VAR_7, const char *VAR_8, size_t VAR_9,
    char *VAR_10, int VAR_11)
{
 int VAR_12;
 ssize_t VAR_13;

 if (VAR_9 > VAR_2)
 {
  if (VAR_10)
  {
   FUNC_1(VAR_10, VAR_11,
       "Can't send more than %u bytes with sock_recv",
       VAR_2);
  }
  return -1;
 }
 VAR_12 = (int)VAR_9;

 do {
  VAR_13 = FUNC_2(VAR_7, VAR_8, VAR_12, 0);


  if (VAR_13 == -1)
  {





   int VAR_14;
   VAR_14 = VAR_6;
   if (VAR_14 == VAR_0 || VAR_14 == VAR_1)
   {





    return -2;
   }
   FUNC_3("send(): ", VAR_14, VAR_10, VAR_11);

   return -1;
  }

  VAR_12 -= VAR_13;
  VAR_8 += VAR_13;
 } while (VAR_12 != 0);

 return 0;
}
