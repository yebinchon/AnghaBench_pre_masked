
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pingfakehdr {int wcheck; int iov; } ;
struct icmphdr {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,int ,int,int,int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, char * VAR_2,
   int VAR_3, int VAR_4, int VAR_5, struct sk_buff *VAR_6)
{
 struct pingfakehdr *VAR_7 = (struct pingfakehdr *)VAR_1;

 if (VAR_3 == 0) {
  if (VAR_4 < sizeof(struct icmphdr))
   FUNC_0();
  if (FUNC_1(VAR_2 + sizeof(struct icmphdr),
       VAR_7->iov, 0, VAR_4 - sizeof(struct icmphdr),
       &VAR_7->wcheck))
   return -VAR_0;

  return 0;
 }
 if (VAR_3 < sizeof(struct icmphdr))
  FUNC_0();
 if (FUNC_1
   (VAR_2, VAR_7->iov, VAR_3 - sizeof(struct icmphdr),
    VAR_4, &VAR_7->wcheck))
  return -VAR_0;
 return 0;
}
