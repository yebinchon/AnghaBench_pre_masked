
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned char) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int ,unsigned char*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int ,char*,int ,...) ;

__attribute__((used)) static int
FUNC_13(const char *VAR_7)
{
 int VAR_8, VAR_9 = 0;

 if (VAR_6 & VAR_0)
  FUNC_12(VAR_2, "chat_expect '%s'", FUNC_3(VAR_7, FUNC_11(VAR_7)));

 if ((VAR_8 = FUNC_11(VAR_7)) > 0) {
  int VAR_10 = 0;
  char * VAR_11;

  if ((VAR_11 = FUNC_5(VAR_8 + 1)) == ((void*)0))
   VAR_9 = 1;
  else {

   FUNC_8(VAR_11, 0, VAR_8+1);
   FUNC_0(VAR_5);
   VAR_4 = 0;

   while (VAR_9 == 0 && VAR_10 < VAR_8) {
    if (VAR_4)
     VAR_9 = 3;
    else {
     unsigned char VAR_12;

     if (FUNC_9(VAR_3, &VAR_12, 1) == 1) {

      if (VAR_6 & VAR_1)
       FUNC_12(VAR_2, "chat_recv '%s' m=%d",
        FUNC_2(((void*)0), VAR_12), VAR_10);

      if (VAR_12 == VAR_7[VAR_10])
       VAR_11[VAR_10++] = VAR_12;
      else if (VAR_10 > 0) {
       int VAR_13 = 1;




       while (VAR_13 < VAR_10 && FUNC_6(VAR_11 + VAR_13, VAR_7, VAR_10 - VAR_13) != 0)
        VAR_13++;
       if (VAR_13 < VAR_10)
        FUNC_7(VAR_11, VAR_11 + VAR_13, VAR_10 - VAR_13);
       VAR_10 -= VAR_13;
      }
     } else
      VAR_9 = VAR_4 ? 3 : 2;
    }
   }
   FUNC_0(0);
          FUNC_1();
          VAR_4 = 0;
          FUNC_4(VAR_11);
  }
 }

 if (VAR_6 & VAR_0)
  FUNC_12(VAR_2, "chat_expect %s", FUNC_10(VAR_9));

 return VAR_9;
}
