
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ my_vtag; scalar_t__ peer_vtag; scalar_t__ my_ttag; scalar_t__ peer_ttag; } ;
struct sctp_association {TYPE_1__ c; } ;



__attribute__((used)) static char FUNC_0(struct sctp_association *VAR_0,
     const struct sctp_association *VAR_1)
{

 if ((VAR_1->c.my_vtag != VAR_0->c.my_vtag) &&
     (VAR_1->c.peer_vtag != VAR_0->c.peer_vtag) &&
     (VAR_1->c.my_vtag == VAR_0->c.my_ttag) &&
     (VAR_1->c.peer_vtag == VAR_0->c.peer_ttag))
  return 'A';


 if ((VAR_1->c.my_vtag == VAR_0->c.my_vtag) &&
     ((VAR_1->c.peer_vtag != VAR_0->c.peer_vtag) ||
      (0 == VAR_1->c.peer_vtag))) {
  return 'B';
 }


 if ((VAR_1->c.my_vtag == VAR_0->c.my_vtag) &&
     (VAR_1->c.peer_vtag == VAR_0->c.peer_vtag))
  return 'D';


 if ((VAR_1->c.my_vtag != VAR_0->c.my_vtag) &&
     (VAR_1->c.peer_vtag == VAR_0->c.peer_vtag) &&
     (0 == VAR_0->c.my_ttag) &&
     (0 == VAR_0->c.peer_ttag))
  return 'C';


 return 'E';
}
