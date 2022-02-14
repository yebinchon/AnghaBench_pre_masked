
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct udpiphdr {scalar_t__ ui_len; int ui_x1; } ;
struct udphdr {scalar_t__ uh_ulen; scalar_t__ uh_dport; scalar_t__ uh_sum; } ;
struct ip {int dummy; } ;
struct iodesc {scalar_t__ myport; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (struct udpiphdr*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct iodesc*,void**,void**,int ,int ) ;

ssize_t
FUNC_6(struct iodesc *VAR_2, void **VAR_3, void **VAR_4, time_t VAR_5)
{
 ssize_t VAR_6;
 struct udphdr *VAR_7;
 void *VAR_8;






 VAR_7 = ((void*)0);
 VAR_8 = ((void*)0);
 VAR_6 = FUNC_5(VAR_2, &VAR_8, (void **)&VAR_7, VAR_5, VAR_0);
 if (VAR_6 == -1 || VAR_6 < sizeof(*VAR_7) || VAR_6 != FUNC_3(VAR_7->uh_ulen)) {
  FUNC_1(VAR_8);
  return (-1);
 }

 if (VAR_7->uh_dport != VAR_2->myport) {





  FUNC_1(VAR_8);
  return (-1);
 }


 if (VAR_7->uh_sum) {
  struct udpiphdr *VAR_9;
  struct ip *VAR_10;
  struct ip VAR_11;

  VAR_6 = FUNC_3(VAR_7->uh_ulen) + sizeof(*VAR_10);


  VAR_10 = (struct ip *)VAR_7 - 1;
  VAR_11 = *VAR_10;
  VAR_9 = (struct udpiphdr *)VAR_10;
  FUNC_0(&VAR_9->ui_x1, sizeof(VAR_9->ui_x1));
  VAR_9->ui_len = VAR_7->uh_ulen;
  if (FUNC_2(VAR_9, VAR_6) != 0) {




   FUNC_1(VAR_8);
   return (-1);
  }
  *VAR_10 = VAR_11;
 }

 if (FUNC_3(VAR_7->uh_ulen) < sizeof(*VAR_7)) {





  FUNC_1(VAR_8);
  return (-1);
 }

 VAR_6 = (VAR_6 > (FUNC_3(VAR_7->uh_ulen) - sizeof(*VAR_7))) ?
     FUNC_3(VAR_7->uh_ulen) - sizeof(*VAR_7) : VAR_6;
 *VAR_3 = VAR_8;
 *VAR_4 = (void *)((uintptr_t)VAR_7 + sizeof(*VAR_7));
 return (VAR_6);
}
