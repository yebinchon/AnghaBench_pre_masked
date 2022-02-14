
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct atse_softc {int dummy; } ;
typedef int device_t ;
struct TYPE_5__ {int * descr; int * name; } ;
struct TYPE_4__ {int * descr; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,int *,int,struct atse_softc*,int,int ,char*,int *) ;
 int FUNC_1 (struct sysctl_oid*) ;
 TYPE_1__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 struct atse_softc* FUNC_2 (int ) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_6(device_t VAR_8)
{
 struct sysctl_ctx_list *VAR_9;
 struct sysctl_oid *VAR_10;
 struct atse_softc *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_8);
 VAR_9 = FUNC_3(VAR_8);
 VAR_10 = FUNC_4(VAR_8);


 for (VAR_12 = 0; VAR_12 < FUNC_5(VAR_4); VAR_12++) {
  if (VAR_4[VAR_12].name == ((void*)0) ||
      VAR_4[VAR_12].descr == ((void*)0)) {
   continue;
  }

  FUNC_0(VAR_9, FUNC_1(VAR_10), VAR_3,
      VAR_4[VAR_12].name, VAR_2|VAR_1,
      VAR_11, VAR_12, VAR_6, "IU",
      VAR_4[VAR_12].descr);
 }


 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  if (VAR_5[VAR_12].name == ((void*)0) ||
      VAR_5[VAR_12].descr == ((void*)0)) {
   continue;
  }

  FUNC_0(VAR_9, FUNC_1(VAR_10), VAR_3,
      VAR_5[VAR_12].name, VAR_2|VAR_1,
      VAR_11, VAR_12, VAR_7, "IU",
      VAR_5[VAR_12].descr);
 }
}
