
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sn_type; } ;
union sctp_notification {int se_on; int sctp_sender_dry_event; TYPE_1__ sn_header; scalar_t__ se_type; scalar_t__ se_assoc_id; } ;
struct sctp_event_subscribe {int se_on; int sctp_sender_dry_event; TYPE_1__ sn_header; scalar_t__ se_type; scalar_t__ se_assoc_id; } ;
struct sctp_event {int dummy; } ;
struct msghdr {int msg_iovlen; int msg_flags; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int socklen_t ;
typedef int snp ;
typedef int event ;
struct TYPE_8__ {int notification_context; int (* handle_notifications ) (TYPE_3__*,int ,void*) ;} ;
typedef TYPE_2__ bio_dgram_sctp_data ;
struct TYPE_9__ {int num; scalar_t__ ptr; } ;
typedef TYPE_3__ BIO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (TYPE_3__*,union sctp_notification*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,union sctp_notification*,int*) ;
 int FUNC_4 (union sctp_notification*,int ,int) ;
 int FUNC_5 (int ,struct msghdr*,int ) ;
 int FUNC_6 (int ,int ,int ,union sctp_notification*,int) ;
 int FUNC_7 (TYPE_3__*,int ,void*) ;

int FUNC_8(BIO *VAR_12)
{
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15, VAR_16;
    union sctp_notification VAR_17;
    struct msghdr VAR_18;
    struct iovec VAR_19;



    struct sctp_event_subscribe VAR_20;
    socklen_t VAR_21;

    bio_dgram_sctp_data *VAR_22 = (bio_dgram_sctp_data *) VAR_12->ptr;
    VAR_21 = sizeof(struct sctp_event_subscribe);
    VAR_16 = FUNC_3(VAR_12->num, VAR_4, VAR_10, &VAR_20, &VAR_21);
    if (VAR_16 < 0)
        return -1;

    VAR_20.sctp_sender_dry_event = 1;

    VAR_16 =
        FUNC_6(VAR_12->num, VAR_4, VAR_10, &VAR_20,
                   sizeof(struct sctp_event_subscribe));

    if (VAR_16 < 0)
        return -1;


    FUNC_4(&VAR_17, 0, sizeof(VAR_17));
    VAR_19.iov_base = (char *)&VAR_17;
    VAR_19.iov_len = sizeof(union sctp_notification);
    VAR_18.msg_name = ((void*)0);
    VAR_18.msg_namelen = 0;
    VAR_18.msg_iov = &VAR_19;
    VAR_18.msg_iovlen = 1;
    VAR_18.msg_control = ((void*)0);
    VAR_18.msg_controllen = 0;
    VAR_18.msg_flags = 0;

    VAR_15 = FUNC_5(VAR_12->num, &VAR_18, VAR_6);
    if (VAR_15 <= 0) {
        if ((VAR_15 < 0) && (FUNC_2() != VAR_0)
            && (FUNC_2() != VAR_1))
            return -1;
        else
            return 0;
    }


    while (VAR_18.msg_flags & VAR_5) {
        FUNC_4(&VAR_17, 0, sizeof(VAR_17));
        VAR_19.iov_base = (char *)&VAR_17;
        VAR_19.iov_len = sizeof(union sctp_notification);
        VAR_18.msg_name = ((void*)0);
        VAR_18.msg_namelen = 0;
        VAR_18.msg_iov = &VAR_19;
        VAR_18.msg_iovlen = 1;
        VAR_18.msg_control = ((void*)0);
        VAR_18.msg_controllen = 0;
        VAR_18.msg_flags = 0;

        VAR_15 = FUNC_5(VAR_12->num, &VAR_18, 0);
        if (VAR_15 <= 0) {
            if ((VAR_15 < 0) && (FUNC_2() != VAR_0)
                && (FUNC_2() != VAR_1))
                return -1;
            else
                return VAR_13;
        }

        if (VAR_17.sn_header.sn_type == VAR_11) {
            VAR_13 = 1;
            VAR_21 = (socklen_t) sizeof(struct sctp_event_subscribe);
            VAR_16 =
                FUNC_3(VAR_12->num, VAR_4, VAR_10, &VAR_20,
                           &VAR_21);
            if (VAR_16 < 0)
                return -1;

            VAR_20.sctp_sender_dry_event = 0;

            VAR_16 =
                FUNC_6(VAR_12->num, VAR_4, VAR_10, &VAR_20,
                           sizeof(struct sctp_event_subscribe));

            if (VAR_16 < 0)
                return -1;
        }





        if (VAR_22->handle_notifications != ((void*)0))
            VAR_22->handle_notifications(VAR_12, VAR_22->notification_context,
                                       (void *)&VAR_17);


        FUNC_4(&VAR_17, 0, sizeof(VAR_17));
        VAR_19.iov_base = (char *)&VAR_17;
        VAR_19.iov_len = sizeof(union sctp_notification);
        VAR_18.msg_name = ((void*)0);
        VAR_18.msg_namelen = 0;
        VAR_18.msg_iov = &VAR_19;
        VAR_18.msg_iovlen = 1;
        VAR_18.msg_control = ((void*)0);
        VAR_18.msg_controllen = 0;
        VAR_18.msg_flags = 0;


        if (VAR_13) {
            VAR_14 = FUNC_1(VAR_12->num, VAR_2, 0);
            FUNC_1(VAR_12->num, VAR_3, VAR_7);
        }

        VAR_15 = FUNC_5(VAR_12->num, &VAR_18, VAR_6);

        if (VAR_13) {
            FUNC_1(VAR_12->num, VAR_3, VAR_14);
        }

        if (VAR_15 <= 0) {
            if ((VAR_15 < 0) && (FUNC_2() != VAR_0)
                && (FUNC_2() != VAR_1))
                return -1;
            else
                return VAR_13;
        }
    }


    return VAR_13;
}
