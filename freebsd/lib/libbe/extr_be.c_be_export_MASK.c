
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_8__ {int member_0; } ;
typedef TYPE_1__ sendflags_t ;
struct TYPE_9__ {int lzh; } ;
typedef TYPE_2__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,char*) ;
 int FUNC_1 (TYPE_2__*,char const*,int *,int,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *,int *,int,TYPE_1__) ;

int
FUNC_6(libbe_handle_t *VAR_3, const char *VAR_4, int VAR_5)
{
 char VAR_6[VAR_1];
 char VAR_7[VAR_1];
 zfs_handle_t *VAR_8;
 sendflags_t VAR_9 = { 0 };
 int VAR_10;

 if ((VAR_10 = FUNC_1(VAR_3, VAR_4, ((void*)0), 1, VAR_6)) != 0)

  return (VAR_10);

 FUNC_0(VAR_3, VAR_6, VAR_7);

 if ((VAR_8 = FUNC_4(VAR_3->lzh, VAR_7, VAR_2)) == ((void*)0))
  return (FUNC_2(VAR_3, VAR_0));

 VAR_10 = FUNC_5(VAR_8, ((void*)0), VAR_5, VAR_9);
 FUNC_3(VAR_8);

 return (VAR_10);
}
