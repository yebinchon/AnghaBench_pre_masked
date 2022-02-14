
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zy7_devcfg_softc {int sysctl_tree; struct sysctl_oid* sysctl_tree_top; } ;
struct sysctl_oid {int dummy; } ;
typedef int fclk_num ;
struct TYPE_3__ {int actual_frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,char*,int ,int *,int,char*) ;
 void* FUNC_1 (int *,int ,int ,char*,int ,int ,char*) ;
 int FUNC_2 (int *,int ,int ,char*,int,TYPE_1__*,int,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_8(struct zy7_devcfg_softc *VAR_10)
{
 struct sysctl_oid *VAR_11;
 char VAR_12[4];
 int VAR_13;

 FUNC_7(&VAR_10->sysctl_tree);
 VAR_10->sysctl_tree_top = FUNC_1(&VAR_10->sysctl_tree,
     FUNC_4(VAR_6), VAR_5, "fclk",
     VAR_0, 0, "");
 if (VAR_10->sysctl_tree_top == ((void*)0)) {
  FUNC_6(&VAR_10->sysctl_tree);
  return (-1);
 }

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  FUNC_5(VAR_12, sizeof(VAR_12), "%d", VAR_13);
  VAR_11 = FUNC_1(&VAR_10->sysctl_tree,
      FUNC_3(VAR_10->sysctl_tree_top), VAR_5, VAR_12,
      VAR_0, 0, "");

  FUNC_0(&VAR_10->sysctl_tree,
      FUNC_3(VAR_11), VAR_5,
      "actual_freq", VAR_0,
      &VAR_7[VAR_13].actual_frequency, VAR_13,
      "Actual frequency");
  FUNC_2(&VAR_10->sysctl_tree,
      FUNC_3(VAR_11), VAR_5,
      "freq", VAR_1 | VAR_2,
      &VAR_7[VAR_13], VAR_13,
      VAR_8,
      "I", "Configured frequency");
  FUNC_2(&VAR_10->sysctl_tree,
      FUNC_3(VAR_11), VAR_5,
      "source", VAR_1 | VAR_3,
      &VAR_7[VAR_13], VAR_13,
      VAR_9,
      "A", "Clock source");
 }

 return (0);
}
