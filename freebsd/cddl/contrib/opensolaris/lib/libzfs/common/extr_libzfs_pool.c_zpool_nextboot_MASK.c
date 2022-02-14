
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int member_0; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
struct TYPE_9__ {int libzfs_fd; } ;
typedef TYPE_2__ libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int *) ;

int
FUNC_7(libzfs_handle_t *VAR_3, uint64_t VAR_4, uint64_t VAR_5,
    const char *VAR_6)
{
 zfs_cmd_t VAR_7 = { 0 };
 nvlist_t *VAR_8;
 char *VAR_9;
 size_t VAR_10;
 int VAR_11;

 VAR_8 = FUNC_2();
 FUNC_1(VAR_8, VAR_2, VAR_4);
 FUNC_1(VAR_8, VAR_1, VAR_5);
 FUNC_0(VAR_8, "command", VAR_6);
 VAR_11 = FUNC_6(VAR_3, &VAR_7, VAR_8);
 if (VAR_11 == 0)
  VAR_11 = FUNC_3(VAR_3->libzfs_fd, VAR_0, &VAR_7);
 FUNC_5(&VAR_7);
 FUNC_4(VAR_8);
 return (VAR_11);
}
