
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct g_stripe_metadata {int dummy; } ;
struct g_provider {scalar_t__ sectorsize; scalar_t__ mediasize; } ;
struct g_consumer {struct g_provider* provider; } ;


 int FUNC_0 (struct g_consumer*,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct g_consumer*,scalar_t__,scalar_t__,int*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,struct g_stripe_metadata*) ;

__attribute__((used)) static int
FUNC_7(struct g_consumer *VAR_0, struct g_stripe_metadata *VAR_1)
{
 struct g_provider *VAR_2;
 u_char *VAR_3;
 int VAR_4;

 FUNC_3();

 VAR_4 = FUNC_0(VAR_0, 1, 0, 0);
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_2 = VAR_0->provider;
 FUNC_5();
 VAR_3 = FUNC_2(VAR_0, VAR_2->mediasize - VAR_2->sectorsize, VAR_2->sectorsize,
     &VAR_4);
 FUNC_4();
 FUNC_0(VAR_0, -1, 0, 0);
 if (VAR_3 == ((void*)0))
  return (VAR_4);


 FUNC_6(VAR_3, VAR_1);
 FUNC_1(VAR_3);

 return (0);
}
