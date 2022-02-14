
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct g_provider {int sectorsize; int mediasize; int name; } ;
struct g_part_table {scalar_t__ gpt_depth; } ;
struct g_consumer {struct g_provider* provider; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*,int ) ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char*,struct g_consumer*,scalar_t__**) ;
 scalar_t__* FUNC_3 (struct g_consumer*,int ,int,int*) ;
 int FUNC_4 (struct g_part_table*,struct g_consumer*) ;
 int* VAR_10 ;
 scalar_t__* FUNC_5 (struct g_consumer*,int,int*) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;
 scalar_t__ FUNC_7 (scalar_t__*,char*) ;

__attribute__((used)) static int
FUNC_8(struct g_part_table *VAR_11, struct g_consumer *VAR_12)
{
 struct g_provider *VAR_13;
 u_char *VAR_14, VAR_15[64];
 int VAR_16, VAR_17;


 VAR_13 = VAR_12->provider;
 if (VAR_13->sectorsize != 512)
  return (VAR_6);

 VAR_16 = FUNC_2("PART::scheme", VAR_12, &VAR_15);
 if (VAR_16 == 0 && FUNC_7(VAR_15, "GPT") == 0) {
  if (FUNC_2("PART::type", VAR_12, &VAR_15) != 0 ||
      FUNC_7(VAR_15, "ms-ldm-data") != 0)
   return (VAR_6);
  VAR_16 = FUNC_4(VAR_11, VAR_12);
  return (VAR_16);
 }

 if (VAR_11->gpt_depth != 0)
  return (VAR_6);


 if (VAR_13->mediasize <= 1024 * 1024)
  return (VAR_5);


 VAR_14 = FUNC_3(VAR_12, 0, VAR_13->sectorsize, &VAR_16);
 if (VAR_14 == ((void*)0))
  return (VAR_16);

 if (FUNC_6(VAR_14 + VAR_1) != VAR_0) {
  FUNC_1(VAR_14);
  return (VAR_6);
 }
 VAR_16 = VAR_6;

 for (VAR_17 = 0; VAR_17 < VAR_9 && VAR_16 != 0; VAR_17++) {
  if (VAR_14[VAR_2 + VAR_17 * VAR_3 + 4] == VAR_4)
   VAR_16 = 0;
 }
 FUNC_1(VAR_14);
 if (VAR_16 == 0) {
  FUNC_0(2, "%s: LDM data partitions found in MBR",
      VAR_13->name);

  VAR_14 = FUNC_5(VAR_12,
      VAR_10[VAR_8] * VAR_13->sectorsize, &VAR_16);
  if (VAR_14 == ((void*)0))
   return (VAR_16);
  FUNC_1(VAR_14);
  return (VAR_7);
 }
 return (VAR_16);
}
