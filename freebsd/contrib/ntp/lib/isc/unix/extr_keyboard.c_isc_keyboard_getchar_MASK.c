
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int isc_result_t ;
struct TYPE_4__ {unsigned char* c_cc; } ;
struct TYPE_5__ {int result; TYPE_1__ saved_mode; int fd; } ;
typedef TYPE_2__ isc_keyboard_t ;
typedef unsigned char cc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (int ,unsigned char*,int) ;

isc_result_t
FUNC_2(isc_keyboard_t *VAR_5, unsigned char *VAR_6) {
 ssize_t VAR_7;
 unsigned char VAR_8;
 cc_t *VAR_9;

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_6 != ((void*)0));

 VAR_7 = FUNC_1(VAR_5->fd, &VAR_8, 1);
 if (VAR_7 < 0) {
  VAR_5->result = VAR_1;
  return (VAR_5->result);
 }

 VAR_9 = VAR_5->saved_mode.c_cc;
 if (VAR_8 == VAR_9[VAR_3] || VAR_8 == VAR_9[VAR_4]) {
  VAR_5->result = VAR_0;
  return (VAR_5->result);
 }

 *VAR_6 = VAR_8;

 return (VAR_2);
}
