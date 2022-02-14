
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ first_time; } ;
typedef TYPE_1__ unit_t ;
struct TYPE_7__ {int fd; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;
 scalar_t__ FUNC_1 (int ,int*,int*,TYPE_1__**) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(pcap_t *VAR_1) {
 int VAR_2, VAR_3;
 unit_t *VAR_4;

 if (FUNC_1(VAR_1->fd, &VAR_2, &VAR_3, &VAR_4) == 0)
  return;
 FUNC_0(VAR_2, VAR_3, VAR_0);
 if (VAR_4)
  VAR_4->first_time = 0;
 FUNC_2(VAR_1);
}
