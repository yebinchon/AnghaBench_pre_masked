
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {scalar_t__ result; int fd; } ;
typedef TYPE_1__ isc_keyboard_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;

isc_result_t
FUNC_2(isc_keyboard_t *VAR_2, unsigned int VAR_3) {
 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_3 > 0 && VAR_2->result != VAR_0)
  (void)FUNC_1(VAR_3*1000);

 VAR_2->fd = -1;

 return (VAR_1);
}
