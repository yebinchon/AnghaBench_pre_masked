
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ypall_callback_fxn_t ;
typedef scalar_t__ voidp ;
struct ypall_callback {scalar_t__ foreach; scalar_t__ data; } ;
struct nis_callback_data {char* ncd_map; void (* ncd_fn ) (int *,char*,char*) ;int * ncd_m; } ;
typedef int mnt_map ;
struct TYPE_2__ {int nis_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (int ,char*,struct ypall_callback*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

int
FUNC_5(mnt_map *VAR_4, char *VAR_5, void (*VAR_6) (mnt_map *, char *, char *))
{
  int VAR_7;
  struct nis_callback_data VAR_8;
  struct ypall_callback VAR_9;

  if (!VAR_3.nis_domain) {
    VAR_7 = FUNC_0();
    if (VAR_7)
      return VAR_7;
  }
  VAR_8.ncd_m = VAR_4;
  VAR_8.ncd_map = VAR_5;
  VAR_8.ncd_fn = VAR_6;
  VAR_9.data = (voidp) &VAR_8;
  VAR_9.foreach = (ypall_callback_fxn_t) VAR_2;

  FUNC_1(VAR_1, "NIS map %s reloading using yp_all", VAR_5);







  VAR_7 = FUNC_2(VAR_3.nis_domain, VAR_5, &VAR_9);

  if (VAR_7)
    FUNC_1(VAR_0, "error grabbing nis map of %s: %s", VAR_5, FUNC_3(FUNC_4(VAR_7)));
  return VAR_7;
}
