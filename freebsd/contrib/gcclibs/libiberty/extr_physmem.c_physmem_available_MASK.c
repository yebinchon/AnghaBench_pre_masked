
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vmstats ;
typedef int usermem ;
struct tbl_vmstats {double free_count; double pagesize; } ;
struct rminfo {double availrmem; } ;
struct pst_static {double page_size; } ;
struct pst_dynamic {double psd_free; } ;
struct TYPE_5__ {int dwLength; scalar_t__ ullAvailPhys; } ;
typedef TYPE_1__ lMEMORYSTATUSEX ;
struct TYPE_6__ {scalar_t__ dwAvailPhys; } ;
typedef int (* PFN_MS_EX ) (TYPE_1__*) ;
typedef TYPE_3__ MEMORYSTATUS ;
typedef int HMODULE ;


 int FUNC_0 (int*) ;

 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__*) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct pst_dynamic*,int,int,int ) ;
 scalar_t__ FUNC_6 (struct pst_static*,int,int,int ) ;
 double FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int*,int ,unsigned int*,size_t*,int *,int ) ;
 scalar_t__ FUNC_9 (int ,int ,struct rminfo*,int) ;
 int FUNC_10 (int ,int ,struct tbl_vmstats*,int,int) ;

double
FUNC_11 (void)
{
  return FUNC_4 () / 4;
}
