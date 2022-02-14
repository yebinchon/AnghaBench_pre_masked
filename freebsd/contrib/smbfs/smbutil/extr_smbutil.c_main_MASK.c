
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commands {int flags; int (* fn ) (int,char**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 () ;
 struct commands* FUNC_4 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int,char**) ;
 int VAR_5 ;
 int FUNC_7 (char*,int) ;

int
FUNC_8(int VAR_6, char *VAR_7[])
{
 struct commands *VAR_8;
 char *VAR_9;
 int VAR_10;






 if (VAR_6 < 2)
  FUNC_3();

 while ((VAR_10 = FUNC_2(VAR_6, VAR_7, "hv")) != VAR_1) {
  switch (VAR_10) {
      case 'h':
   FUNC_3();

      case 'v':
   VAR_5 = 1;
   break;
      default:
   FUNC_7("invalid option %c", VAR_10);
   FUNC_3();

  }
 }
 if (VAR_3 >= VAR_6)
  FUNC_3();

 VAR_9 = VAR_7[VAR_3];
 VAR_8 = FUNC_4(VAR_9);
 if (VAR_8 == ((void*)0))
  FUNC_0(VAR_2, "unknown command %s", VAR_9);

 if ((VAR_8->flags & VAR_0) == 0 && FUNC_5() != 0)
  FUNC_1(1);

 VAR_6 -= VAR_3;
 VAR_7 += VAR_3;
 VAR_3 = VAR_4 = 1;
 return VAR_8->fn(VAR_6, VAR_7);
}
