
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sn_type; } ;
union sctp_notification {TYPE_1__ sn_header; } ;
struct msghdr {int msg_flags; int msg_iovlen; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int snp ;
struct TYPE_8__ {int notification_context; int (* handle_notifications ) (TYPE_3__*,int ,void*) ;} ;
typedef TYPE_2__ bio_dgram_sctp_data ;
struct TYPE_9__ {int num; scalar_t__ ptr; } ;
typedef TYPE_3__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*,union sctp_notification*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (union sctp_notification*,int ,int) ;
 int FUNC_3 (int ,struct msghdr*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,void*) ;

int FUNC_5(BIO *VAR_6)
{
    int VAR_7, VAR_8;
    union sctp_notification VAR_9;
    struct msghdr VAR_10;
    struct iovec VAR_11;
    bio_dgram_sctp_data *VAR_12 = (bio_dgram_sctp_data *) VAR_6->ptr;


    do {
        FUNC_2(&VAR_9, 0, sizeof(VAR_9));
        VAR_11.iov_base = (char *)&VAR_9;
        VAR_11.iov_len = sizeof(union sctp_notification);
        VAR_10.msg_name = ((void*)0);
        VAR_10.msg_namelen = 0;
        VAR_10.msg_iov = &VAR_11;
        VAR_10.msg_iovlen = 1;
        VAR_10.msg_control = ((void*)0);
        VAR_10.msg_controllen = 0;
        VAR_10.msg_flags = 0;

        VAR_8 = FUNC_1(VAR_6->num, VAR_0, 0);
        FUNC_1(VAR_6->num, VAR_1, VAR_4);
        VAR_7 = FUNC_3(VAR_6->num, &VAR_10, VAR_3);
        FUNC_1(VAR_6->num, VAR_1, VAR_8);


        if (VAR_7 > 0 && (VAR_10.msg_flags & VAR_2)) {





            FUNC_2(&VAR_9, 0, sizeof(VAR_9));
            VAR_11.iov_base = (char *)&VAR_9;
            VAR_11.iov_len = sizeof(union sctp_notification);
            VAR_10.msg_name = ((void*)0);
            VAR_10.msg_namelen = 0;
            VAR_10.msg_iov = &VAR_11;
            VAR_10.msg_iovlen = 1;
            VAR_10.msg_control = ((void*)0);
            VAR_10.msg_controllen = 0;
            VAR_10.msg_flags = 0;
            VAR_7 = FUNC_3(VAR_6->num, &VAR_10, 0);

            if (VAR_12->handle_notifications != ((void*)0))
                VAR_12->handle_notifications(VAR_6, VAR_12->notification_context,
                                           (void *)&VAR_9);
        }

    } while (VAR_7 > 0 && (VAR_10.msg_flags & VAR_2));


    if (VAR_7 > 0)
        return 1;
    else
        return 0;
}
