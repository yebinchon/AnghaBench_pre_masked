
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct filecaps {int fc_nioctls; struct filecaps const* fc_ioctls; } const filecaps ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct filecaps const* FUNC_1 (size_t,int ,int ) ;
 int FUNC_2 (struct filecaps const*,struct filecaps const*,size_t) ;

bool
FUNC_3(const struct filecaps *VAR_2, struct filecaps *VAR_3, bool VAR_4)
{
 size_t VAR_5;

 if (VAR_2->fc_ioctls != ((void*)0) && !VAR_4)
  return (0);
 FUNC_2(VAR_3, VAR_2, sizeof(*VAR_2));
 if (VAR_2->fc_ioctls == ((void*)0))
  return (1);

 FUNC_0(VAR_2->fc_nioctls > 0,
     ("fc_ioctls != NULL, but fc_nioctls=%hd", VAR_2->fc_nioctls));

 VAR_5 = sizeof(VAR_2->fc_ioctls[0]) * VAR_2->fc_nioctls;
 VAR_3->fc_ioctls = FUNC_1(VAR_5, VAR_0, VAR_1);
 FUNC_2(VAR_3->fc_ioctls, VAR_2->fc_ioctls, VAR_5);
 return (1);
}
