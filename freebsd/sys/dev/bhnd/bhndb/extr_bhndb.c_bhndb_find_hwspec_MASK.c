
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhndb_softc {int dev; int parent_dev; } ;
struct bhndb_hw {int * hw_reqs; } ;
struct bhnd_core_info {int dummy; } ;


 struct bhndb_hw* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bhndb_softc*,struct bhnd_core_info*,int ,struct bhndb_hw const*) ;

__attribute__((used)) static int
FUNC_2(struct bhndb_softc *VAR_1, struct bhnd_core_info *VAR_2,
    u_int VAR_3, const struct bhndb_hw **VAR_4)
{
 const struct bhndb_hw *VAR_5, *VAR_6;


 VAR_6 = FUNC_0(VAR_1->parent_dev, VAR_1->dev);
 for (VAR_5 = VAR_6; VAR_5->hw_reqs != ((void*)0); VAR_5++) {
  if (!FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5))
   continue;


  *VAR_4 = VAR_5;
  return (0);
 }

 return (VAR_0);
}
