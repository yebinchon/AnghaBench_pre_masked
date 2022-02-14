
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct g_provider {int name; } ;
struct g_consumer {struct g_provider* provider; } ;
struct TYPE_4__ {int s_version; char* s_volume_name; } ;
typedef TYPE_1__ reiserfs_sb_t ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct g_consumer*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_5(struct g_consumer *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct g_provider *VAR_5;
 reiserfs_sb_t *VAR_6;

 FUNC_3();
 VAR_5 = VAR_2->provider;
 VAR_3[0] = '\0';


 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (VAR_6 == ((void*)0)) {

  VAR_6 = FUNC_2(VAR_2, VAR_0);
 }
 if (VAR_6 == ((void*)0))
  return;


 if (VAR_6->s_version == 2) {
  FUNC_0(1, "reiserfs file system detected on %s.",
      VAR_5->name);
 } else {
  goto exit_free;
 }


 if (VAR_6->s_volume_name[0] == '\0')
  goto exit_free;


 VAR_6->s_volume_name[sizeof(VAR_6->s_volume_name) - 1] = '\0';
 FUNC_4(VAR_3, VAR_6->s_volume_name, VAR_4);

exit_free:
 FUNC_1(VAR_6);
}
