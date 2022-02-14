
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int consumers; } ;
struct g_consumer {int geom; struct g_provider* provider; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_consumer*) ;
 int FUNC_1 (struct g_provider*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,struct g_consumer*,int ) ;
 int FUNC_4 (struct g_consumer*,int ) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,struct g_consumer*,struct g_provider*) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct g_consumer *VAR_3, struct g_provider *VAR_4)
{
 int VAR_5;

 FUNC_5();
 FUNC_0(VAR_3);
 FUNC_1(VAR_4);
 FUNC_6(VAR_1, "g_attach(%p, %p)", VAR_3, VAR_4);
 FUNC_2(VAR_3->provider == ((void*)0), ("attach but attached"));
 VAR_3->provider = VAR_4;
 VAR_3->flags &= ~VAR_0;
 FUNC_3(&VAR_4->consumers, VAR_3, VAR_2);
 VAR_5 = FUNC_7(VAR_3->geom);
 if (VAR_5) {
  FUNC_4(VAR_3, VAR_2);
  VAR_3->provider = ((void*)0);
  FUNC_7(VAR_3->geom);
 }
 return (VAR_5);
}
