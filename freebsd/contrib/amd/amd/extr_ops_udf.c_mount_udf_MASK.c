
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int voidp ;
typedef scalar_t__ uid_t ;
struct TYPE_7__ {char* fspec; int version; void* sessionnr; void* gmtoff; scalar_t__ anon_gid; scalar_t__ anon_uid; scalar_t__ nobody_gid; scalar_t__ nobody_uid; int udfmflags; } ;
typedef TYPE_1__ udf_args_t ;
typedef int udf_args ;
struct TYPE_8__ {char* mnt_dir; char* mnt_fsname; char* mnt_opts; int mnt_type; } ;
typedef TYPE_2__ mntent_t ;
typedef int mnt ;
typedef scalar_t__ gid_t ;
typedef int caddr_t ;
typedef int MTYPE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 void* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 char* FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_11 ;
 int FUNC_8 (TYPE_2__*,int,int ,int ,int ,int ,int *,int ,int) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int
FUNC_10(char *VAR_12, char *VAR_13, char *VAR_14, int VAR_15)
{
 udf_args_t VAR_16;
 mntent_t VAR_17;
 int VAR_18;
 char *VAR_19;







 MTYPE_TYPE VAR_20 = VAR_8;
 VAR_19 = ((void*)0);
 FUNC_7((voidp) &VAR_16, 0, sizeof(VAR_16));




 FUNC_7((voidp)&VAR_17, 0, sizeof(VAR_17));
 VAR_17.mnt_dir = VAR_12;
 VAR_17.mnt_fsname = VAR_13;
 VAR_17.mnt_type = VAR_7;
 VAR_17.mnt_opts = VAR_14;

 VAR_18 = FUNC_5(&VAR_17);
 return FUNC_8(&VAR_17, VAR_18, (caddr_t)&VAR_16, 0, VAR_20, 0, ((void*)0),
     VAR_11, VAR_15);
}
