
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct libbe_deep_clone {char const* bename; char* snapname; int depth_limit; scalar_t__ depth; TYPE_1__* lbh; } ;
struct TYPE_7__ {int lzh; } ;
typedef TYPE_1__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct libbe_deep_clone*) ;
 int FUNC_1 (TYPE_1__*,char const*,char*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*) ;
 int * FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_9(libbe_handle_t *VAR_3, const char *VAR_4, const char *VAR_5, int VAR_6)
{
 int VAR_7;
 char VAR_8[VAR_1];
 char *VAR_9, *VAR_10;
 zfs_handle_t *VAR_11;
 struct libbe_deep_clone VAR_12;


 if ((VAR_7 = FUNC_2(VAR_3, VAR_4)) != 0)
  return (FUNC_5(VAR_3, VAR_7));





 if ((VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_8)) != 0)
  return (FUNC_5(VAR_3, VAR_7));


 if ((VAR_7 = FUNC_3(VAR_3, VAR_8)) != 0)
  return (FUNC_5(VAR_3, VAR_7));


 if ((VAR_9 = FUNC_7(VAR_8)) == ((void*)0))
  return (FUNC_5(VAR_3, VAR_0));


 VAR_10 = FUNC_6(VAR_9, '@');
 if (VAR_10 == ((void*)0)) {
  FUNC_4(VAR_9);
  return (FUNC_5(VAR_3, VAR_0));
 }
 *VAR_10 = '\0';
 VAR_10++;


        VAR_12.lbh = VAR_3;
        VAR_12.bename = VAR_4;
        VAR_12.snapname = VAR_10;
 VAR_12.depth = 0;
 VAR_12.depth_limit = VAR_6;


 VAR_11 = FUNC_8(VAR_3->lzh, VAR_9, VAR_2);


 VAR_7 = FUNC_0(VAR_11, &VAR_12);

 FUNC_4(VAR_9);
 return (FUNC_5(VAR_3, VAR_7));
}
