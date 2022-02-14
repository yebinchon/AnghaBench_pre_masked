
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct strbuf {int member_0; char* member_2; char* buf; int maxlen; int len; int member_1; } ;
struct TYPE_4__ {int cc; int offset; int bufsize; int * bp; scalar_t__ buffer; int errbuf; int fd; scalar_t__ break_loop; } ;
typedef TYPE_1__ pcap_t ;
typedef int pcap_handler ;
typedef int bpf_u_int32 ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct strbuf*,struct strbuf*,int*) ;
 int FUNC_1 (int ,int,int,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int,int *,int) ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_2, int VAR_3, pcap_handler VAR_4, u_char *VAR_5)
{
 int VAR_6;
 u_char *VAR_7;
 int VAR_8;
 bpf_u_int32 VAR_9[VAR_0];
 struct strbuf VAR_10 = {
  VAR_0,
  0,
  (char *)VAR_9
 };
 struct strbuf VAR_11;

 VAR_8 = 0;
 VAR_6 = VAR_2->cc;
 if (VAR_6 == 0) {
  VAR_11.buf = (char *)VAR_2->buffer + VAR_2->offset;
  VAR_11.maxlen = VAR_2->bufsize;
  VAR_11.len = 0;
  do {



   if (VAR_2->break_loop) {






    VAR_2->break_loop = 0;
    return (-2);
   }





   VAR_10.buf = (char *)VAR_9;
   VAR_10.maxlen = VAR_0;
   VAR_10.len = 0;
   if (FUNC_0(VAR_2->fd, &VAR_10, &VAR_11, &VAR_8) < 0) {

    switch (VAR_1) {

    case 128:
     VAR_6 = 0;
     continue;

    case 129:
     return (0);
    }
    FUNC_1(VAR_2->errbuf,
        sizeof(VAR_2->errbuf), VAR_1, "getmsg");
    return (-1);
   }
   VAR_6 = VAR_11.len;
  } while (VAR_6 == 0);
  VAR_7 = (u_char *)VAR_2->buffer + VAR_2->offset;
 } else
  VAR_7 = VAR_2->bp;

 return (FUNC_2(VAR_2, VAR_4, VAR_5, VAR_3, VAR_7, VAR_6));
}
