
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hex_options {scalar_t__ decode_flag; } ;
typedef scalar_t__ ssize_t ;
typedef int buf ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (char*,int,int,int ) ;
 int FUNC_4 (char*) ;
 size_t FUNC_5 (char*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (char*,char*,int ) ;
 scalar_t__ FUNC_7 (char*,scalar_t__,char**) ;
 scalar_t__ FUNC_8 (unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

int
FUNC_11(struct hex_options *VAR_2, int VAR_3, char **VAR_4)
{

    if (VAR_2->decode_flag) {
 char VAR_5[1024], VAR_6[1024], *VAR_7;
 ssize_t VAR_8;

 while(FUNC_1(VAR_5, sizeof(VAR_5), VAR_0) != ((void*)0)) {
     VAR_5[FUNC_9(VAR_5, "\r\n")] = '\0';
     VAR_7 = VAR_5;
     while(FUNC_8(*(unsigned char *)VAR_7))
  VAR_7++;
     VAR_8 = FUNC_6(VAR_7, VAR_6, FUNC_10(VAR_7));
     if (VAR_8 < 0)
  FUNC_0(1, "hex_decode failed");
     if (FUNC_5(VAR_6, 1, VAR_8, VAR_1) != (size_t)VAR_8)
  FUNC_0(1, "fwrite failed");
 }
    } else {
        char VAR_9[28], *VAR_10;
 ssize_t VAR_11;

 while((VAR_11 = FUNC_3(VAR_9, 1, sizeof(VAR_9), VAR_0)) != 0) {
     VAR_11 = FUNC_7(VAR_9, VAR_11, &VAR_10);
     if (VAR_11 < 0)
         continue;
     FUNC_2(VAR_1, "%s\n", VAR_10);
     FUNC_4(VAR_10);
 }
    }
    return 0;
}
