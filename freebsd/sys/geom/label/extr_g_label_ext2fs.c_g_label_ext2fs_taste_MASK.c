
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct g_provider {int sectorsize; int name; } ;
struct g_consumer {struct g_provider* provider; } ;
struct TYPE_3__ {scalar_t__ s_magic; scalar_t__ s_rev_level; char* s_volume_name; } ;
typedef TYPE_1__ e2sb_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct g_consumer*,int,int,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_5(struct g_consumer *VAR_3, char *VAR_4, size_t VAR_5)
{
 struct g_provider *VAR_6;
 e2sb_t *VAR_7;
 char *VAR_8;

 FUNC_3();
 VAR_6 = VAR_3->provider;
 VAR_4[0] = '\0';

 if ((VAR_0 % VAR_6->sectorsize) != 0)
  return;

 VAR_7 = (e2sb_t *)FUNC_2(VAR_3, VAR_0, VAR_6->sectorsize, ((void*)0));
 if (VAR_7 == ((void*)0))
  return;


 if (VAR_7->s_magic == VAR_2 &&
     VAR_7->s_rev_level == VAR_1) {
  FUNC_0(1, "ext2fs file system detected on %s.",
      VAR_6->name);
 } else {
  goto exit_free;
 }

 VAR_8 = VAR_7->s_volume_name;

 VAR_8[sizeof(VAR_7->s_volume_name) - 1] = '\0';

 if (VAR_8[0] == '/')
  VAR_8 += 1;


 if (VAR_8[0] == '\0')
  goto exit_free;

 FUNC_4(VAR_4, VAR_8, VAR_5);

exit_free:
 FUNC_1(VAR_7);
}
