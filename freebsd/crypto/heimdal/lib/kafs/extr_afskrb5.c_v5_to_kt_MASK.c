
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uid_t ;
struct TYPE_11__ {int AuthHandle; unsigned char* HandShakeKey; int EndTimestamp; int BeginTimestamp; int ViceId; } ;
struct kafs_token {unsigned char* ticket; size_t ticket_len; TYPE_10__ ct; } ;
struct TYPE_15__ {int endtime; int starttime; } ;
struct TYPE_13__ {int length; int data; } ;
struct TYPE_14__ {TYPE_2__ keyvalue; } ;
struct TYPE_12__ {size_t length; int data; } ;
struct TYPE_16__ {TYPE_4__ times; TYPE_3__ session; TYPE_1__ ticket; } ;
typedef TYPE_5__ krb5_creds ;
struct TYPE_17__ {int tkt_vno; int enc_part; } ;
typedef TYPE_6__ Ticket ;


 int FUNC_0 (int ,unsigned char*,size_t,int *,size_t*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_10__*,int ) ;
 int FUNC_2 (int ,size_t,TYPE_6__*,size_t*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (TYPE_6__*) ;
 unsigned char* FUNC_5 (size_t) ;
 int FUNC_6 (unsigned char*,int ,int) ;

__attribute__((used)) static int
FUNC_7(krb5_creds *VAR_6, uid_t VAR_7, struct kafs_token *VAR_8, int VAR_9)
{
    int VAR_10, VAR_11;

    VAR_8->ticket = ((void*)0);


    if (VAR_6->session.keyvalue.length != 8)
 return VAR_0;

    if (VAR_9) {
 Ticket VAR_12;
 unsigned char *VAR_13;
 size_t VAR_14;
 size_t VAR_15;

 VAR_10 = VAR_3;

 VAR_11 = FUNC_2(VAR_6->ticket.data, VAR_6->ticket.length, &VAR_12, &VAR_15);
 if (VAR_11)
     return VAR_11;
 if (VAR_12.tkt_vno != 5)
     return -1;

 FUNC_0(VAR_2, VAR_13, VAR_14, &VAR_12.enc_part,
      &VAR_15, VAR_11);
 FUNC_4(&VAR_12);
 if (VAR_11)
     return VAR_11;
 if(VAR_14 != VAR_15) {
     FUNC_3(VAR_13);
     return VAR_5;
 }

 VAR_8->ticket = VAR_13;
 VAR_8->ticket_len = VAR_14;

    } else {
 VAR_10 = VAR_4;
 VAR_8->ticket = FUNC_5(VAR_6->ticket.length);
 if (VAR_8->ticket == ((void*)0))
     return VAR_1;
 VAR_8->ticket_len = VAR_6->ticket.length;
 FUNC_6(VAR_8->ticket, VAR_6->ticket.data, VAR_8->ticket_len);

 VAR_11 = 0;
    }






    VAR_8->ct.AuthHandle = VAR_10;
    FUNC_6(VAR_8->ct.HandShakeKey, VAR_6->session.keyvalue.data, 8);
    VAR_8->ct.ViceId = VAR_7;
    VAR_8->ct.BeginTimestamp = VAR_6->times.starttime;
    VAR_8->ct.EndTimestamp = VAR_6->times.endtime;

    FUNC_1(&VAR_8->ct, VAR_7);

    return 0;
}
