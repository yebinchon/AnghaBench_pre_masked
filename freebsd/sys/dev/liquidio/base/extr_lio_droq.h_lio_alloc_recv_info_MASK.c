
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lio_recv_pkt {int dummy; } ;
struct lio_recv_info {int * rsvd; struct lio_recv_pkt* recv_pkt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int,int ,int) ;

__attribute__((used)) static inline struct lio_recv_info *
FUNC_1(int VAR_5)
{
 struct lio_recv_info *VAR_6;
 uint8_t *VAR_7;

 VAR_7 = FUNC_0(VAR_1 + VAR_0 +
       VAR_5, VAR_2, VAR_3 | VAR_4);
 if (VAR_7 == ((void*)0))
  return (((void*)0));

 VAR_6 = (struct lio_recv_info *)VAR_7;
 VAR_6->recv_pkt = (struct lio_recv_pkt *)(VAR_7 + VAR_0);
 VAR_6->rsvd = ((void*)0);
 if (VAR_5)
  VAR_6->rsvd = VAR_7 + VAR_0 + VAR_1;

 return (VAR_6);
}
