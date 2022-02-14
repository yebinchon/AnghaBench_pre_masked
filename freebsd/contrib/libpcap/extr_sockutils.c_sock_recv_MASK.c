
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int SOCKET ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (char*,char*,int) ;

int FUNC_4(SOCKET VAR_5, void *VAR_6, size_t VAR_7, int VAR_8,
    char *VAR_9, int VAR_10)
{
 char *VAR_11 = VAR_6;
 int VAR_12;
 ssize_t VAR_13;

 if (VAR_7 == 0)
 {
  FUNC_0("I have been requested to read zero bytes");
  return 0;
 }
 if (VAR_7 > VAR_1)
 {
  if (VAR_9)
  {
   FUNC_1(VAR_9, VAR_10,
       "Can't read more than %u bytes with sock_recv",
       VAR_1);
  }
  return -1;
 }

 VAR_11 = (char *) VAR_6;
 VAR_12 = (int) VAR_7;





 for (;;) {
  VAR_13 = FUNC_2(VAR_5, VAR_11, VAR_12, 0);

  if (VAR_13 == -1)
  {

   if (VAR_4 == VAR_0)
    return -3;

   FUNC_3("recv(): ", VAR_9, VAR_10);
   return -1;
  }

  if (VAR_13 == 0)
  {
   if ((VAR_8 & VAR_2) ||
       (VAR_12 != (int) VAR_7))
   {





    if (VAR_9)
    {
     FUNC_1(VAR_9, VAR_10,
         "The other host terminated the connection.");
    }
    return -1;
   }
   else
    return 0;
  }





  if (!(VAR_8 & VAR_3))
  {



   return (int) VAR_13;
  }

  VAR_11 += VAR_13;
  VAR_12 -= VAR_13;

  if (VAR_12 == 0)
   return (int) VAR_7;
 }
}
