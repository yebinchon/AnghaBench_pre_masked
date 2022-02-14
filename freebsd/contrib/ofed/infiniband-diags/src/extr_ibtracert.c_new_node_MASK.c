
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ib_portid_t ;
struct TYPE_13__ {int dist; struct TYPE_13__* dnext; int path; } ;
struct TYPE_12__ {scalar_t__ portguid; int lid; int portnum; } ;
typedef TYPE_1__ Port ;
typedef TYPE_2__ Node ;


 int FUNC_0 (char*,int,TYPE_2__*,int ,int ) ;
 int FUNC_1 (int ,char*,TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__** VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_4(Node * VAR_3, Port * VAR_4, ib_portid_t * VAR_5, int VAR_6)
{
 if (VAR_4->portguid == VAR_2) {
  VAR_3->dist = -1;
  FUNC_3(VAR_4, VAR_3);
  FUNC_1(VAR_0, "found target", VAR_3, VAR_4);
  return 1;
 }


 if (FUNC_2(VAR_3) < 0)
  return -1;

 FUNC_0("insert dist %d node %p port %d lid %d", VAR_6, VAR_3,
  VAR_4->portnum, VAR_4->lid);

 FUNC_3(VAR_4, VAR_3);

 VAR_3->dist = VAR_6;
 VAR_3->path = *VAR_5;
 VAR_3->dnext = VAR_1[VAR_6];
 VAR_1[VAR_6] = VAR_3;

 return 0;
}
