
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int res ;
struct TYPE_11__ {int argop; } ;
typedef TYPE_3__ nfs_argop4 ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int caddr_t ;
typedef int arg ;
struct TYPE_13__ {int * cl_auth; } ;
struct TYPE_10__ {int argarray_len; TYPE_3__* argarray_val; } ;
struct TYPE_9__ {char* utf8string_val; int utf8string_len; } ;
struct TYPE_12__ {TYPE_2__ argarray; TYPE_1__ tag; scalar_t__ minorversion; } ;
typedef int COMPOUND4res ;
typedef TYPE_4__ COMPOUND4args ;
typedef TYPE_5__ CLIENT ;
typedef int AUTH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_5__*,int ,int ,int ,int ,int ,struct timeval) ;
 TYPE_5__* FUNC_3 (char*,int ,int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int volatile*) ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_8(void)
{
 CLIENT *VAR_7;
 AUTH *VAR_8;
 COMPOUND4args VAR_9;
 COMPOUND4res VAR_10;
 enum clnt_stat VAR_11;
 struct timeval VAR_12;
 nfs_argop4 VAR_13[1];
 char *VAR_14 = "dtrace test";
 volatile int VAR_15 = 0;

 while (FUNC_7(&VAR_15) == 0)
  continue;

 VAR_12.tv_sec = 30;
 VAR_12.tv_usec = 0;

 VAR_7 = FUNC_3("localhost", VAR_0, VAR_2, "tcp");
 if (VAR_7 == ((void*)0)) {
  FUNC_4("test");
  return (1);
 }
 VAR_8 = FUNC_0();
 VAR_7->cl_auth = VAR_8;
 VAR_9.minorversion = 0;
 VAR_9.tag.utf8string_len = FUNC_6(VAR_14);
 VAR_9.tag.utf8string_val = VAR_14;
 VAR_9.argarray.argarray_len = sizeof (VAR_13) / sizeof (nfs_argop4);
 VAR_9.argarray.argarray_val = VAR_13;

 VAR_13[0].argop = VAR_3;


 FUNC_1(&VAR_10, sizeof (VAR_10));

 VAR_11 = FUNC_2(VAR_7, VAR_1,
     VAR_5, (caddr_t)&VAR_9,
     VAR_6, (caddr_t)&VAR_10,
     VAR_12);
 if (VAR_11 != VAR_4) {
  FUNC_5(VAR_7, "test");
  return (2);
 }

 return (0);
}
