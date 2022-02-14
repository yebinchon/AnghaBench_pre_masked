
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct pollfd*,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(int VAR_7)
{
 struct pollfd VAR_8;
 int VAR_9 = 0;

 while (!VAR_5) {
  VAR_8.fd = VAR_7;
  VAR_8.events = VAR_2;

  VAR_9 = FUNC_1(&VAR_8, 1, VAR_0);

  if (VAR_6) {
   VAR_5 = 1;
   FUNC_3("Receive interrupt %d\n", VAR_6);


   if (!VAR_4)
    FUNC_4(&VAR_3);

   VAR_9 = -1;
   break;
  }

  if (VAR_9 < 0) {
   FUNC_2("Polling error\n");
   goto error;
  }

  if (VAR_9)
   break;
 };

 return VAR_9;

error:
 FUNC_0(VAR_1);
}
