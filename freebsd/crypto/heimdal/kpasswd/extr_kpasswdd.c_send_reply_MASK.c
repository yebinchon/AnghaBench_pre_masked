
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
struct sockaddr {int dummy; } ;
struct msghdr {int msg_namelen; int msg_iovlen; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; void* msg_name; } ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int msghdr ;
struct TYPE_4__ {int length; char* data; } ;
typedef TYPE_1__ krb5_data ;
typedef int iov ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct msghdr*,int ,int) ;
 scalar_t__ FUNC_2 (int,struct msghdr*,int ) ;

__attribute__((used)) static void
FUNC_3 (int VAR_2,
     struct sockaddr *VAR_3,
     int VAR_4,
     krb5_data *VAR_5,
     krb5_data *VAR_6)
{
    struct msghdr VAR_7;
    struct iovec VAR_8[3];
    uint16_t VAR_9, VAR_10;
    u_char VAR_11[6];
    u_char *VAR_12;

    if (VAR_5)
 VAR_10 = VAR_5->length;
    else
 VAR_10 = 0;

    VAR_9 = 6 + VAR_10 + VAR_6->length;
    VAR_12 = VAR_11;
    *VAR_12++ = (VAR_9 >> 8) & 0xFF;
    *VAR_12++ = (VAR_9 >> 0) & 0xFF;
    *VAR_12++ = 0;
    *VAR_12++ = 1;
    *VAR_12++ = (VAR_10 >> 8) & 0xFF;
    *VAR_12++ = (VAR_10 >> 0) & 0xFF;

    FUNC_1 (&VAR_7, 0, sizeof(VAR_7));
    VAR_7.msg_name = (void *)VAR_3;
    VAR_7.msg_namelen = VAR_4;
    VAR_7.msg_iov = VAR_8;
    VAR_7.msg_iovlen = sizeof(VAR_8)/sizeof(*VAR_8);





    VAR_8[0].iov_base = (char *)VAR_11;
    VAR_8[0].iov_len = 6;
    if (VAR_10) {
 VAR_8[1].iov_base = VAR_5->data;
 VAR_8[1].iov_len = VAR_5->length;
    } else {
 VAR_8[1].iov_base = ((void*)0);
 VAR_8[1].iov_len = 0;
    }
    VAR_8[2].iov_base = VAR_6->data;
    VAR_8[2].iov_len = VAR_6->length;

    if (FUNC_2 (VAR_2, &VAR_7, 0) < 0)
 FUNC_0 (VAR_0, VAR_1, "sendmsg");
}
