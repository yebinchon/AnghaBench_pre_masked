
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct g_consumer {TYPE_1__* provider; } ;
struct TYPE_6__ {int s_magic; } ;
typedef TYPE_2__ reiserfs_sb_t ;
typedef int off_t ;
struct TYPE_5__ {int sectorsize; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct g_consumer*,int,int,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static reiserfs_sb_t *
FUNC_4(struct g_consumer *VAR_1, off_t VAR_2)
{
 reiserfs_sb_t *VAR_3;
 u_int VAR_4;

 VAR_4 = VAR_1->provider->sectorsize;

 if ((VAR_2 % VAR_4) != 0)
  return (((void*)0));

 VAR_3 = (reiserfs_sb_t *)FUNC_1(VAR_1, VAR_2, VAR_4, ((void*)0));
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 if (FUNC_3(VAR_3->s_magic, VAR_0,
     FUNC_2(VAR_0)) != 0) {
  FUNC_0(VAR_3);
  return (((void*)0));
 }

 return (VAR_3);
}
