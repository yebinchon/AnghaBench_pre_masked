
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int error; int flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,struct g_provider*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,struct g_provider*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct g_provider *VAR_6, int VAR_7)
{


 FUNC_2(VAR_1, "g_orphan_provider(%p(%s), %d)",
     VAR_6, VAR_6->name, VAR_7);
 FUNC_0(VAR_7 != 0,
     ("g_orphan_provider(%p(%s), 0) error must be non-zero\n",
      VAR_6, VAR_6->name));

 VAR_6->error = VAR_7;
 FUNC_3(&VAR_3);
 FUNC_0(!(VAR_6->flags & VAR_0),
     ("g_orphan_provider(%p(%s)), already an orphan", VAR_6, VAR_6->name));
 VAR_6->flags |= VAR_0;
 FUNC_1(&VAR_2, VAR_6, VAR_5);
 FUNC_4(&VAR_3);
 FUNC_5(&VAR_4);
}
