
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int errcode; void* errtype; } ;
struct TYPE_5__ {int* sockets; TYPE_1__ error; } ;
typedef TYPE_2__ ifconfig_handle_t ;


 int const VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const,int ,int ) ;

int
FUNC_1(ifconfig_handle_t *VAR_5, const int VAR_6, int *VAR_7)
{

 if (VAR_6 > VAR_0) {
  VAR_5->error.errtype = VAR_2;
  VAR_5->error.errcode = VAR_1;
  return (-1);
 }

 if (VAR_5->sockets[VAR_6] != -1) {
  *VAR_7 = VAR_5->sockets[VAR_6];
  return (0);
 }


 VAR_5->sockets[VAR_6] = FUNC_0(VAR_6, VAR_3, 0);
 if (VAR_5->sockets[VAR_6] == -1) {
  VAR_5->error.errtype = VAR_2;
  VAR_5->error.errcode = VAR_4;
  return (-1);
 }

 *VAR_7 = VAR_5->sockets[VAR_6];
 return (0);
}
