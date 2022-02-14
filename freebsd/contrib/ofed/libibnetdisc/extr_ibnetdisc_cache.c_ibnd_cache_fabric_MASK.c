
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_8__ {struct TYPE_8__* htnext; } ;
typedef TYPE_1__ ibnd_port_t ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_2__ ibnd_node_t ;
struct TYPE_10__ {TYPE_1__** portstbl; TYPE_2__* nodes; } ;
typedef TYPE_3__ ibnd_fabric_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (int,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (char const*,int,int) ;
 int FUNC_7 (char const*,struct stat*) ;
 char const* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*) ;

int FUNC_10(ibnd_fabric_t * VAR_6, const char *VAR_7,
        unsigned int VAR_8)
{
 struct stat VAR_9;
 ibnd_node_t *VAR_10 = ((void*)0);
 ibnd_node_t *VAR_11 = ((void*)0);
 unsigned int VAR_12 = 0;
 ibnd_port_t *VAR_13 = ((void*)0);
 ibnd_port_t *VAR_14 = ((void*)0);
 unsigned int VAR_15 = 0;
 int VAR_16;
 int VAR_17;

 if (!VAR_6) {
  FUNC_0("fabric parameter NULL\n");
  return -1;
 }

 if (!VAR_7) {
  FUNC_0("file parameter NULL\n");
  return -1;
 }

 if (!(VAR_8 & VAR_1)) {
  if (!FUNC_7(VAR_7, &VAR_9)) {
   if (FUNC_9(VAR_7) < 0) {
    FUNC_0("error removing '%s': %s\n",
        VAR_7, FUNC_8(VAR_5));
    return -1;
   }
  }
 }
 else {
  if (!FUNC_7(VAR_7, &VAR_9)) {
   FUNC_0("file '%s' already exists\n", VAR_7);
   return -1;
  }
 }

 if ((VAR_16 = FUNC_6(VAR_7, VAR_2 | VAR_3 | VAR_4, 0644)) < 0) {
  FUNC_0("open: %s\n", FUNC_8(VAR_5));
  return -1;
 }

 if (FUNC_2(VAR_16, VAR_6) < 0)
  goto cleanup;

 VAR_10 = VAR_6->nodes;
 while (VAR_10) {
  VAR_11 = VAR_10->next;

  if (FUNC_3(VAR_16, VAR_10) < 0)
   goto cleanup;

  VAR_12++;
  VAR_10 = VAR_11;
 }

 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  VAR_13 = VAR_6->portstbl[VAR_17];
  while (VAR_13) {
   VAR_14 = VAR_13->htnext;

   if (FUNC_4(VAR_16, VAR_13) < 0)
    goto cleanup;

   VAR_15++;
   VAR_13 = VAR_14;
  }
 }

 if (FUNC_1(VAR_16, VAR_12, VAR_15) < 0)
  goto cleanup;

 if (FUNC_5(VAR_16) < 0) {
  FUNC_0("close: %s\n", FUNC_8(VAR_5));
  goto cleanup;
 }

 return 0;

cleanup:
 FUNC_9(VAR_7);
 FUNC_5(VAR_16);
 return -1;
}
