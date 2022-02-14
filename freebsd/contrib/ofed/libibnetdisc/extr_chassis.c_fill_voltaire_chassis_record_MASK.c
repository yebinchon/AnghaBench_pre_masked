
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int portnum; struct TYPE_16__* remoteport; TYPE_2__* node; } ;
typedef TYPE_1__ ibnd_port_t ;
struct TYPE_17__ {int ch_found; int numports; scalar_t__ type; TYPE_1__** ports; int ch_type; } ;
typedef TYPE_2__ ibnd_node_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(ibnd_node_t * VAR_1)
{
 int VAR_2 = 0;
 ibnd_port_t *VAR_3;
 ibnd_node_t *VAR_4 = 0;

 if (VAR_1->ch_found)
  return 0;
 VAR_1->ch_found = 1;




 if (FUNC_5(VAR_1))

  for (VAR_2 = 1; VAR_2 <= VAR_1->numports; VAR_2++) {
   VAR_3 = VAR_1->ports[VAR_2];
   if (VAR_3 && FUNC_6(VAR_3->remoteport->node))
    FUNC_0(VAR_1, VAR_3->remoteport);
  }
 else if (FUNC_6(VAR_1)) {
  int VAR_5 = FUNC_7(VAR_1);

  for (VAR_2 = 1; VAR_2 <= VAR_1->numports; VAR_2++) {
   VAR_3 = VAR_1->ports[VAR_2];
   if (!VAR_3 || !VAR_3->remoteport)
    continue;





   if (VAR_5 && (VAR_3->portnum > 18))
    continue;

   VAR_4 = VAR_3->remoteport->node;
   if (VAR_4->type != VAR_0) {
    if (!VAR_4->ch_found)
     FUNC_0(VAR_4, VAR_3);
    continue;
   }
   if (!VAR_1->ch_type)

    FUNC_1(VAR_1, VAR_3->remoteport);


  }

 } else if (FUNC_3(VAR_1)) {
  int VAR_6 = FUNC_4(VAR_1);

  for (VAR_2 = 1; VAR_2 <= VAR_1->numports; VAR_2++) {
   VAR_3 = VAR_1->ports[VAR_2];
   if (!VAR_3 || !VAR_3->remoteport)
    continue;

   if ((VAR_6 && (VAR_3->portnum > 18)) ||
       (!VAR_6 && (VAR_3->portnum > 12)))
    continue;


   FUNC_2(VAR_1, VAR_3->remoteport);
   break;
  }
 }


 for (VAR_2 = 1; VAR_2 <= VAR_1->numports; VAR_2++) {
  VAR_3 = VAR_1->ports[VAR_2];
  if (!VAR_3)
   continue;
  FUNC_8(VAR_3);
 }

 return 0;
}
