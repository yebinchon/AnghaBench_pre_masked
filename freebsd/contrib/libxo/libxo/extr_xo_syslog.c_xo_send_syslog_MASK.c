
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {char* iov_base; int iov_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,char*,int,int ) ;
 char* FUNC_4 (char*,char) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,struct iovec*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int ,int,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_11 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_12 (char *VAR_15, char *VAR_16,
  char *VAR_17)
{
    if (&FUNC_11) {
 FUNC_11(VAR_15, VAR_16, VAR_17);
 return;
    }

    int VAR_18;
    int VAR_19 = FUNC_5(VAR_15);


    if (VAR_16) {
        struct iovec VAR_20[3];
        struct iovec *VAR_21 = VAR_20;
        char VAR_22[] = "\n";

        VAR_21->iov_base = VAR_16;
        VAR_21->iov_len = FUNC_5(VAR_16);
        VAR_21 += 1;
        VAR_21->iov_base = VAR_17;
        VAR_21->iov_len = FUNC_5(VAR_17);
        VAR_21 += 1;
        VAR_21->iov_base = VAR_22;
        VAR_21->iov_len = 1;
        VAR_21 += 1;
        FUNC_0(FUNC_7(VAR_7, VAR_20, 3));
    }


    if (!VAR_13)
        FUNC_10(VAR_12, VAR_11 | VAR_3, 0);
    FUNC_8();
    if (FUNC_3(VAR_10, VAR_15, VAR_19, 0) < 0) {
        if (VAR_9 != VAR_1) {




            FUNC_9();
            FUNC_8();
            if (FUNC_3(VAR_10, VAR_15, VAR_19, 0) >= 0) {
                return;
            }




        }
        while (VAR_9 == VAR_1) {





            if (VAR_14 == VAR_0)
                break;
            FUNC_6(1);
            if (FUNC_3(VAR_10, VAR_15, VAR_19, 0) >= 0) {
                return;
            }
        }
    } else {
        return;
    }






    int VAR_23 = VAR_6 | VAR_5;




    if (VAR_11 & VAR_2
        && (VAR_18 = FUNC_2(VAR_8, VAR_23, 0)) >= 0) {
        struct iovec VAR_24[2];
        struct iovec *VAR_25 = VAR_24;
        char VAR_26[] = "\r\n";
 char *VAR_27;

        VAR_27 = FUNC_4(VAR_15, '>') + 1;
        VAR_25->iov_base = VAR_27;
        VAR_25->iov_len = VAR_19 - (VAR_27 - VAR_15);
        ++VAR_25;
        VAR_25->iov_base = VAR_26;
        VAR_25->iov_len = 2;
        FUNC_0(FUNC_7(VAR_18, VAR_24, 2));
        (void) FUNC_1(VAR_18);
    }
}
