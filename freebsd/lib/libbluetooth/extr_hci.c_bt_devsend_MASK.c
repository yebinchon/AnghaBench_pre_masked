
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct iovec {int iov_len; TYPE_1__* iov_base; } ;
struct TYPE_2__ {size_t length; int opcode; int type; } ;
typedef TYPE_1__ ng_hci_cmd_pkt_t ;
typedef int h ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,struct iovec*,int) ;

int
FUNC_2(int VAR_6, uint16_t VAR_7, void *VAR_8, size_t VAR_9)
{
 ng_hci_cmd_pkt_t VAR_10;
 struct iovec VAR_11[2];
 int VAR_12;

 if ((VAR_9 == 0 && VAR_8 != ((void*)0)) ||
     (VAR_9 > 0 && VAR_8 == ((void*)0)) ||
     VAR_9 > VAR_4) {
  VAR_5 = VAR_2;
  return (-1);
 }

 VAR_11[0].iov_base = &VAR_10;
 VAR_11[0].iov_len = sizeof(VAR_10);
 VAR_12 = 1;

 VAR_10.type = VAR_3;
 VAR_10.opcode = FUNC_0(VAR_7);
 if (VAR_9 > 0) {
  VAR_10.length = VAR_9;

  VAR_11[1].iov_base = VAR_8;
  VAR_11[1].iov_len = VAR_9;
  VAR_12 = 2;
 } else
  VAR_10.length = 0;

 while (FUNC_1(VAR_6, VAR_11, VAR_12) < 0) {
  if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
   continue;

  return (-1);
 }

 return (0);
}
