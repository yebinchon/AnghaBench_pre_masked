
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {int fd; int result; } ;
typedef TYPE_1__ isc_keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;

isc_result_t
FUNC_2(isc_keyboard_t *VAR_3) {
 int VAR_4;

 FUNC_0(VAR_3 != ((void*)0));

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0)
  return (VAR_0);

 VAR_3->fd = VAR_4;

 VAR_3->result = VAR_1;

 return (VAR_1);
}
