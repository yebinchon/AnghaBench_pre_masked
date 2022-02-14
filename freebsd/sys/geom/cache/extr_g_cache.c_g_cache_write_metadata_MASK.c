
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct g_provider {scalar_t__ sectorsize; scalar_t__ mediasize; } ;
struct g_consumer {struct g_provider* provider; } ;
struct g_cache_metadata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct g_cache_metadata*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct g_consumer*,int ,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct g_consumer*,scalar_t__,int *,scalar_t__) ;
 int * FUNC_7 (size_t,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct g_consumer *VAR_3, struct g_cache_metadata *VAR_4)
{
 struct g_provider *VAR_5;
 u_char *VAR_6;
 int VAR_7;

 FUNC_3();

 VAR_7 = FUNC_2(VAR_3, 0, 1, 0);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_5 = VAR_3->provider;
 VAR_6 = FUNC_7((size_t)VAR_5->sectorsize, VAR_0, VAR_1 | VAR_2);
 FUNC_0(VAR_4, VAR_6);
 FUNC_5();
 VAR_7 = FUNC_6(VAR_3, VAR_5->mediasize - VAR_5->sectorsize, VAR_6, VAR_5->sectorsize);
 FUNC_4();
 FUNC_2(VAR_3, 0, -1, 0);
 FUNC_1(VAR_6, VAR_0);

 return (VAR_7);
}
