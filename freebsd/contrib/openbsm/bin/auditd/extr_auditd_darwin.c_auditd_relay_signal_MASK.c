
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
struct TYPE_4__ {int msgh_id; int msgh_bits; int msgh_local_port; int msgh_remote_port; } ;
struct TYPE_3__ {TYPE_2__ header; } ;
typedef TYPE_1__ mach_msg_empty_send_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int,int,int ,int ,int ,int ) ;
 int VAR_5 ;

void
FUNC_2(int VAR_6)
{
 mach_msg_empty_send_t VAR_7;

 VAR_7.header.msgh_id = VAR_6;
 VAR_7.header.msgh_remote_port = VAR_5;
 VAR_7.header.msgh_local_port = VAR_2;
 VAR_7.header.msgh_bits = FUNC_0(VAR_1, 0);
 FUNC_1(&(VAR_7.header), VAR_3|VAR_4, sizeof(VAR_7),
     0, VAR_2, VAR_0, VAR_2);
}
