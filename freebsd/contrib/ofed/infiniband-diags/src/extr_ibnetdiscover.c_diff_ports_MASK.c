
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct iter_diff_data {int diff_flags; int fabric2_prefix; int (* out_port ) (TYPE_3__*,int ,int ) ;int fabric1_prefix; } ;
struct TYPE_12__ {scalar_t__ guid; scalar_t__ base_lid; TYPE_2__* remoteport; } ;
typedef TYPE_3__ ibnd_port_t ;
struct TYPE_13__ {int numports; TYPE_3__** ports; } ;
typedef TYPE_4__ ibnd_node_t ;
struct TYPE_11__ {scalar_t__ guid; scalar_t__ base_lid; TYPE_1__* node; } ;
struct TYPE_10__ {int nodedesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,struct iter_diff_data*,int*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(ibnd_node_t * VAR_4, ibnd_node_t * VAR_5,
         int *VAR_6, struct iter_diff_data *VAR_7)
{
 ibnd_port_t *VAR_8;
 ibnd_port_t *VAR_9;
 int VAR_10;

 for (VAR_10 = 1; VAR_10 <= VAR_4->numports; VAR_10++) {
  int VAR_11 = 0, VAR_12 = 0;

  VAR_8 = VAR_4->ports[VAR_10];
  VAR_9 = VAR_5->ports[VAR_10];

  if (VAR_7->diff_flags & VAR_2) {
   if ((VAR_8 && !VAR_9)
       || ((VAR_8 && VAR_9)
    && (VAR_8->remoteport
        && !VAR_9->remoteport)))
    VAR_11++;
   else if ((!VAR_8 && VAR_9)
     || ((VAR_8 && VAR_9)
         && (!VAR_8->remoteport
      && VAR_9->remoteport)))
    VAR_12++;
   else if ((VAR_8 && VAR_9)
     && ((VAR_8->guid != VAR_9->guid)
         ||
         ((VAR_8->remoteport
           && VAR_9->remoteport)
          && (VAR_8->remoteport->guid !=
       VAR_9->remoteport->guid)))) {
    VAR_11++;
    VAR_12++;
   }
  }

  if ((VAR_7->diff_flags & VAR_0)
      && VAR_8 && VAR_9
      && VAR_8->base_lid != VAR_9->base_lid) {
   VAR_11++;
   VAR_12++;
  }

  if (VAR_7->diff_flags & VAR_2
      && VAR_7->diff_flags & VAR_1
      && VAR_8 && VAR_9
      && VAR_8->remoteport && VAR_9->remoteport
      && FUNC_1(VAR_8->remoteport->node->nodedesc,
         VAR_9->remoteport->node->nodedesc,
         VAR_3)) {
   VAR_11++;
   VAR_12++;
  }

  if (VAR_7->diff_flags & VAR_2
      && VAR_7->diff_flags & VAR_1
      && VAR_8 && VAR_9
      && VAR_8->remoteport && VAR_9->remoteport
      && FUNC_1(VAR_8->remoteport->node->nodedesc,
         VAR_9->remoteport->node->nodedesc,
         VAR_3)) {
   VAR_11++;
   VAR_12++;
  }

  if (VAR_7->diff_flags & VAR_2
      && VAR_7->diff_flags & VAR_0
      && VAR_8 && VAR_9
      && VAR_8->remoteport && VAR_9->remoteport
      && VAR_8->remoteport->base_lid != VAR_9->remoteport->base_lid) {
   VAR_11++;
   VAR_12++;
  }

  if (VAR_11) {
   FUNC_0(VAR_4, VAR_7,
          VAR_6);
   (*VAR_7->out_port) (VAR_8, 0,
        VAR_7->fabric1_prefix);
  }
  if (VAR_12) {
   FUNC_0(VAR_4, VAR_7,
          VAR_6);
   (*VAR_7->out_port) (VAR_9, 0,
        VAR_7->fabric2_prefix);
  }
 }
}
