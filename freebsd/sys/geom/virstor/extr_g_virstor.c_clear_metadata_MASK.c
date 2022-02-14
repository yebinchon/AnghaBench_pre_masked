
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_virstor_component {TYPE_2__* gcons; } ;
struct TYPE_5__ {TYPE_1__* provider; } ;
struct TYPE_4__ {scalar_t__ sectorsize; scalar_t__ mediasize; int name; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,scalar_t__,char*,scalar_t__) ;
 char* FUNC_5 (scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct g_virstor_component *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 FUNC_0(VAR_0, "Clearing metadata on %s",
     VAR_4->gcons->provider->name);
 FUNC_3();
 VAR_6 = FUNC_2(VAR_4->gcons, 0, 1, 0);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_5 = FUNC_5(VAR_4->gcons->provider->sectorsize, VAR_1,
     VAR_2 | VAR_3);
 VAR_6 = FUNC_4(VAR_4->gcons,
     VAR_4->gcons->provider->mediasize -
     VAR_4->gcons->provider->sectorsize,
     VAR_5,
     VAR_4->gcons->provider->sectorsize);
 FUNC_1(VAR_5, VAR_1);
 FUNC_2(VAR_4->gcons, 0, -1, 0);
 return (VAR_6);
}
