
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct iphdr {int dummy; } ;
struct ip_options {scalar_t__ srr; scalar_t__ rr; scalar_t__ ts; scalar_t__ router_alert; size_t cipso; unsigned char* __data; size_t optlen; } ;
struct TYPE_2__ {int rcu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (struct ip_options*) ;
 int FUNC_2 (unsigned char*,unsigned char*,size_t) ;
 int VAR_1 ;

int FUNC_3(struct ip_options **VAR_2)
{
 int VAR_3 = 0;
 struct ip_options *VAR_4 = *VAR_2;

 if (VAR_4->srr || VAR_4->rr || VAR_4->ts || VAR_4->router_alert) {
  u8 VAR_5;
  u8 VAR_6;
  unsigned char *VAR_7;
  int VAR_8;
  int VAR_9;

  VAR_6 = VAR_4->cipso - sizeof(struct iphdr);
  VAR_7 = &VAR_4->__data[VAR_6];
  VAR_5 = VAR_7[1];

  if (VAR_4->srr > VAR_4->cipso)
   VAR_4->srr -= VAR_5;
  if (VAR_4->rr > VAR_4->cipso)
   VAR_4->rr -= VAR_5;
  if (VAR_4->ts > VAR_4->cipso)
   VAR_4->ts -= VAR_5;
  if (VAR_4->router_alert > VAR_4->cipso)
   VAR_4->router_alert -= VAR_5;
  VAR_4->cipso = 0;

  FUNC_2(VAR_7, VAR_7 + VAR_5,
   VAR_4->optlen - VAR_6 - VAR_5);






  VAR_8 = 0;
  VAR_9 = 0;
  while (VAR_8 < VAR_4->optlen)
   if (VAR_4->__data[VAR_8] != VAR_0) {
    VAR_8 += VAR_4->__data[VAR_8 + 1];
    VAR_9 = VAR_8;
   } else
    VAR_8++;
  VAR_3 = VAR_4->optlen;
  VAR_4->optlen = (VAR_9 + 3) & ~3;
  VAR_3 -= VAR_4->optlen;
 } else {


  *VAR_2 = ((void*)0);
  VAR_3 = VAR_4->optlen;
  FUNC_0(&FUNC_1(VAR_4)->rcu, VAR_1);
 }

 return VAR_3;
}
