
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct if_encap_req {scalar_t__ rtype; scalar_t__ bufsize; scalar_t__ lladdr_len; int family; scalar_t__ lladdr_off; int lladdr; int buf; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct ifnet *VAR_4, struct if_encap_req *VAR_5)
{

 if (VAR_5->rtype != VAR_3)
  return (VAR_2);

 if (VAR_5->bufsize < VAR_5->lladdr_len)
  return (VAR_1);

 switch (VAR_5->family) {
 case 129:
 case 128:
  break;
 default:
  return (VAR_0);
 }


 FUNC_0(VAR_5->buf, VAR_5->lladdr, VAR_5->lladdr_len);
 VAR_5->bufsize = VAR_5->lladdr_len;
 VAR_5->lladdr_off = 0;

 return (0);
}
