
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_8 ;
 int FUNC_7 (int) ;

void *FUNC_8(int VAR_9)
{
 ssize_t VAR_10;
 char VAR_11[VAR_1];
 int VAR_12;


 FUNC_6(VAR_4, VAR_8);
 FUNC_6(VAR_2, VAR_8);
 FUNC_6(VAR_3, VAR_8);

 while (!VAR_7) {

  VAR_12 = FUNC_7(VAR_9);
  if (VAR_12 < 0)
   break;

  VAR_10 = FUNC_5(VAR_9, VAR_11, sizeof(VAR_11));
  if (VAR_10 < 0) {
   FUNC_2("read data error in ctl thread\n");
   goto error;
  }

  if (VAR_10 == 2 && VAR_11[0] == '1') {




   VAR_6 = 1;
   FUNC_4(&VAR_5);
   FUNC_1("Wake up all read/write threads\n");
  } else if (VAR_10 == 2 && VAR_11[0] == '0') {




   VAR_6 = 0;
   FUNC_1("Stop all read/write threads\n");
  } else
   FUNC_3("Invalid host notification: %s\n", VAR_11);
 }

 return ((void*)0);

error:
 FUNC_0(VAR_0);
}
