
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct iter_diff_data {int diff_flags; int fabric2_prefix; int fabric1_prefix; } ;
struct TYPE_12__ {TYPE_2__* remoteport; int info; } ;
typedef TYPE_3__ ibnd_port_t ;
struct TYPE_13__ {int numports; TYPE_3__** ports; } ;
typedef TYPE_4__ ibnd_node_t ;
struct TYPE_11__ {scalar_t__ guid; scalar_t__ base_lid; TYPE_1__* node; } ;
struct TYPE_10__ {int nodedesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int*,int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;

void FUNC_4(ibnd_node_t * VAR_6, ibnd_node_t * VAR_7,
         int *VAR_8, struct iter_diff_data *VAR_9)
{
 int VAR_10 = 0;

 for (VAR_10 = 1; VAR_10 <= VAR_6->numports; VAR_10++) {
  ibnd_port_t *VAR_11, *VAR_12;
  int VAR_13 = 0;

  VAR_11 = VAR_6->ports[VAR_10];
  VAR_12 = VAR_7->ports[VAR_10];

  if (!VAR_11 && !VAR_12)
   continue;

  if (VAR_9->diff_flags & VAR_2) {
   if ((VAR_11 && !VAR_12)
       || (!VAR_11 && VAR_12)
       || (VAR_11->remoteport
    && !VAR_12->remoteport)
       || (!VAR_11->remoteport
    && VAR_12->remoteport)
       || (VAR_11->remoteport
    && VAR_12->remoteport
    && VAR_11->remoteport->guid !=
    VAR_12->remoteport->guid))
    VAR_13++;
  }




  if (VAR_9->diff_flags & VAR_3
      && VAR_11
      && VAR_12) {
   int VAR_14, VAR_15;

   VAR_14 = FUNC_0(VAR_11->info, 0,
            VAR_4);
   VAR_15 = FUNC_0(VAR_12->info, 0,
            VAR_4);

   if (VAR_14 != VAR_15)
    VAR_13++;
  }

  if (VAR_9->diff_flags & VAR_2
      && VAR_9->diff_flags & VAR_0
      && VAR_11 && VAR_12
      && VAR_11->remoteport && VAR_12->remoteport
      && VAR_11->remoteport->base_lid != VAR_12->remoteport->base_lid)
   VAR_13++;

  if (VAR_9->diff_flags & VAR_2
      && VAR_9->diff_flags & VAR_1
      && VAR_11 && VAR_12
      && VAR_11->remoteport && VAR_12->remoteport
      && FUNC_1(VAR_11->remoteport->node->nodedesc,
         VAR_12->remoteport->node->nodedesc,
         VAR_5))
   VAR_13++;

  if (VAR_13 && VAR_11) {
   FUNC_2(VAR_6,
         VAR_8,
         ((void*)0));
   FUNC_3(VAR_6,
       VAR_11,
       VAR_9->fabric1_prefix);
  }

  if (VAR_13 && VAR_12) {
   FUNC_2(VAR_6,
         VAR_8,
         ((void*)0));
   FUNC_3(VAR_7,
       VAR_12,
       VAR_9->fabric2_prefix);
  }
 }
}
