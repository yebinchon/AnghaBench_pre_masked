
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sa; } ;
struct recvbuf {int recv_length; int receiver; int recv_time; int fd; struct interface* dstadr; TYPE_1__ recv_srcadr; int recv_space; } ;
struct msghdr {int msg_namelen; int msg_iovlen; int msg_controllen; scalar_t__ msg_flags; void* msg_control; struct iovec* msg_iov; TYPE_1__* msg_name; } ;
struct iovec {int iov_len; int * iov_base; } ;
struct interface {scalar_t__ family; int received; TYPE_1__ sin; scalar_t__ ignore_packets; } ;
typedef TYPE_1__ sockaddr_u ;
typedef int l_fp ;
typedef int from ;
typedef int control ;
typedef int buf ;
typedef int SOCKET ;
typedef int GETSOCKNAME_SOCKLEN_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_4 (struct recvbuf*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct recvbuf*,struct msghdr*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct recvbuf*) ;
 struct recvbuf* FUNC_8 () ;
 int FUNC_9 (int ,char*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_10 (int ,char*,int,int ,int *,int*) ;
 int FUNC_11 (int ,struct msghdr*,int ) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static inline int
FUNC_13(
 SOCKET VAR_11,
 struct interface * VAR_12,
 l_fp VAR_13
 )
{
 GETSOCKNAME_SOCKLEN_TYPE VAR_14;
 int VAR_15;
 register struct recvbuf *VAR_16;
 VAR_16 = FUNC_8();
 if (((void*)0) == VAR_16 || VAR_12->ignore_packets) {
  char VAR_17[VAR_5];
  sockaddr_u VAR_18;

  if (VAR_16 != ((void*)0))
   FUNC_7(VAR_16);

  VAR_14 = sizeof(VAR_18);
  VAR_15 = FUNC_10(VAR_11, VAR_17, sizeof(VAR_17), 0,
      &VAR_18.sa, &VAR_14);
  FUNC_0(4, ("%s on (%lu) fd=%d from %s\n",
   (VAR_12->ignore_packets)
       ? "ignore"
       : "drop",
   FUNC_6(), VAR_11, FUNC_12(&VAR_18)));
  if (VAR_12->ignore_packets)
   VAR_8++;
  else
   VAR_7++;
  return (VAR_15);
 }

 VAR_14 = sizeof(VAR_16->recv_srcadr);


 VAR_16->recv_length = FUNC_10(VAR_11, (char *)&VAR_16->recv_space,
       sizeof(VAR_16->recv_space), 0,
       &VAR_16->recv_srcadr.sa, &VAR_14);
 VAR_15 = VAR_16->recv_length;

 if (VAR_15 == 0 || (VAR_15 == -1 &&
     (VAR_3 == VAR_6



      ))) {
  FUNC_7(VAR_16);
  return (VAR_15);
 } else if (VAR_15 < 0) {
  FUNC_9(VAR_4, "recvfrom(%s) fd=%d: %m",
   FUNC_12(&VAR_16->recv_srcadr), VAR_11);
  FUNC_0(5, ("read_network_packet: fd=%d dropped (bad recvfrom)\n",
       VAR_11));
  FUNC_7(VAR_16);
  return (VAR_15);
 }

 FUNC_0(3, ("read_network_packet: fd=%d length %d from %s\n",
      VAR_11, VAR_15, FUNC_12(&VAR_16->recv_srcadr)));
 if (VAR_0 == VAR_12->family) {
  FUNC_0(2, ("Got an IPv6 packet, from <%s> (%d) to <%s> (%d)\n",
   FUNC_12(&VAR_16->recv_srcadr),
   FUNC_1(FUNC_3(&VAR_16->recv_srcadr)),
   FUNC_12(&VAR_12->sin),
   !FUNC_1(FUNC_3(&VAR_12->sin))
   ));

  if ( FUNC_1(FUNC_3(&VAR_16->recv_srcadr))
      && !FUNC_1(FUNC_3(&VAR_12->sin))
     ) {
   VAR_7++;
   FUNC_0(2, ("DROPPING that packet\n"));
   FUNC_7(VAR_16);
   return VAR_15;
  }
  FUNC_0(2, ("processing that packet\n"));
 }





 VAR_16->dstadr = VAR_12;
 VAR_16->fd = VAR_11;




 VAR_16->recv_time = VAR_13;
 VAR_16->receiver = VAR_10;

 FUNC_4(VAR_16);

 VAR_12->received++;
 VAR_9++;
 return (VAR_15);
}
