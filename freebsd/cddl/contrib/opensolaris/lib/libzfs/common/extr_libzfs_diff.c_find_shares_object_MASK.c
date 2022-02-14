
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct stat64 {scalar_t__ st_ino; int member_0; } ;
struct TYPE_5__ {scalar_t__ shares; int errbuf; TYPE_1__* zhp; int dsmnt; } ;
typedef TYPE_2__ differ_info_t ;
struct TYPE_4__ {int zfs_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,char*,char*) ;
 scalar_t__ FUNC_2 (char*,struct stat64*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(differ_info_t *VAR_4)
{
 char VAR_5[VAR_1];
 struct stat64 VAR_6 = { 0 };

 (void) FUNC_4(VAR_5, VAR_4->dsmnt, VAR_1);
 (void) FUNC_3(VAR_5, VAR_3, VAR_1);

 if (FUNC_2(VAR_5, &VAR_6) != 0) {





  return (0);

 }

 VAR_4->shares = (uint64_t)VAR_6.st_ino;
 return (0);
}
