
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sctp_sndrcvinfo {int sinfo_timetolive; int snd_context; int sinfo_context; int snd_ppid; int sinfo_ppid; int sinfo_flags; int snd_flags; int snd_sid; int sinfo_stream; int pr_value; int pr_policy; } ;
struct sctp_sndinfo {int sinfo_timetolive; int snd_context; int sinfo_context; int snd_ppid; int sinfo_ppid; int sinfo_flags; int snd_flags; int snd_sid; int sinfo_stream; int pr_value; int pr_policy; } ;
struct sctp_prinfo {int sinfo_timetolive; int snd_context; int sinfo_context; int snd_ppid; int sinfo_ppid; int sinfo_flags; int snd_flags; int snd_sid; int sinfo_stream; int pr_value; int pr_policy; } ;
struct msghdr {int msg_iovlen; scalar_t__ msg_controllen; scalar_t__ msg_flags; scalar_t__ msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {char* iov_base; int iov_len; } ;
struct cmsghdr {void* cmsg_len; int cmsg_type; void* cmsg_level; } ;
struct bio_dgram_sctp_sndinfo {int sinfo_timetolive; int snd_context; int sinfo_context; int snd_ppid; int sinfo_ppid; int sinfo_flags; int snd_flags; int snd_sid; int sinfo_stream; int pr_value; int pr_policy; } ;
struct bio_dgram_sctp_prinfo {int pr_value; int pr_policy; } ;
typedef int handshake_sinfo ;
typedef scalar_t__ caddr_t ;
struct TYPE_7__ {int _errno; scalar_t__ save_shutdown; struct bio_dgram_sctp_prinfo prinfo; struct sctp_sndrcvinfo sndinfo; } ;
typedef TYPE_1__ bio_dgram_sctp_data ;
struct TYPE_8__ {int num; scalar_t__ ptr; } ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct cmsghdr*) ;
 void* FUNC_5 (int) ;
 size_t FUNC_6 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct sctp_sndrcvinfo*,int ,int) ;
 int FUNC_10 (int ,struct msghdr*,int ) ;

__attribute__((used)) static int FUNC_11(BIO *VAR_5, const char *VAR_6, int VAR_7)
{
    int VAR_8;
    bio_dgram_sctp_data *VAR_9 = (bio_dgram_sctp_data *) VAR_5->ptr;
    struct bio_dgram_sctp_sndinfo *VAR_10 = &(VAR_9->sndinfo);
    struct bio_dgram_sctp_prinfo *VAR_11 = &(VAR_9->prinfo);
    struct bio_dgram_sctp_sndinfo VAR_12;
    struct iovec VAR_13[1];
    struct msghdr VAR_14;
    struct cmsghdr *VAR_15;






    char VAR_16[FUNC_6(sizeof(struct sctp_sndrcvinfo))];
    struct sctp_sndrcvinfo *VAR_17;


    FUNC_7();





    if (VAR_6[0] != 23) {
        FUNC_9(&VAR_12, 0, sizeof(VAR_12));



        VAR_10 = &VAR_12;
    }


    if (VAR_9->save_shutdown) {
        VAR_8 = FUNC_1(VAR_5);
        if (VAR_8 < 0)
            return -1;
        if (VAR_8 == 0) {
            FUNC_0(VAR_5);
            FUNC_3(VAR_5);
            return -1;
        }
    }

    VAR_13[0].iov_base = (char *)VAR_6;
    VAR_13[0].iov_len = VAR_7;
    VAR_14.msg_name = ((void*)0);
    VAR_14.msg_namelen = 0;
    VAR_14.msg_iov = VAR_13;
    VAR_14.msg_iovlen = 1;
    VAR_14.msg_control = (caddr_t) VAR_16;
    VAR_14.msg_controllen = 0;
    VAR_14.msg_flags = 0;
    VAR_15 = (struct cmsghdr *)VAR_16;
    VAR_15->cmsg_level = VAR_0;
    VAR_15->cmsg_type = VAR_4;
    VAR_15->cmsg_len = FUNC_5(sizeof(struct sctp_sndrcvinfo));
    VAR_17 = (struct sctp_sndrcvinfo *)FUNC_4(VAR_15);
    FUNC_9(VAR_17, 0, sizeof(*VAR_17));
    VAR_17->sinfo_stream = VAR_10->snd_sid;
    VAR_17->sinfo_flags = VAR_10->snd_flags;



    VAR_17->sinfo_ppid = VAR_10->snd_ppid;
    VAR_17->sinfo_context = VAR_10->snd_context;
    VAR_17->sinfo_timetolive = VAR_11->pr_value;
    VAR_14.msg_controllen += FUNC_6(sizeof(struct sctp_sndrcvinfo));


    VAR_8 = FUNC_10(VAR_5->num, &VAR_14, 0);

    FUNC_0(VAR_5);
    if (VAR_8 <= 0) {
        if (FUNC_2(VAR_8)) {
            FUNC_3(VAR_5);
            VAR_9->_errno = FUNC_8();
        }
    }
    return VAR_8;
}
