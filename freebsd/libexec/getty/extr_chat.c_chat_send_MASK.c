
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_8(char const *VAR_7)
{
 int VAR_8 = 0;

 if (VAR_6 & VAR_0)
  FUNC_5(VAR_1, "chat_send '%s'", FUNC_2(VAR_7, FUNC_4(VAR_7)));

 if (*VAR_7) {
                FUNC_0(VAR_5);
                VAR_4 = 0;
                while (VAR_8 == 0 && *VAR_7)
                {
                        unsigned char VAR_9 = (unsigned char)*VAR_7++;

                        if (VAR_4)
           VAR_8 = 3;
                        else if (VAR_9 == VAR_2)
    FUNC_6(500000);
   else {
    FUNC_6(10000);
                                if (FUNC_7(VAR_3, &VAR_9, 1) != 1)
              VAR_8 = VAR_4 ? 3 : 2;
                        }
                }
                FUNC_0(0);
                FUNC_1();
                VAR_4 = 0;
 }

        if (VAR_6 & VAR_0)
          FUNC_5(VAR_1, "chat_send %s", FUNC_3(VAR_8));

        return VAR_8;
}
