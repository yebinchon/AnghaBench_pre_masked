
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int time_t ;
typedef int krb5_socket_t ;
struct TYPE_7__ {char* data; int length; } ;
typedef TYPE_1__ krb5_data ;


 int FUNC_0 (char*,unsigned long*,int) ;
 int FUNC_1 (char**,char*,char const*,char*) ;
 int FUNC_2 (char*,int,char**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,char*,unsigned long) ;
 int FUNC_7 (int ,char*,int ) ;
 char* FUNC_8 (char*,int) ;
 int FUNC_9 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char*) ;

__attribute__((used)) static int
FUNC_12(krb5_socket_t VAR_0,
     time_t VAR_1,
     const char *VAR_2,
     const krb5_data *VAR_3,
     krb5_data *VAR_4)
{
    char *VAR_5 = ((void*)0);
    char *VAR_6;
    int VAR_7;
    int VAR_8 = FUNC_2(VAR_3->data, VAR_3->length, &VAR_6);

    if(VAR_8 < 0)
 return -1;
    VAR_7 = FUNC_1(&VAR_5, "GET %s%s HTTP/1.0\r\n\r\n", VAR_2, VAR_6);
    FUNC_3(VAR_6);
    if (VAR_7 < 0 || VAR_5 == ((void*)0))
 return -1;
    VAR_7 = FUNC_7 (VAR_0, VAR_5, FUNC_10(VAR_5));
    FUNC_3 (VAR_5);
    if (VAR_7 < 0)
 return VAR_7;
    VAR_7 = FUNC_9(VAR_0, VAR_1, 0, 0, VAR_4);
    if(VAR_7)
 return VAR_7;
    {
 unsigned long VAR_9;
 char *VAR_10, *VAR_11;

 VAR_10 = FUNC_8(VAR_4->data, VAR_4->length + 1);
 if (VAR_10 == ((void*)0)) {
     FUNC_4 (VAR_4);
     return -1;
 }
 VAR_10[VAR_4->length] = 0;
 VAR_11 = FUNC_11(VAR_10, "\r\n\r\n");
 if(VAR_11 == ((void*)0)) {
     FUNC_5(VAR_4);
     FUNC_3(VAR_10);
     return -1;
 }
 VAR_11 += 4;
 VAR_4->data = VAR_10;
 VAR_4->length -= VAR_11 - VAR_10;
 if(VAR_4->length < 4) {
     FUNC_5(VAR_4);
     FUNC_3(VAR_10);
     return -1;
 }
 VAR_4->length -= 4;
 FUNC_0(VAR_11, &VAR_9, 4);
 if (VAR_9 != VAR_4->length) {
     FUNC_5(VAR_4);
     FUNC_3(VAR_10);
     return -1;
 }
 FUNC_6(VAR_4->data, VAR_11 + 4, VAR_4->length);
    }
    return 0;
}
