
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct udphdr {int uh_sum; int uh_sport; int uh_ulen; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct ip {int ip_src; int ip_len; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

ssize_t
FUNC_6(unsigned char *VAR_1, int VAR_2, struct sockaddr_in *VAR_3,
    unsigned char *VAR_4, int VAR_5)
{
 struct ip *VAR_6;
 struct udphdr *VAR_7;
 u_int32_t VAR_8 = (VAR_1[VAR_2] & 0xf) << 2;
 u_int32_t VAR_9, VAR_10;
 static int VAR_11;
 static int VAR_12;
 static int VAR_13;
 static int VAR_14;
 static int VAR_15;
 static int VAR_16;
 int VAR_17 = 0;

 VAR_6 = (struct ip *)(VAR_1 + VAR_2);
 VAR_7 = (struct udphdr *)(VAR_1 + VAR_2 + VAR_8);


 VAR_11++;
 if (FUNC_5(FUNC_0(VAR_1 + VAR_2, VAR_8, 0)) != 0) {
  VAR_12++;
  if (VAR_11 > 4 && VAR_12 != 0 &&
      (VAR_11 / VAR_12) < 2) {
   FUNC_3("%d bad IP checksums seen in %d packets",
       VAR_12, VAR_11);
   VAR_11 = VAR_12 = 0;
  }
  return (-1);
 }

 if (FUNC_4(VAR_6->ip_len) != VAR_5)
  FUNC_1("ip length %d disagrees with bytes received %d.",
      FUNC_4(VAR_6->ip_len), VAR_5);

 FUNC_2(&VAR_3->sin_addr, &VAR_6->ip_src, 4);






 if (!VAR_4) {
  VAR_4 = VAR_1 + VAR_2 + VAR_8 + sizeof(*VAR_7);
  VAR_17 = FUNC_4(VAR_7->uh_ulen) - sizeof(*VAR_7);
  VAR_15++;
  if (VAR_17 + VAR_4 > VAR_1 + VAR_2 + VAR_5) {
   VAR_16++;
   if (VAR_15 > 4 &&
       (VAR_15 /
       VAR_16) < 2) {
    FUNC_3("%d udp packets in %d too long - dropped",
        VAR_16,
        VAR_15);
    VAR_16 =
        VAR_15 = 0;
   }
   return (-1);
  }
  if (VAR_17 + VAR_4 != VAR_1 + VAR_2 + VAR_5)
   FUNC_1("accepting packet with data after udp payload.");
 }

 VAR_10 = VAR_7->uh_sum;
 VAR_7->uh_sum = 0;

 VAR_9 = FUNC_5(FUNC_0((unsigned char *)VAR_7, sizeof(*VAR_7),
     FUNC_0(VAR_4, VAR_17, FUNC_0((unsigned char *)&VAR_6->ip_src,
     2 * sizeof(VAR_6->ip_src),
     VAR_0 + (u_int32_t)FUNC_4(VAR_7->uh_ulen)))));

 VAR_13++;
 if (VAR_10 && VAR_10 != VAR_9) {
  VAR_14++;
  if (VAR_13 > 4 && VAR_14 != 0 &&
      (VAR_13 / VAR_14) < 2) {
   FUNC_3("%d bad udp checksums in %d packets",
       VAR_14, VAR_13);
   VAR_13 = VAR_14 = 0;
  }
  return (-1);
 }

 FUNC_2(&VAR_3->sin_port, &VAR_7->uh_sport, sizeof(VAR_7->uh_sport));

 return (VAR_8 + sizeof(*VAR_7));
}
