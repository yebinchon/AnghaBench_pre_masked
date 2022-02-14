
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {scalar_t__ sin_family; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int s_addr; } ;
struct hostent {char* h_name; int h_length; char** h_addr_list; int h_addrtype; int * h_aliases; } ;
typedef scalar_t__ ssize_t ;
typedef int buf ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char**,char*,int ,char const*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 struct sockaddr_in VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,struct in_addr*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int ,int ,int ) ;
 size_t FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*,char*,char**) ;
 scalar_t__ FUNC_11 (int,char*,size_t) ;

__attribute__((used)) static struct hostent*
FUNC_12(const char *VAR_5)
{
    int VAR_6;
    struct sockaddr_in VAR_7;
    char *VAR_8 = ((void*)0);
    char VAR_9[1024];
    int VAR_10 = 0;
    int VAR_11;
    char *VAR_12, *VAR_13;
    size_t VAR_14;

    if(VAR_3.sin_family == 0)
 return ((void*)0);
    VAR_7 = VAR_3;
    if (FUNC_0(&VAR_8, "GET %d?%s HTTP/1.0\r\n\r\n", VAR_4, VAR_5) < 0)
 return ((void*)0);
    if(VAR_8 == ((void*)0))
 return ((void*)0);
    VAR_6 = FUNC_7(VAR_0, VAR_2, 0);
    if(VAR_6 < 0) {
 FUNC_3(VAR_8);
 return ((void*)0);
    }
    if(FUNC_2(VAR_6, (struct sockaddr*)&VAR_7, sizeof(VAR_7)) < 0) {
 FUNC_1(VAR_6);
 FUNC_3(VAR_8);
 return ((void*)0);
    }

    VAR_14 = FUNC_8(VAR_8);
    if(FUNC_11(VAR_6, VAR_8, VAR_14) != (ssize_t)VAR_14) {
 FUNC_1(VAR_6);
 FUNC_3(VAR_8);
 return ((void*)0);
    }
    FUNC_3(VAR_8);
    while(1) {
 VAR_11 = FUNC_6(VAR_6, VAR_9 + VAR_10, sizeof(VAR_9) - VAR_10);
 if(VAR_11 <= 0)
     break;
 VAR_10 += VAR_11;
    }
    VAR_9[VAR_10] = '\0';
    FUNC_1(VAR_6);
    VAR_12 = FUNC_9(VAR_9, "\r\n\r\n");
    if(VAR_12) VAR_12 += 4;
    else return ((void*)0);
    VAR_13 = ((void*)0);
    VAR_12 = FUNC_10(VAR_12, " \t\r\n", &VAR_13);
    if(VAR_12 == ((void*)0))
 return ((void*)0);
    {


 static struct hostent VAR_15;
 static char VAR_16[4 * 16];
 static char *VAR_17[16 + 1];
 int VAR_18 = 0;

 VAR_15.h_name = VAR_12;
 VAR_15.h_aliases = ((void*)0);
 VAR_15.h_addrtype = VAR_0;
 VAR_15.h_length = 4;

 while((VAR_12 = FUNC_10(((void*)0), " \t\r\n", &VAR_13)) && VAR_18 < 16) {
     struct in_addr VAR_19;
     FUNC_4(VAR_12, &VAR_19);
     VAR_19.s_addr = FUNC_5(VAR_19.s_addr);
     VAR_17[VAR_18] = &VAR_16[VAR_18 * 4];
     VAR_16[VAR_18 * 4 + 0] = (VAR_19.s_addr >> 24) & 0xff;
     VAR_16[VAR_18 * 4 + 1] = (VAR_19.s_addr >> 16) & 0xff;
     VAR_16[VAR_18 * 4 + 2] = (VAR_19.s_addr >> 8) & 0xff;
     VAR_16[VAR_18 * 4 + 3] = (VAR_19.s_addr >> 0) & 0xff;
     VAR_17[++VAR_18] = ((void*)0);
 }
 VAR_15.h_addr_list = VAR_17;
 return &VAR_15;
    }
}
