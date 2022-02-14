
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {scalar_t__ result; int fd; int saved_mode; } ;
typedef TYPE_1__ isc_keyboard_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int,int ,int *) ;

isc_result_t
FUNC_4(isc_keyboard_t *VAR_3, unsigned int VAR_4) {
 FUNC_0(VAR_3 != ((void*)0));

 if (VAR_4 > 0 && VAR_3->result != VAR_0)
  (void)FUNC_2(VAR_4);

 (void)FUNC_3(VAR_3->fd, VAR_2, &VAR_3->saved_mode);
 (void)FUNC_1(VAR_3->fd);

 VAR_3->fd = -1;

 return (VAR_1);
}
