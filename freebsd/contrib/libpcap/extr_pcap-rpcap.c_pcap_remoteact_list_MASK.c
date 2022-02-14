
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct activehosts {struct activehosts* next; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct activehosts* VAR_3 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (struct sockaddr_storage*,char*,int ,int *,int ,int ,char*,int ) ;
 int FUNC_2 (char*,char*,int ) ;
 size_t FUNC_3 (char*) ;

int FUNC_4(char *VAR_4, char VAR_5, int VAR_6, char *VAR_7)
{
 struct activehosts *VAR_8;
 size_t VAR_9;
 char VAR_10[VAR_2 + 1];

 VAR_8 = VAR_3;

 VAR_9 = 0;
 *VAR_4 = 0;

 while (VAR_8)
 {



  if (FUNC_1((struct sockaddr_storage *) &VAR_8->host, VAR_10,
   VAR_2, ((void*)0), 0, VAR_0, VAR_7, VAR_1) != -1)


  {

   return -1;
  }

  VAR_9 = VAR_9 + FUNC_3(VAR_10) + 1 ;

  if ((VAR_6 < 0) || (VAR_9 >= (size_t)VAR_6))
  {
   FUNC_0(VAR_7, VAR_1, "The string you provided is not able to keep "
    "the hostnames for all the active connections");
   return -1;
  }

  FUNC_2(VAR_4, VAR_10, VAR_1);
  VAR_4[VAR_9 - 1] = VAR_5;
  VAR_4[VAR_9] = 0;

  VAR_8 = VAR_8->next;
 }

 return 0;
}
