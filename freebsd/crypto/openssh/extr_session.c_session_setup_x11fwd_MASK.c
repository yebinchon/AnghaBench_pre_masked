
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
struct stat {int dummy; } ;
struct ssh {int dummy; } ;
struct in_addr {int dummy; } ;
struct hostent {int * h_addr_list; } ;
typedef int hostname ;
struct TYPE_7__ {int permit_x11_forwarding_flag; } ;
struct TYPE_6__ {scalar_t__ x11_use_localhost; int x11_display_offset; int * xauth_location; int x11_forwarding; } ;
struct TYPE_5__ {int display_number; int* x11_chanids; int screen; void* auth_display; int * display; int single_connection; } ;
typedef TYPE_1__ Session ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (struct ssh*,int,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 struct hostent* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 char* FUNC_6 (struct in_addr) ;
 int FUNC_7 (struct in_addr*,int ,int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 int FUNC_9 (char*,int,char*,...) ;
 int FUNC_10 (int *,struct stat*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct ssh*,int ,scalar_t__,int ,int*,int**) ;
 void* FUNC_13 (char*) ;

int
FUNC_14(struct ssh *VAR_5, Session *VAR_6)
{
 struct stat VAR_7;
 char VAR_8[512], VAR_9[512];
 char VAR_10[VAR_0];
 u_int VAR_11;

 if (!VAR_1->permit_x11_forwarding_flag) {
  FUNC_8("X11 forwarding disabled by key options.");
  return 0;
 }
 if (!VAR_3.x11_forwarding) {
  FUNC_1("X11 forwarding disabled in server configuration file.");
  return 0;
 }
 if (VAR_3.xauth_location == ((void*)0) ||
     (FUNC_10(VAR_3.xauth_location, &VAR_7) == -1)) {
  FUNC_8("No xauth program; cannot forward X11.");
  return 0;
 }
 if (VAR_6->display != ((void*)0)) {
  FUNC_1("X11 display already set.");
  return 0;
 }
 if (FUNC_12(VAR_5, VAR_3.x11_display_offset,
     VAR_3.x11_use_localhost, VAR_6->single_connection,
     &VAR_6->display_number, &VAR_6->x11_chanids) == -1) {
  FUNC_1("x11_create_display_inet failed.");
  return 0;
 }
 for (VAR_11 = 0; VAR_6->x11_chanids[VAR_11] != -1; VAR_11++) {
  FUNC_0(VAR_5, VAR_6->x11_chanids[VAR_11],
      VAR_4, 0);
 }


 if (FUNC_5(VAR_10, sizeof(VAR_10)) < 0)
  FUNC_3("gethostname: %.100s", FUNC_11(VAR_2));





 if (VAR_3.x11_use_localhost) {
  FUNC_9(VAR_8, sizeof VAR_8, "localhost:%u.%u",
      VAR_6->display_number, VAR_6->screen);
  FUNC_9(VAR_9, sizeof VAR_9, "unix:%u.%u",
      VAR_6->display_number, VAR_6->screen);
  VAR_6->display = FUNC_13(VAR_8);
  VAR_6->auth_display = FUNC_13(VAR_9);
 } else {
  FUNC_9(VAR_8, sizeof VAR_8, "%.400s:%u.%u", VAR_10,
      VAR_6->display_number, VAR_6->screen);

  VAR_6->display = FUNC_13(VAR_8);
  VAR_6->auth_display = FUNC_13(VAR_8);
 }

 return 1;
}
