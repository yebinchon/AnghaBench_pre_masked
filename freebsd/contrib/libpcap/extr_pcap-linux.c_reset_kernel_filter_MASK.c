
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ pcap_t ;
typedef int dummy ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_1(pcap_t *VAR_5)
{
 int VAR_6;






 int VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_5->fd, VAR_2, VAR_3,
       &VAR_7, sizeof(VAR_7));







 if (VAR_6 == -1 && VAR_4 != VAR_0 && VAR_4 != VAR_1)
  return -1;
 return 0;
}
