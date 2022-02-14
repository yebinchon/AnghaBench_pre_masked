
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int u_char ;
struct g_provider {int sectorsize; int mediasize; } ;
struct g_part_table {scalar_t__ gpt_depth; } ;
struct g_consumer {struct g_provider* provider; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,struct g_consumer*,char**) ;
 int* FUNC_2 (struct g_consumer*,long,int,int*) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(struct g_part_table *VAR_8, struct g_consumer *VAR_9)
{
 char VAR_10[64];
 struct g_provider *VAR_11;
 u_char *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 uint16_t VAR_17;

 VAR_11 = VAR_9->provider;


 if (VAR_11->sectorsize < VAR_4 || VAR_11->mediasize < VAR_11->sectorsize)
  return (VAR_5);
 if (VAR_11->sectorsize > 4096)
  return (VAR_6);


 if (VAR_8->gpt_depth == 0)
  return (VAR_6);
 VAR_14 = FUNC_1("PART::scheme", VAR_9, &VAR_10);
 if (VAR_14 != 0)
  return (VAR_14);
 if (FUNC_4(VAR_10, "MBR") != 0)
  return (VAR_6);

 VAR_14 = FUNC_1("PART::type", VAR_9, &VAR_10);
 if (VAR_14 != 0)
  return (VAR_14);
 if (FUNC_4(VAR_10, "ebr") != 0)
  return (VAR_6);


 VAR_12 = FUNC_2(VAR_9, 0L, VAR_11->sectorsize, &VAR_14);
 if (VAR_12 == ((void*)0))
  return (VAR_14);


 VAR_16 = VAR_6;

 VAR_17 = FUNC_3(VAR_12 + VAR_1);
 if (VAR_17 != VAR_0)
  goto out;

 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  VAR_13 = VAR_12 + VAR_2 + VAR_15 * VAR_3;
  if (VAR_13[0] != 0 && VAR_13[0] != 0x80)
   goto out;
 }
 VAR_16 = VAR_7;

 out:
 FUNC_0(VAR_12);
 return (VAR_16);
}
