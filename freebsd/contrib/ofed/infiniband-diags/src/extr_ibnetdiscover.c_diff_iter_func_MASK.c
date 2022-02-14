
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct iter_diff_data {char* fabric1_prefix; int diff_flags; char* fabric2_prefix; int (* out_header_detail ) (TYPE_2__*,char*) ;int (* out_header ) (TYPE_2__*,int ,int *,char*,char*) ;int (* out_port ) (TYPE_1__*,int ,char*) ;int fabric2; } ;
struct TYPE_13__ {scalar_t__ remoteport; } ;
typedef TYPE_1__ ibnd_port_t ;
struct TYPE_14__ {int numports; scalar_t__ smalid; int nodedesc; TYPE_1__** ports; int guid; } ;
typedef TYPE_2__ ibnd_node_t ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,struct iter_diff_data*,int*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int*,struct iter_diff_data*) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int *,char*,char*) ;
 int FUNC_7 (TYPE_1__*,int ,char*) ;
 int FUNC_8 (TYPE_2__*,int ,int *,char*,char*) ;
 int FUNC_9 (TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_10(ibnd_node_t * VAR_5, void *VAR_6)
{
 struct iter_diff_data *VAR_7 = VAR_6;
 ibnd_node_t *VAR_8;
 ibnd_port_t *VAR_9;
 int VAR_10;

 FUNC_0("DEBUG: fabric1_node %p\n", VAR_5);

 VAR_8 = FUNC_4(VAR_7->fabric2, VAR_5->guid);
 if (!VAR_8) {
  (*VAR_7->out_header) (VAR_5, 0, ((void*)0),
         VAR_7->fabric1_prefix,
         VAR_7->fabric1_prefix);
  for (VAR_10 = 1; VAR_10 <= VAR_5->numports; VAR_10++) {
   VAR_9 = VAR_5->ports[VAR_10];
   if (VAR_9 && VAR_9->remoteport)
    (*VAR_7->out_port) (VAR_9, 0,
         VAR_7->fabric1_prefix);
  }
 } else if (VAR_7->diff_flags &
     (VAR_2 | VAR_0
      | VAR_1)) {
  int VAR_11 = 0;

  if ((VAR_7->diff_flags & VAR_0
       && VAR_5->smalid != VAR_8->smalid) ||
      (VAR_7->diff_flags & VAR_1
       && FUNC_5(VAR_5->nodedesc, VAR_8->nodedesc,
          VAR_3))) {
   (*VAR_7->out_header) (VAR_5, 0, ((void*)0), ((void*)0),
          VAR_7->fabric1_prefix);
   (*VAR_7->out_header_detail) (VAR_8,
          VAR_7->fabric2_prefix);
   FUNC_3(VAR_4, "\n");
   VAR_11++;
  }

  if (VAR_5->numports != VAR_8->numports) {
   FUNC_1(VAR_5, VAR_7,
          &VAR_11);
   FUNC_3(VAR_4, "%snumports = %d\n", VAR_7->fabric1_prefix,
    VAR_5->numports);
   FUNC_3(VAR_4, "%snumports = %d\n", VAR_7->fabric2_prefix,
    VAR_8->numports);
   return;
  }

  if (VAR_7->diff_flags & VAR_2
      || VAR_7->diff_flags & VAR_0)
   FUNC_2(VAR_5, VAR_8, &VAR_11,
       VAR_7);
 }
}
