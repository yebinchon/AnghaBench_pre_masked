
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct g_provider {scalar_t__ sectorsize; scalar_t__ mediasize; } ;
struct g_multipath_metadata {int dummy; } ;
struct g_consumer {struct g_provider* provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_consumer*,int,int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct g_consumer*,scalar_t__,int *,scalar_t__) ;
 int FUNC_7 (struct g_multipath_metadata*,int *) ;

__attribute__((used)) static int
FUNC_8(struct g_consumer *VAR_2,
    struct g_multipath_metadata *VAR_3)
{
 struct g_provider *VAR_4;
 u_char *VAR_5;
 int VAR_6;

 FUNC_3();
 VAR_6 = FUNC_0(VAR_2, 1, 1, 1);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_4 = VAR_2->provider;
 FUNC_5();
 VAR_5 = FUNC_2(VAR_4->sectorsize, VAR_0 | VAR_1);
 FUNC_7(VAR_3, VAR_5);
 VAR_6 = FUNC_6(VAR_2, VAR_4->mediasize - VAR_4->sectorsize,
     VAR_5, VAR_4->sectorsize);
 FUNC_4();
 FUNC_0(VAR_2, -1, -1, -1);
 FUNC_1(VAR_5);
 return (VAR_6);
}
