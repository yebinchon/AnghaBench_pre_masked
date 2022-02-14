
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t socklen_t ;
struct TYPE_5__ {int opcode; } ;
typedef TYPE_1__ ip_fw3_opheader ;
struct TYPE_6__ {scalar_t__ test_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int ,int ,TYPE_1__*,size_t*) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;

int
FUNC_3(int VAR_8, ip_fw3_opheader *VAR_9, size_t *VAR_10)
{
 int VAR_11;
 socklen_t VAR_12;

 if (VAR_6.test_only)
  return (0);

 if (VAR_7 == -1)
  VAR_7 = FUNC_2(VAR_0, VAR_5, VAR_3);
 if (VAR_7 < 0)
  FUNC_0(VAR_1, "socket");

 VAR_9->opcode = VAR_8;

 VAR_12 = *VAR_10;
 VAR_11 = FUNC_1(VAR_7, VAR_2, VAR_4, VAR_9, &VAR_12);
 *VAR_10 = VAR_12;

 return (VAR_11);
}
