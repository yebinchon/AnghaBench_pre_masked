
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct bhndb_softc {int bus_dev; int dev; } ;
struct bhndb_hw {size_t num_hw_reqs; struct bhnd_core_match* hw_reqs; } ;
struct bhnd_core_match {int dummy; } ;
struct bhnd_core_info {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ,struct bhnd_core_info*) ;
 int FUNC_1 (struct bhnd_core_info*,struct bhnd_core_match const*) ;

__attribute__((used)) static bool
FUNC_2(struct bhndb_softc *VAR_0, struct bhnd_core_info *VAR_1,
    u_int VAR_2, const struct bhndb_hw *VAR_3)
{
 for (u_int VAR_4 = 0; VAR_4 < VAR_3->num_hw_reqs; VAR_4++) {
  const struct bhnd_core_match *VAR_5;
  bool VAR_6;

  VAR_5 = &VAR_3->hw_reqs[VAR_4];
  VAR_6 = 0;

  for (u_int VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   struct bhnd_core_info *VAR_8 = &VAR_1[VAR_7];

   if (FUNC_0(VAR_0->dev, VAR_0->bus_dev, VAR_8))
    continue;

   if (!FUNC_1(VAR_8, VAR_5))
    continue;

   VAR_6 = 1;
   break;
  }

  if (!VAR_6)
   return (0);
 }

 return (1);
}
