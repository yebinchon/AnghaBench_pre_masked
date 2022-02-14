
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int isc_result_t ;
struct TYPE_3__ {int result; int fd; } ;
typedef TYPE_1__ isc_keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,unsigned char*,int) ;

isc_result_t
FUNC_2(isc_keyboard_t *VAR_2, unsigned char *VAR_3) {
 ssize_t VAR_4;
 unsigned char VAR_5;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4 = FUNC_1(VAR_2->fd, &VAR_5, 1);
 if (VAR_4 < 0) {
  VAR_2->result = VAR_0;
  return (VAR_2->result);
 }

 *VAR_3 = VAR_5;

 return (VAR_1);
}
