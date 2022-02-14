
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct g_provider {int sectorsize; int mediasize; } ;
struct g_part_table {int dummy; } ;
struct g_consumer {struct g_provider* provider; } ;
struct disklabel {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (struct g_consumer*,int,int,int*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct g_part_table *VAR_6, struct g_consumer *VAR_7)
{
 struct g_provider *VAR_8;
 u_char *VAR_9;
 uint32_t VAR_10, VAR_11;
 int VAR_12;

 VAR_8 = VAR_7->provider;


 if (VAR_8->sectorsize < sizeof(struct disklabel) ||
     VAR_8->mediasize < VAR_0)
  return (VAR_2);
 if (VAR_0 % VAR_8->sectorsize)
  return (VAR_3);


 VAR_9 = FUNC_1(VAR_7, VAR_8->sectorsize, VAR_8->sectorsize, &VAR_12);
 if (VAR_9 == ((void*)0))
  return (VAR_12);
 VAR_10 = FUNC_2(VAR_9 + 0);
 VAR_11 = FUNC_2(VAR_9 + 132);
 FUNC_0(VAR_9);
 return ((VAR_10 == VAR_1 && VAR_11 == VAR_1)
     ? VAR_5 : VAR_4);
}
